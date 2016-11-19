/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPrint_to_PDF;
    QAction *actionPrint_to_XLSX;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *fileInputComboBox;
    QGridLayout *gridLayout_2;
    QCheckBox *docNameCheckBox;
    QLineEdit *designationLineEdit;
    QLineEdit *docNameLineEdit;
    QCheckBox *designationCheckBox;
    QLineEdit *fileNameLineEdit;
    QPushButton *fileDialogButton;
    QGroupBox *filterComboBox;
    QGridLayout *gridLayout_5;
    QWidget *filtersWidget;
    QProgressBar *progressBar;
    QPushButton *analyzeButton;
    QTextEdit *logTextEdit;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout_3;
    QWidget *shortReportWidget;
    QWidget *tabWidgetPage2;
    QGridLayout *gridLayout_4;
    QWidget *fullReportWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(817, 445);
        actionPrint_to_PDF = new QAction(MainWindow);
        actionPrint_to_PDF->setObjectName(QStringLiteral("actionPrint_to_PDF"));
        actionPrint_to_XLSX = new QAction(MainWindow);
        actionPrint_to_XLSX->setObjectName(QStringLiteral("actionPrint_to_XLSX"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fileInputComboBox = new QGroupBox(centralWidget);
        fileInputComboBox->setObjectName(QStringLiteral("fileInputComboBox"));
        gridLayout_2 = new QGridLayout(fileInputComboBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        docNameCheckBox = new QCheckBox(fileInputComboBox);
        docNameCheckBox->setObjectName(QStringLiteral("docNameCheckBox"));

        gridLayout_2->addWidget(docNameCheckBox, 1, 0, 1, 1);

        designationLineEdit = new QLineEdit(fileInputComboBox);
        designationLineEdit->setObjectName(QStringLiteral("designationLineEdit"));

        gridLayout_2->addWidget(designationLineEdit, 2, 1, 1, 1);

        docNameLineEdit = new QLineEdit(fileInputComboBox);
        docNameLineEdit->setObjectName(QStringLiteral("docNameLineEdit"));

        gridLayout_2->addWidget(docNameLineEdit, 1, 1, 1, 1);

        designationCheckBox = new QCheckBox(fileInputComboBox);
        designationCheckBox->setObjectName(QStringLiteral("designationCheckBox"));

        gridLayout_2->addWidget(designationCheckBox, 2, 0, 1, 1);

        fileNameLineEdit = new QLineEdit(fileInputComboBox);
        fileNameLineEdit->setObjectName(QStringLiteral("fileNameLineEdit"));

        gridLayout_2->addWidget(fileNameLineEdit, 0, 1, 1, 1);

        fileDialogButton = new QPushButton(fileInputComboBox);
        fileDialogButton->setObjectName(QStringLiteral("fileDialogButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileDialogButton->sizePolicy().hasHeightForWidth());
        fileDialogButton->setSizePolicy(sizePolicy);
        fileDialogButton->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(fileDialogButton, 0, 2, 1, 1);


        gridLayout->addWidget(fileInputComboBox, 0, 0, 1, 1);

        filterComboBox = new QGroupBox(centralWidget);
        filterComboBox->setObjectName(QStringLiteral("filterComboBox"));
        gridLayout_5 = new QGridLayout(filterComboBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        filtersWidget = new QWidget(filterComboBox);
        filtersWidget->setObjectName(QStringLiteral("filtersWidget"));

        gridLayout_5->addWidget(filtersWidget, 0, 0, 1, 1);

        fileInputComboBox->raise();
        filtersWidget->raise();

        gridLayout->addWidget(filterComboBox, 3, 0, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 5, 0, 1, 1);

        analyzeButton = new QPushButton(centralWidget);
        analyzeButton->setObjectName(QStringLiteral("analyzeButton"));

        gridLayout->addWidget(analyzeButton, 4, 0, 1, 1);

        logTextEdit = new QTextEdit(centralWidget);
        logTextEdit->setObjectName(QStringLiteral("logTextEdit"));

        gridLayout->addWidget(logTextEdit, 6, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        gridLayout_3 = new QGridLayout(tabWidgetPage1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        shortReportWidget = new QWidget(tabWidgetPage1);
        shortReportWidget->setObjectName(QStringLiteral("shortReportWidget"));

        gridLayout_3->addWidget(shortReportWidget, 0, 0, 1, 1);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        gridLayout_4 = new QGridLayout(tabWidgetPage2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        fullReportWidget = new QWidget(tabWidgetPage2);
        fullReportWidget->setObjectName(QStringLiteral("fullReportWidget"));

        gridLayout_4->addWidget(fullReportWidget, 0, 0, 1, 1);

        tabWidget->addTab(tabWidgetPage2, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 7, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 817, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionPrint_to_PDF);
        menuFile->addAction(actionPrint_to_XLSX);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionPrint_to_PDF->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\262 PDF", 0));
        actionPrint_to_XLSX->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\262 XLSX", 0));
        fileInputComboBox->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\204\320\260\320\271\320\273\320\260", 0));
        docNameCheckBox->setText(QString());
        designationCheckBox->setText(QString());
        fileDialogButton->setText(QApplication::translate("MainWindow", "...", 0));
        filterComboBox->setTitle(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200", 0));
        analyzeButton->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("MainWindow", "\320\232\321\200\320\260\321\202\320\272\320\270\320\271", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\275\321\213\320\271", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
