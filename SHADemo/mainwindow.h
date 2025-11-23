#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QByteArray>

#include "hashrecord.h"
#include "historyrepository.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_clicked();
    void on_clearHistoryButton_clicked();
    void on_exportButton_clicked();
    void on_importButton_clicked();
    void on_historyTableWidget_itemSelectionChanged();

private:
    Ui::MainWindow *ui;

    HistoryRepository m_repository;
    QList<HashRecord> m_records;

    void setupUiBehavior();
    void loadHistory();
    void addRecordToTable(const HashRecord &record, int row);
    QString computeHash(const QString &input, const QString &algorithm) const;

    void updateDetailsView(const QString &input,
                           const QString &algorithm,
                           const QString &hash);

    QString bytesToHexGrouped(const QByteArray &data,
                              int groupSize = 4,
                              int lineBreakEvery = 16) const;

    void fillSha256Details(const QString &input, const QString &hash);
    void clearDetailsView(const QString &message = QString());
};

#endif
