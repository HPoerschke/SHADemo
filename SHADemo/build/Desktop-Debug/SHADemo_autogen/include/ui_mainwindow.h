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
#include <QtWidgets/QGridLayout>
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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *selectTabWidget;
    QWidget *hash;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *hashPageLayout;
    QVBoxLayout *hashOptions;
    QHBoxLayout *buttonsAndAlgorithmLayout;
    QHBoxLayout *baseTextLayout;
    QLabel *inputLabel;
    QLineEdit *inputLineEdit;
    QHBoxLayout *algorithmSelectorLayout;
    QHBoxLayout *buttonsLayout;
    QPushButton *generateButton;
    QPushButton *exportButton;
    QPushButton *importButton;
    QPushButton *clearHistoryButton;
    QLabel *algorithmSelectorLabel;
    QComboBox *algorithmComboBox;
    QHBoxLayout *outputLayout;
    QLabel *outputLabel;
    QLineEdit *hashOutputLineEdit;
    QTableWidget *historyTableWidget;
    QWidget *detalhes;
    QWidget *gridLayoutWidget;
    QGridLayout *detailsPageLayout;
    QGroupBox *detailsOriginalMessageBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *detailsOrignalMessageLayout;
    QLabel *detailsOriginalLengthLabel;
    QPlainTextEdit *detailsOriginalTextEdit;
    QGroupBox *detailsHexMessageBox;
    QPlainTextEdit *detailsEncodedHexTextEdit;
    QGroupBox *detailsInternalStateBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *detailsInternalStateLayout;
    QPlainTextEdit *detailsInitialHTextEdit;
    QPlainTextEdit *detailsFinalHTextEdit;
    QGroupBox *detailsPaddingBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *detailsVerticalLayout;
    QLabel *detailsPaddedLengthLabel;
    QPlainTextEdit *detailsFirstBlockHexTextEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *detailsFinalHashLayout;
    QLabel *label;
    QLineEdit *detailsFinalHashLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1074, 765);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        selectTabWidget = new QTabWidget(centralwidget);
        selectTabWidget->setObjectName("selectTabWidget");
        selectTabWidget->setGeometry(QRect(0, 0, 831, 600));
        selectTabWidget->setMinimumSize(QSize(800, 600));
        selectTabWidget->setMaximumSize(QSize(1920, 1080));
        hash = new QWidget();
        hash->setObjectName("hash");
        verticalLayoutWidget_5 = new QWidget(hash);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(0, 0, 811, 581));
        hashPageLayout = new QVBoxLayout(verticalLayoutWidget_5);
        hashPageLayout->setObjectName("hashPageLayout");
        hashPageLayout->setSizeConstraint(QLayout::SetFixedSize);
        hashPageLayout->setContentsMargins(1, 1, 1, 1);
        hashOptions = new QVBoxLayout();
        hashOptions->setObjectName("hashOptions");
        buttonsAndAlgorithmLayout = new QHBoxLayout();
        buttonsAndAlgorithmLayout->setObjectName("buttonsAndAlgorithmLayout");

        hashOptions->addLayout(buttonsAndAlgorithmLayout);

        baseTextLayout = new QHBoxLayout();
        baseTextLayout->setObjectName("baseTextLayout");
        inputLabel = new QLabel(verticalLayoutWidget_5);
        inputLabel->setObjectName("inputLabel");

        baseTextLayout->addWidget(inputLabel);

        inputLineEdit = new QLineEdit(verticalLayoutWidget_5);
        inputLineEdit->setObjectName("inputLineEdit");

        baseTextLayout->addWidget(inputLineEdit);


        hashOptions->addLayout(baseTextLayout);


        hashPageLayout->addLayout(hashOptions);

        algorithmSelectorLayout = new QHBoxLayout();
        algorithmSelectorLayout->setObjectName("algorithmSelectorLayout");
        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName("buttonsLayout");
        generateButton = new QPushButton(verticalLayoutWidget_5);
        generateButton->setObjectName("generateButton");

        buttonsLayout->addWidget(generateButton);

        exportButton = new QPushButton(verticalLayoutWidget_5);
        exportButton->setObjectName("exportButton");

        buttonsLayout->addWidget(exportButton);

        importButton = new QPushButton(verticalLayoutWidget_5);
        importButton->setObjectName("importButton");

        buttonsLayout->addWidget(importButton);

        clearHistoryButton = new QPushButton(verticalLayoutWidget_5);
        clearHistoryButton->setObjectName("clearHistoryButton");

        buttonsLayout->addWidget(clearHistoryButton);


        algorithmSelectorLayout->addLayout(buttonsLayout);

        algorithmSelectorLabel = new QLabel(verticalLayoutWidget_5);
        algorithmSelectorLabel->setObjectName("algorithmSelectorLabel");

        algorithmSelectorLayout->addWidget(algorithmSelectorLabel);

        algorithmComboBox = new QComboBox(verticalLayoutWidget_5);
        algorithmComboBox->setObjectName("algorithmComboBox");
        algorithmComboBox->setMinimumSize(QSize(0, 0));

        algorithmSelectorLayout->addWidget(algorithmComboBox);


        hashPageLayout->addLayout(algorithmSelectorLayout);

        outputLayout = new QHBoxLayout();
        outputLayout->setObjectName("outputLayout");
        outputLabel = new QLabel(verticalLayoutWidget_5);
        outputLabel->setObjectName("outputLabel");

        outputLayout->addWidget(outputLabel);

        hashOutputLineEdit = new QLineEdit(verticalLayoutWidget_5);
        hashOutputLineEdit->setObjectName("hashOutputLineEdit");
        hashOutputLineEdit->setReadOnly(true);

        outputLayout->addWidget(hashOutputLineEdit);


        hashPageLayout->addLayout(outputLayout);

        historyTableWidget = new QTableWidget(verticalLayoutWidget_5);
        historyTableWidget->setObjectName("historyTableWidget");

        hashPageLayout->addWidget(historyTableWidget);

        selectTabWidget->addTab(hash, QString());
        detalhes = new QWidget();
        detalhes->setObjectName("detalhes");
        gridLayoutWidget = new QWidget(detalhes);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 821, 602));
        detailsPageLayout = new QGridLayout(gridLayoutWidget);
        detailsPageLayout->setObjectName("detailsPageLayout");
        detailsPageLayout->setContentsMargins(1, 1, 1, 1);
        detailsOriginalMessageBox = new QGroupBox(gridLayoutWidget);
        detailsOriginalMessageBox->setObjectName("detailsOriginalMessageBox");
        detailsOriginalMessageBox->setMinimumSize(QSize(800, 600));
        detailsOriginalMessageBox->setMaximumSize(QSize(1920, 1080));
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

        detailsHexMessageBox = new QGroupBox(detailsOriginalMessageBox);
        detailsHexMessageBox->setObjectName("detailsHexMessageBox");
        detailsHexMessageBox->setGeometry(QRect(490, 0, 281, 201));
        detailsEncodedHexTextEdit = new QPlainTextEdit(detailsHexMessageBox);
        detailsEncodedHexTextEdit->setObjectName("detailsEncodedHexTextEdit");
        detailsEncodedHexTextEdit->setGeometry(QRect(0, 20, 281, 181));
        detailsEncodedHexTextEdit->setReadOnly(true);
        detailsInternalStateBox = new QGroupBox(detailsOriginalMessageBox);
        detailsInternalStateBox->setObjectName("detailsInternalStateBox");
        detailsInternalStateBox->setGeometry(QRect(490, 220, 281, 201));
        verticalLayoutWidget_3 = new QWidget(detailsInternalStateBox);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 20, 281, 181));
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

        detailsPaddingBox = new QGroupBox(detailsOriginalMessageBox);
        detailsPaddingBox->setObjectName("detailsPaddingBox");
        detailsPaddingBox->setGeometry(QRect(0, 220, 291, 201));
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

        horizontalLayoutWidget_4 = new QWidget(detailsOriginalMessageBox);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(0, 440, 771, 31));
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


        detailsPageLayout->addWidget(detailsOriginalMessageBox, 0, 0, 1, 1);

        selectTabWidget->addTab(detalhes, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1074, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        selectTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        inputLabel->setText(QCoreApplication::translate("MainWindow", "Texto base:", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "Gerar Hash", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "Exportar hist\303\263rico", nullptr));
        importButton->setText(QCoreApplication::translate("MainWindow", "Importar hist\303\263rico", nullptr));
        clearHistoryButton->setText(QCoreApplication::translate("MainWindow", "Limpar hist\303\263rico", nullptr));
        algorithmSelectorLabel->setText(QCoreApplication::translate("MainWindow", "Algoritmo:", nullptr));
        outputLabel->setText(QCoreApplication::translate("MainWindow", "Hash resultante:", nullptr));
        selectTabWidget->setTabText(selectTabWidget->indexOf(hash), QCoreApplication::translate("MainWindow", "Hash", nullptr));
        detailsOriginalMessageBox->setTitle(QCoreApplication::translate("MainWindow", "Mensagem original", nullptr));
        detailsOriginalLengthLabel->setText(QCoreApplication::translate("MainWindow", "N bytes", nullptr));
        detailsHexMessageBox->setTitle(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        detailsInternalStateBox->setTitle(QCoreApplication::translate("MainWindow", "Estado interno", nullptr));
        detailsPaddingBox->setTitle(QCoreApplication::translate("MainWindow", "Padding e blocos", nullptr));
        detailsPaddedLengthLabel->setText(QCoreApplication::translate("MainWindow", "Tamanho ap\303\263s padding + blocos:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hash final", nullptr));
        selectTabWidget->setTabText(selectTabWidget->indexOf(detalhes), QCoreApplication::translate("MainWindow", "Detalhes do Algoritmo", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
