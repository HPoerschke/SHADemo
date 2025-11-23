#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QCryptographicHash>
#include <QDateTime>
#include <QStandardPaths>
#include <QDir>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QAbstractItemView>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_repository(
          QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)
          + QDir::separator()
          + "hash_history.csv")
{
    ui->setupUi(this);

    setupUiBehavior();
    loadHistory();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupUiBehavior()
{
    if (ui->selectTabWidget) {
        ui->selectTabWidget->setTabText(0, tr("Hash"));
        ui->selectTabWidget->setTabText(1, tr("Detalhes do algoritmo"));
    }

    ui->algorithmComboBox->clear();
    ui->algorithmComboBox->addItem("SHA-256");
    ui->algorithmComboBox->addItem("SHA-1");

    ui->historyTableWidget->setColumnCount(4);
    QStringList headers;
    headers << "Entrada" << "Algoritmo" << "Hash" << "Data/Hora";
    ui->historyTableWidget->setHorizontalHeaderLabels(headers);
    ui->historyTableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->historyTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->historyTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    clearDetailsView("Gere um hash SHA-256 para visualizar o passo a passo em alto nível.");
}

void MainWindow::loadHistory()
{
    m_records = m_repository.load();

    ui->historyTableWidget->setRowCount(0);

    int row = 0;
    for (const HashRecord &rec : m_records) {
        ui->historyTableWidget->insertRow(row);
        addRecordToTable(rec, row);
        ++row;
    }
}

void MainWindow::addRecordToTable(const HashRecord &record, int row)
{
    QTableWidgetItem *itemInput = new QTableWidgetItem(record.input());
    QTableWidgetItem *itemAlg   = new QTableWidgetItem(record.algorithm());
    QTableWidgetItem *itemHash  = new QTableWidgetItem(record.hash());
    QTableWidgetItem *itemTs    = new QTableWidgetItem(
        record.timestamp().toString("dd/MM/yyyy HH:mm:ss"));

    ui->historyTableWidget->setItem(row, 0, itemInput);
    ui->historyTableWidget->setItem(row, 1, itemAlg);
    ui->historyTableWidget->setItem(row, 2, itemHash);
    ui->historyTableWidget->setItem(row, 3, itemTs);
}

QString MainWindow::computeHash(const QString &input, const QString &algorithm) const
{
    QCryptographicHash::Algorithm alg = QCryptographicHash::Sha256;
    if (algorithm == "SHA-1") {
        alg = QCryptographicHash::Sha1;
    }

    const QByteArray data   = input.toUtf8();
    const QByteArray digest = QCryptographicHash::hash(data, alg);
    return QString::fromLatin1(digest.toHex());
}

QString MainWindow::bytesToHexGrouped(const QByteArray &data,
                                      int groupSize,
                                      int lineBreakEvery) const
{
    QString result;
    int count = data.size();

    for (int i = 0; i < count; ++i) {
        unsigned char b = static_cast<unsigned char>(data.at(i));
        result += QString::asprintf("%02x", b);

        if (i + 1 < count)
            result += " ";

        if ((i + 1) % lineBreakEvery == 0 && i + 1 < count)
            result += "\n";
        else if ((i + 1) % groupSize == 0 &&
                 (i + 1) % lineBreakEvery != 0 &&
                 i + 1 < count)
            result += " ";
    }

    if (result.isEmpty())
        result = "(sem dados)";

    return result;
}

void MainWindow::clearDetailsView(const QString &message)
{
    if (ui->detailsOriginalTextEdit)
        ui->detailsOriginalTextEdit->clear();
    if (ui->detailsOriginalLengthLabel)
        ui->detailsOriginalLengthLabel->setText(QString());
    if (ui->detailsEncodedHexTextEdit)
        ui->detailsEncodedHexTextEdit->clear();
    if (ui->detailsPaddedLengthLabel)
        ui->detailsPaddedLengthLabel->setText(QString());
    if (ui->detailsFirstBlockHexTextEdit)
        ui->detailsFirstBlockHexTextEdit->clear();
    if (ui->detailsInitialHTextEdit)
        ui->detailsInitialHTextEdit->clear();
    if (ui->detailsFinalHTextEdit)
        ui->detailsFinalHTextEdit->clear();
    if (ui->detailsFinalHashLineEdit)
        ui->detailsFinalHashLineEdit->clear();

    if (!message.isEmpty() && ui->detailsOriginalTextEdit) {
        ui->detailsOriginalTextEdit->setPlainText(message);
    }
}

void MainWindow::fillSha256Details(const QString &input, const QString &hash)
{
    QByteArray data = input.toUtf8();
    const int originalBytes = data.size();
    const quint64 originalBits =
        static_cast<quint64>(originalBytes) * 8ull;

    if (ui->detailsOriginalTextEdit)
        ui->detailsOriginalTextEdit->setPlainText(input);

    if (ui->detailsOriginalLengthLabel) {
        ui->detailsOriginalLengthLabel->setText(
            QString("%1 bytes (%2 bits)")
                .arg(originalBytes)
                .arg(originalBits));
    }

    if (ui->detailsEncodedHexTextEdit) {
        ui->detailsEncodedHexTextEdit->setPlainText(
            bytesToHexGrouped(data, 4, 16));
    }

    data.append(char(0x80));

    while ( (static_cast<quint64>(data.size()) * 8ull) % 512ull != 448ull ) {
        data.append(char(0x00));
    }

    quint64 bitLen = originalBits;
    for (int i = 7; i >= 0; --i) {
        char b = static_cast<char>((bitLen >> (i * 8)) & 0xFFu);
        data.append(b);
    }

    const quint64 paddedBits =
        static_cast<quint64>(data.size()) * 8ull;
    const quint64 blocks = paddedBits / 512ull;

    if (ui->detailsPaddedLengthLabel) {
        ui->detailsPaddedLengthLabel->setText(
            QString("Tamanho após padding: %1 bytes (%2 bits), %3 bloco(s) de 512 bits")
                .arg(data.size())
                .arg(paddedBits)
                .arg(blocks));
    }

    if (ui->detailsFirstBlockHexTextEdit) {
        int bytesToShow = qMin(64, data.size());
        QByteArray firstBlock = data.left(bytesToShow);
        ui->detailsFirstBlockHexTextEdit->setPlainText(
            bytesToHexGrouped(firstBlock, 4, 16));
    }

    if (ui->detailsInitialHTextEdit) {
        QString initialH;
        initialH += "H0 = 6a09e667\n";
        initialH += "H1 = bb67ae85\n";
        initialH += "H2 = 3c6ef372\n";
        initialH += "H3 = a54ff53a\n";
        initialH += "H4 = 510e527f\n";
        initialH += "H5 = 9b05688c\n";
        initialH += "H6 = 1f83d9ab\n";
        initialH += "H7 = 5be0cd19\n";
        ui->detailsInitialHTextEdit->setPlainText(initialH);
    }

    if (ui->detailsFinalHTextEdit) {
        QByteArray digest = QByteArray::fromHex(hash.toLatin1());
        QString finalH;

        if (digest.size() == 32) {
            for (int i = 0; i < 8; ++i) {
                quint32 word = 0;
                word |= (static_cast<unsigned char>(digest.at(4 * i    )) << 24);
                word |= (static_cast<unsigned char>(digest.at(4 * i + 1)) << 16);
                word |= (static_cast<unsigned char>(digest.at(4 * i + 2)) << 8);
                word |= (static_cast<unsigned char>(digest.at(4 * i + 3)));

                finalH += QString("H%1 = %2\n")
                              .arg(i)
                              .arg(word, 8, 16, QLatin1Char('0'));
            }
        } else {
            finalH = "Não foi possível decompor o hash em H0..H7.";
        }

        ui->detailsFinalHTextEdit->setPlainText(finalH);
    }

    if (ui->detailsFinalHashLineEdit) {
        ui->detailsFinalHashLineEdit->setText(hash);
    }
}

void MainWindow::updateDetailsView(const QString &input,
                                   const QString &algorithm,
                                   const QString &hash)
{
    if (algorithm == "SHA-256") {
        fillSha256Details(input, hash);
    } else {
        clearDetailsView(
            "Detalhamento passo a passo está implementado apenas para SHA-256.\n"
            "Selecione o algoritmo SHA-256 para visualizar o fluxo do algoritmo.");
    }
}

void MainWindow::on_generateButton_clicked()
{
    const QString text = ui->inputLineEdit->text();

    if (text.isEmpty()) {
        QMessageBox::warning(this, tr("Aviso"),
                             tr("Digite um texto para gerar o hash."));
        return;
    }

    const QString algorithm = ui->algorithmComboBox->currentText();
    const QString hash      = computeHash(text, algorithm);
    const QDateTime now     = QDateTime::currentDateTime();

    ui->hashOutputLineEdit->setText(hash);

    updateDetailsView(text, algorithm, hash);

    HashRecord rec(text, algorithm, hash, now);
    m_records.append(rec);

    int row = ui->historyTableWidget->rowCount();
    ui->historyTableWidget->insertRow(row);
    addRecordToTable(rec, row);

    m_repository.save(m_records);
}

void MainWindow::on_clearHistoryButton_clicked()
{
    m_records.clear();
    ui->historyTableWidget->setRowCount(0);
    m_repository.save(m_records);

    clearDetailsView("Histórico limpo.\nGere um novo hash para ver os detalhes novamente.");
}

void MainWindow::on_exportButton_clicked()
{
    if (m_records.isEmpty()) {
        QMessageBox::information(this,
                                 tr("Nada para exportar"),
                                 tr("O histórico está vazio. Gere pelo menos um hash antes de exportar."));
        return;
    }

    QString defaultPath =
        QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
        + QDir::separator()
        + "hash_history_export.csv";

    QString fileName = QFileDialog::getSaveFileName(
        this,
        tr("Exportar histórico"),
        defaultPath,
        tr("Arquivos CSV (*.csv);;Todos os arquivos (*.*)"));

    if (fileName.isEmpty())
        return;

    if (!HistoryRepository::saveToFile(fileName, m_records)) {
        QMessageBox::warning(this, tr("Erro ao exportar"),
                             tr("Não foi possível salvar o arquivo de exportação."));
    } else {
        QMessageBox::information(this, tr("Exportação concluída"),
                                 tr("Histórico exportado com sucesso."));
    }
}

void MainWindow::on_importButton_clicked()
{
    QString defaultPath =
        QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);

    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Importar histórico"),
        defaultPath,
        tr("Arquivos CSV (*.csv);;Todos os arquivos (*.*)"));

    if (fileName.isEmpty())
        return;

    QList<HashRecord> imported = HistoryRepository::loadFromFile(fileName);
    if (imported.isEmpty()) {
        QMessageBox::warning(this, tr("Importação"),
                             tr("Não foi possível ler registros válidos do arquivo selecionado."));
        return;
    }

    if (m_records.isEmpty()) {
        m_records = imported;

        ui->historyTableWidget->setRowCount(0);
        int row = 0;
        for (const HashRecord &rec : m_records) {
            ui->historyTableWidget->insertRow(row);
            addRecordToTable(rec, row);
            ++row;
        }

        m_repository.save(m_records);

        QMessageBox::information(this, tr("Importação concluída"),
                                 tr("Histórico importado com sucesso."));
        return;
    }

    QMessageBox msgBox(this);
    msgBox.setWindowTitle(tr("Importar histórico"));
    msgBox.setText(tr("Deseja substituir o histórico atual ou adicionar os registros importados ao final?"));
    QPushButton *replaceButton = msgBox.addButton(tr("Substituir"), QMessageBox::YesRole);
    QPushButton *appendButton  = msgBox.addButton(tr("Adicionar"), QMessageBox::NoRole);
    QPushButton *cancelButton  = msgBox.addButton(tr("Cancelar"), QMessageBox::RejectRole);
    msgBox.setDefaultButton(appendButton);

    msgBox.exec();

    if (msgBox.clickedButton() == cancelButton) {
        return;
    } else if (msgBox.clickedButton() == replaceButton) {
        m_records = imported;
    } else if (msgBox.clickedButton() == appendButton) {
        m_records.append(imported);
    }

    ui->historyTableWidget->setRowCount(0);
    int row = 0;
    for (const HashRecord &rec : m_records) {
        ui->historyTableWidget->insertRow(row);
        addRecordToTable(rec, row);
        ++row;
    }

    m_repository.save(m_records);

    QMessageBox::information(this, tr("Importação concluída"),
                             tr("Histórico importado com sucesso."));
}

void MainWindow::on_historyTableWidget_itemSelectionChanged()
{
    const QList<QTableWidgetItem*> selectedItems = ui->historyTableWidget->selectedItems();
    if (selectedItems.isEmpty())
        return;

    int row = selectedItems.first()->row();
    if (row < 0 || row >= m_records.size())
        return;

    const HashRecord &rec = m_records.at(row);

    ui->inputLineEdit->setText(rec.input());
    ui->hashOutputLineEdit->setText(rec.hash());

    updateDetailsView(rec.input(), rec.algorithm(), rec.hash());
}
