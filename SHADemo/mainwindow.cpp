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
    // Configura combo de algoritmos
    ui->algorithmComboBox->clear();
    ui->algorithmComboBox->addItem("SHA-256");
    ui->algorithmComboBox->addItem("SHA-1");

    // Configura tabela de histórico
    ui->historyTableWidget->setColumnCount(4);
    QStringList headers;
    headers << "Entrada" << "Algoritmo" << "Hash" << "Data/Hora";
    ui->historyTableWidget->setHorizontalHeaderLabels(headers);
    ui->historyTableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->historyTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->historyTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
}
