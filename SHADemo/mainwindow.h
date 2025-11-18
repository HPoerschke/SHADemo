#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_clicked();
    void on_clearHistoryButton_clicked();

private:
    Ui::MainWindow *ui;

    HistoryRepository m_repository;
    QList<HashRecord> m_records;

    void setupUiBehavior();
    void loadHistory();
    void addRecordToTable(const HashRecord &record, int row);
    QString computeHash(const QString &input, const QString &algorithm) const;
};

#endif // MAINWINDOW_H
