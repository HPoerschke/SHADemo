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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *selectTabWidget;
    QWidget *hash;
    QTableWidget *historyTableWidget;
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
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *buttonsLayout;
    QPushButton *generateButton;
    QPushButton *exportButton;
    QPushButton *importButton;
    QPushButton *clearHistoryButton;
    QWidget *detalhes;
    QGroupBox *detailsOriginalMessageBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *detailsOrignalMessageLayout;
    QLabel *detailsOriginalLengthLabel;
    QPlainTextEdit *detailsOriginalTextEdit;
    QGroupBox *detailsHexMessageBox;
    QPlainTextEdit *detailsEncodedHexTextEdit;
    QGroupBox *detailsPaddingBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *detailsVerticalLayout;
    QLabel *detailsPaddedLengthLabel;
    QPlainTextEdit *detailsFirstBlockHexTextEdit;
    QGroupBox *detailsInternalStateBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *detailsInternalStateLayout;
    QPlainTextEdit *detailsInitialHTextEdit;
    QPlainTextEdit *detailsFinalHTextEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *detailsFinalHashLayout;
    QLabel *label;
    QLineEdit *detailsFinalHashLineEdit;
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
        hash = new QWidget();
        hash->setObjectName("hash");
        historyTableWidget = new QTableWidget(hash);
        historyTableWidget->setObjectName("historyTableWidget");
        historyTableWidget->setGeometry(QRect(0, 160, 791, 361));
        horizontalLayoutWidget = new QWidget(hash);
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

        horizontalLayoutWidget_2 = new QWidget(hash);
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

        horizontalLayoutWidget_3 = new QWidget(hash);
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

        horizontalLayoutWidget_5 = new QWidget(hash);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(10, 70, 481, 27));
        buttonsLayout = new QHBoxLayout(horizontalLayoutWidget_5);
        buttonsLayout->setObjectName("buttonsLayout");
        buttonsLayout->setContentsMargins(0, 0, 0, 0);
        generateButton = new QPushButton(horizontalLayoutWidget_5);
        generateButton->setObjectName("generateButton");

        buttonsLayout->addWidget(generateButton);

        exportButton = new QPushButton(horizontalLayoutWidget_5);
        exportButton->setObjectName("exportButton");

        buttonsLayout->addWidget(exportButton);

        importButton = new QPushButton(horizontalLayoutWidget_5);
        importButton->setObjectName("importButton");

        buttonsLayout->addWidget(importButton);

        clearHistoryButton = new QPushButton(horizontalLayoutWidget_5);
        clearHistoryButton->setObjectName("clearHistoryButton");

        buttonsLayout->addWidget(clearHistoryButton);

        selectTabWidget->addTab(hash, QString());
        detalhes = new QWidget();
        detalhes->setObjectName("detalhes");
        detailsOriginalMessageBox = new QGroupBox(detalhes);
        detailsOriginalMessageBox->setObjectName("detailsOriginalMessageBox");
        detailsOriginalMessageBox->setGeometry(QRect(20, 10, 291, 211));
        verticalLayoutWidget = new QWidget(detailsOriginalMessageBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 20, 291, 191));
        detailsOrignalMessageLayout = new QVBoxLayout(verticalLayoutWidget);
        detailsOrignalMessageLayout->setObjectName("detailsOrignalMessageLayout");
        detailsOrignalMessageLayout->setContentsMargins(0, 0, 0, 0);
        detailsOriginalLengthLabel = new QLabel(verticalLayoutWidget);
        detailsOriginalLengthLabel->setObjectName("detailsOriginalLengthLabel");

        detailsOrignalMessageLayout->addWidget(detailsOriginalLengthLabel);

        detailsOriginalTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        detailsOriginalTextEdit->setObjectName("detailsOriginalTextEdit");
        detailsOriginalTextEdit->setReadOnly(true);

        detailsOrignalMessageLayout->addWidget(detailsOriginalTextEdit);

        detailsHexMessageBox = new QGroupBox(detalhes);
        detailsHexMessageBox->setObjectName("detailsHexMessageBox");
        detailsHexMessageBox->setGeometry(QRect(320, 10, 281, 211));
        detailsEncodedHexTextEdit = new QPlainTextEdit(detailsHexMessageBox);
        detailsEncodedHexTextEdit->setObjectName("detailsEncodedHexTextEdit");
        detailsEncodedHexTextEdit->setGeometry(QRect(0, 40, 281, 171));
        detailsEncodedHexTextEdit->setReadOnly(true);
        detailsPaddingBox = new QGroupBox(detalhes);
        detailsPaddingBox->setObjectName("detailsPaddingBox");
        detailsPaddingBox->setGeometry(QRect(20, 240, 291, 201));
        verticalLayoutWidget_2 = new QWidget(detailsPaddingBox);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 291, 181));
        detailsVerticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        detailsVerticalLayout->setObjectName("detailsVerticalLayout");
        detailsVerticalLayout->setContentsMargins(0, 0, 0, 0);
        detailsPaddedLengthLabel = new QLabel(verticalLayoutWidget_2);
        detailsPaddedLengthLabel->setObjectName("detailsPaddedLengthLabel");

        detailsVerticalLayout->addWidget(detailsPaddedLengthLabel);

        detailsFirstBlockHexTextEdit = new QPlainTextEdit(verticalLayoutWidget_2);
        detailsFirstBlockHexTextEdit->setObjectName("detailsFirstBlockHexTextEdit");
        detailsFirstBlockHexTextEdit->setReadOnly(true);

        detailsVerticalLayout->addWidget(detailsFirstBlockHexTextEdit);

        detailsInternalStateBox = new QGroupBox(detalhes);
        detailsInternalStateBox->setObjectName("detailsInternalStateBox");
        detailsInternalStateBox->setGeometry(QRect(320, 240, 271, 201));
        verticalLayoutWidget_3 = new QWidget(detailsInternalStateBox);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 20, 271, 181));
        detailsInternalStateLayout = new QVBoxLayout(verticalLayoutWidget_3);
        detailsInternalStateLayout->setObjectName("detailsInternalStateLayout");
        detailsInternalStateLayout->setContentsMargins(0, 0, 0, 0);
        detailsInitialHTextEdit = new QPlainTextEdit(verticalLayoutWidget_3);
        detailsInitialHTextEdit->setObjectName("detailsInitialHTextEdit");
        detailsInitialHTextEdit->setReadOnly(true);

        detailsInternalStateLayout->addWidget(detailsInitialHTextEdit);

        detailsFinalHTextEdit = new QPlainTextEdit(verticalLayoutWidget_3);
        detailsFinalHTextEdit->setObjectName("detailsFinalHTextEdit");
        detailsFinalHTextEdit->setReadOnly(true);

        detailsInternalStateLayout->addWidget(detailsFinalHTextEdit);

        horizontalLayoutWidget_4 = new QWidget(detalhes);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(20, 470, 751, 31));
        detailsFinalHashLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        detailsFinalHashLayout->setObjectName("detailsFinalHashLayout");
        detailsFinalHashLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName("label");

        detailsFinalHashLayout->addWidget(label);

        detailsFinalHashLineEdit = new QLineEdit(horizontalLayoutWidget_4);
        detailsFinalHashLineEdit->setObjectName("detailsFinalHashLineEdit");
        detailsFinalHashLineEdit->setReadOnly(true);

        detailsFinalHashLayout->addWidget(detailsFinalHashLineEdit);

        selectTabWidget->addTab(detalhes, QString());
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
        inputLabel->setText(QCoreApplication::translate("MainWindow", "Texto base:", nullptr));
        algorithmSelectorLabel->setText(QCoreApplication::translate("MainWindow", "Algoritmo:", nullptr));
        outputLabel->setText(QCoreApplication::translate("MainWindow", "Hash resultante:", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "Gerar Hash", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "Exportar hist\303\263rico", nullptr));
        importButton->setText(QCoreApplication::translate("MainWindow", "Importar hist\303\263rico", nullptr));
        clearHistoryButton->setText(QCoreApplication::translate("MainWindow", "Limpar hist\303\263rico", nullptr));
        selectTabWidget->setTabText(selectTabWidget->indexOf(hash), QCoreApplication::translate("MainWindow", "Hash", nullptr));
        detailsOriginalMessageBox->setTitle(QCoreApplication::translate("MainWindow", "Mensagem original", nullptr));
        detailsOriginalLengthLabel->setText(QCoreApplication::translate("MainWindow", "N bytes", nullptr));
        detailsHexMessageBox->setTitle(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        detailsPaddingBox->setTitle(QCoreApplication::translate("MainWindow", "Padding e blocos", nullptr));
        detailsPaddedLengthLabel->setText(QCoreApplication::translate("MainWindow", "Tamanho ap\303\263s padding + blocos:", nullptr));
        detailsInternalStateBox->setTitle(QCoreApplication::translate("MainWindow", "Estado interno", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hash final", nullptr));
        selectTabWidget->setTabText(selectTabWidget->indexOf(detalhes), QCoreApplication::translate("MainWindow", "Detalhes do Algoritmo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
