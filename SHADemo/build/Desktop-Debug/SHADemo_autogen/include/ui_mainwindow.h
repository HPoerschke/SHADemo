/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *selectTabWidget;
    QWidget *tab;
    QTableWidget *historyTableWidget;
    QPushButton *generateButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *baseTextLayout;
    QLabel *inputLabel;
    QLineEdit *inputLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *algorithmSelectorLayout;
    QLabel *algorithmSelectorLabel;
    QComboBox *algorithmComboBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *outputLayout;
    QLabel *outputLabel;
    QLineEdit *hashOutputLineEdit;
    QPushButton *clearHistoryButton;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        selectTabWidget = new QTabWidget(centralwidget);
        selectTabWidget->setObjectName("selectTabWidget");
        selectTabWidget->setGeometry(QRect(0, 0, 801, 571));
        tab = new QWidget();
        tab->setObjectName("tab");
        historyTableWidget = new QTableWidget(tab);
        historyTableWidget->setObjectName("historyTableWidget");
        historyTableWidget->setGeometry(QRect(0, 160, 791, 361));
        generateButton = new QPushButton(tab);
        generateButton->setObjectName("generateButton");
        generateButton->setGeometry(QRect(20, 70, 88, 25));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 771, 41));
        baseTextLayout = new QHBoxLayout(horizontalLayoutWidget);
        baseTextLayout->setObjectName("baseTextLayout");
        baseTextLayout->setContentsMargins(0, 0, 0, 0);
        inputLabel = new QLabel(horizontalLayoutWidget);
        inputLabel->setObjectName("inputLabel");

        baseTextLayout->addWidget(inputLabel);

        inputLineEdit = new QLineEdit(horizontalLayoutWidget);
        inputLineEdit->setObjectName("inputLineEdit");

        baseTextLayout->addWidget(inputLineEdit);

        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(580, 60, 201, 41));
        algorithmSelectorLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        algorithmSelectorLayout->setObjectName("algorithmSelectorLayout");
        algorithmSelectorLayout->setContentsMargins(0, 0, 0, 0);
        algorithmSelectorLabel = new QLabel(horizontalLayoutWidget_2);
        algorithmSelectorLabel->setObjectName("algorithmSelectorLabel");

        algorithmSelectorLayout->addWidget(algorithmSelectorLabel);

        algorithmComboBox = new QComboBox(horizontalLayoutWidget_2);
        algorithmComboBox->setObjectName("algorithmComboBox");

        algorithmSelectorLayout->addWidget(algorithmComboBox);

        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 110, 771, 41));
        outputLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        outputLayout->setObjectName("outputLayout");
        outputLayout->setContentsMargins(0, 0, 0, 0);
        outputLabel = new QLabel(horizontalLayoutWidget_3);
        outputLabel->setObjectName("outputLabel");

        outputLayout->addWidget(outputLabel);

        hashOutputLineEdit = new QLineEdit(horizontalLayoutWidget_3);
        hashOutputLineEdit->setObjectName("hashOutputLineEdit");
        hashOutputLineEdit->setReadOnly(true);

        outputLayout->addWidget(hashOutputLineEdit);

        clearHistoryButton = new QPushButton(tab);
        clearHistoryButton->setObjectName("clearHistoryButton");
        clearHistoryButton->setGeometry(QRect(120, 70, 111, 25));
        selectTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        selectTabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        selectTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "Gerar Hash", nullptr));
        inputLabel->setText(QCoreApplication::translate("MainWindow", "Texto base:", nullptr));
        algorithmSelectorLabel->setText(QCoreApplication::translate("MainWindow", "Algoritmo:", nullptr));
        outputLabel->setText(QCoreApplication::translate("MainWindow", "Hash resultante:", nullptr));
        clearHistoryButton->setText(QCoreApplication::translate("MainWindow", "Limpar hist\303\263rico", nullptr));
        selectTabWidget->setTabText(selectTabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Home", nullptr));
        selectTabWidget->setTabText(selectTabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Detalhes do Algoritmo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
