/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
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
    QGridLayout *gridLayout;
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
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selectTabWidget = new QTabWidget(centralwidget);
        selectTabWidget->setObjectName(QString::fromUtf8("selectTabWidget"));
        selectTabWidget->setMinimumSize(QSize(800, 600));
        selectTabWidget->setMaximumSize(QSize(1920, 1080));
        hash = new QWidget();
        hash->setObjectName(QString::fromUtf8("hash"));
        verticalLayoutWidget_5 = new QWidget(hash);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(0, 0, 811, 581));
        hashPageLayout = new QVBoxLayout(verticalLayoutWidget_5);
        hashPageLayout->setObjectName(QString::fromUtf8("hashPageLayout"));
        hashPageLayout->setSizeConstraint(QLayout::SetFixedSize);
        hashPageLayout->setContentsMargins(1, 1, 1, 1);
        hashOptions = new QVBoxLayout();
        hashOptions->setObjectName(QString::fromUtf8("hashOptions"));
        buttonsAndAlgorithmLayout = new QHBoxLayout();
        buttonsAndAlgorithmLayout->setObjectName(QString::fromUtf8("buttonsAndAlgorithmLayout"));

        hashOptions->addLayout(buttonsAndAlgorithmLayout);

        baseTextLayout = new QHBoxLayout();
        baseTextLayout->setObjectName(QString::fromUtf8("baseTextLayout"));
        inputLabel = new QLabel(verticalLayoutWidget_5);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));

        baseTextLayout->addWidget(inputLabel);

        inputLineEdit = new QLineEdit(verticalLayoutWidget_5);
        inputLineEdit->setObjectName(QString::fromUtf8("inputLineEdit"));

        baseTextLayout->addWidget(inputLineEdit);


        hashOptions->addLayout(baseTextLayout);


        hashPageLayout->addLayout(hashOptions);

        algorithmSelectorLayout = new QHBoxLayout();
        algorithmSelectorLayout->setObjectName(QString::fromUtf8("algorithmSelectorLayout"));
        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        generateButton = new QPushButton(verticalLayoutWidget_5);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));

        buttonsLayout->addWidget(generateButton);

        exportButton = new QPushButton(verticalLayoutWidget_5);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        buttonsLayout->addWidget(exportButton);

        importButton = new QPushButton(verticalLayoutWidget_5);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        buttonsLayout->addWidget(importButton);

        clearHistoryButton = new QPushButton(verticalLayoutWidget_5);
        clearHistoryButton->setObjectName(QString::fromUtf8("clearHistoryButton"));

        buttonsLayout->addWidget(clearHistoryButton);


        algorithmSelectorLayout->addLayout(buttonsLayout);

        algorithmSelectorLabel = new QLabel(verticalLayoutWidget_5);
        algorithmSelectorLabel->setObjectName(QString::fromUtf8("algorithmSelectorLabel"));

        algorithmSelectorLayout->addWidget(algorithmSelectorLabel);

        algorithmComboBox = new QComboBox(verticalLayoutWidget_5);
        algorithmComboBox->setObjectName(QString::fromUtf8("algorithmComboBox"));
        algorithmComboBox->setMinimumSize(QSize(0, 0));

        algorithmSelectorLayout->addWidget(algorithmComboBox);


        hashPageLayout->addLayout(algorithmSelectorLayout);

        outputLayout = new QHBoxLayout();
        outputLayout->setObjectName(QString::fromUtf8("outputLayout"));
        outputLabel = new QLabel(verticalLayoutWidget_5);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));

        outputLayout->addWidget(outputLabel);

        hashOutputLineEdit = new QLineEdit(verticalLayoutWidget_5);
        hashOutputLineEdit->setObjectName(QString::fromUtf8("hashOutputLineEdit"));
        hashOutputLineEdit->setReadOnly(true);

        outputLayout->addWidget(hashOutputLineEdit);


        hashPageLayout->addLayout(outputLayout);

        historyTableWidget = new QTableWidget(verticalLayoutWidget_5);
        historyTableWidget->setObjectName(QString::fromUtf8("historyTableWidget"));

        hashPageLayout->addWidget(historyTableWidget);

        selectTabWidget->addTab(hash, QString());
        detalhes = new QWidget();
        detalhes->setObjectName(QString::fromUtf8("detalhes"));
        gridLayoutWidget = new QWidget(detalhes);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 821, 602));
        detailsPageLayout = new QGridLayout(gridLayoutWidget);
        detailsPageLayout->setObjectName(QString::fromUtf8("detailsPageLayout"));
        detailsPageLayout->setContentsMargins(1, 1, 1, 1);
        detailsOriginalMessageBox = new QGroupBox(gridLayoutWidget);
        detailsOriginalMessageBox->setObjectName(QString::fromUtf8("detailsOriginalMessageBox"));
        detailsOriginalMessageBox->setMinimumSize(QSize(800, 600));
        detailsOriginalMessageBox->setMaximumSize(QSize(1920, 1080));
        verticalLayoutWidget = new QWidget(detailsOriginalMessageBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 291, 191));
        detailsOrignalMessageLayout = new QVBoxLayout(verticalLayoutWidget);
        detailsOrignalMessageLayout->setObjectName(QString::fromUtf8("detailsOrignalMessageLayout"));
        detailsOrignalMessageLayout->setContentsMargins(0, 0, 0, 0);
        detailsOriginalLengthLabel = new QLabel(verticalLayoutWidget);
        detailsOriginalLengthLabel->setObjectName(QString::fromUtf8("detailsOriginalLengthLabel"));

        detailsOrignalMessageLayout->addWidget(detailsOriginalLengthLabel);

        detailsOriginalTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        detailsOriginalTextEdit->setObjectName(QString::fromUtf8("detailsOriginalTextEdit"));
        detailsOriginalTextEdit->setReadOnly(true);

        detailsOrignalMessageLayout->addWidget(detailsOriginalTextEdit);

        detailsHexMessageBox = new QGroupBox(detailsOriginalMessageBox);
        detailsHexMessageBox->setObjectName(QString::fromUtf8("detailsHexMessageBox"));
        detailsHexMessageBox->setGeometry(QRect(490, 0, 281, 201));
        detailsEncodedHexTextEdit = new QPlainTextEdit(detailsHexMessageBox);
        detailsEncodedHexTextEdit->setObjectName(QString::fromUtf8("detailsEncodedHexTextEdit"));
        detailsEncodedHexTextEdit->setGeometry(QRect(0, 20, 281, 181));
        detailsEncodedHexTextEdit->setReadOnly(true);
        detailsInternalStateBox = new QGroupBox(detailsOriginalMessageBox);
        detailsInternalStateBox->setObjectName(QString::fromUtf8("detailsInternalStateBox"));
        detailsInternalStateBox->setGeometry(QRect(490, 220, 281, 201));
        verticalLayoutWidget_3 = new QWidget(detailsInternalStateBox);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 20, 281, 181));
        detailsInternalStateLayout = new QVBoxLayout(verticalLayoutWidget_3);
        detailsInternalStateLayout->setObjectName(QString::fromUtf8("detailsInternalStateLayout"));
        detailsInternalStateLayout->setContentsMargins(0, 0, 0, 0);
        detailsInitialHTextEdit = new QPlainTextEdit(verticalLayoutWidget_3);
        detailsInitialHTextEdit->setObjectName(QString::fromUtf8("detailsInitialHTextEdit"));
        detailsInitialHTextEdit->setReadOnly(true);

        detailsInternalStateLayout->addWidget(detailsInitialHTextEdit);

        detailsFinalHTextEdit = new QPlainTextEdit(verticalLayoutWidget_3);
        detailsFinalHTextEdit->setObjectName(QString::fromUtf8("detailsFinalHTextEdit"));
        detailsFinalHTextEdit->setReadOnly(true);

        detailsInternalStateLayout->addWidget(detailsFinalHTextEdit);

        detailsPaddingBox = new QGroupBox(detailsOriginalMessageBox);
        detailsPaddingBox->setObjectName(QString::fromUtf8("detailsPaddingBox"));
        detailsPaddingBox->setGeometry(QRect(0, 220, 291, 201));
        verticalLayoutWidget_2 = new QWidget(detailsPaddingBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 291, 181));
        detailsVerticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        detailsVerticalLayout->setObjectName(QString::fromUtf8("detailsVerticalLayout"));
        detailsVerticalLayout->setContentsMargins(0, 0, 0, 0);
        detailsPaddedLengthLabel = new QLabel(verticalLayoutWidget_2);
        detailsPaddedLengthLabel->setObjectName(QString::fromUtf8("detailsPaddedLengthLabel"));

        detailsVerticalLayout->addWidget(detailsPaddedLengthLabel);

        detailsFirstBlockHexTextEdit = new QPlainTextEdit(verticalLayoutWidget_2);
        detailsFirstBlockHexTextEdit->setObjectName(QString::fromUtf8("detailsFirstBlockHexTextEdit"));
        detailsFirstBlockHexTextEdit->setReadOnly(true);

        detailsVerticalLayout->addWidget(detailsFirstBlockHexTextEdit);

        horizontalLayoutWidget_4 = new QWidget(detailsOriginalMessageBox);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 440, 771, 31));
        detailsFinalHashLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        detailsFinalHashLayout->setObjectName(QString::fromUtf8("detailsFinalHashLayout"));
        detailsFinalHashLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));

        detailsFinalHashLayout->addWidget(label);

        detailsFinalHashLineEdit = new QLineEdit(horizontalLayoutWidget_4);
        detailsFinalHashLineEdit->setObjectName(QString::fromUtf8("detailsFinalHashLineEdit"));
        detailsFinalHashLineEdit->setReadOnly(true);

        detailsFinalHashLayout->addWidget(detailsFinalHashLineEdit);


        detailsPageLayout->addWidget(detailsOriginalMessageBox, 0, 0, 1, 1);

        selectTabWidget->addTab(detalhes, QString());

        gridLayout->addWidget(selectTabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(MainWindow);

        selectTabWidget->setCurrentIndex(0);


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
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
