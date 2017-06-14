/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <plotter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *PB_Connect;
    QPushButton *PB_Disconnect;
    QListWidget *listWidget;
    QPushButton *PBupdate;
    QLabel *label_2;
    QPushButton *PB_Start;
    QPushButton *PB_Stop;
    QLineEdit *textIP;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sliderTiming;
    QLabel *textTiming;
    Plotter *widgetPlotter;
    QPushButton *pushButtonGet;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(643, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        PB_Connect = new QPushButton(centralWidget);
        PB_Connect->setObjectName(QStringLiteral("PB_Connect"));

        gridLayout->addWidget(PB_Connect, 4, 0, 1, 1);

        PB_Disconnect = new QPushButton(centralWidget);
        PB_Disconnect->setObjectName(QStringLiteral("PB_Disconnect"));

        gridLayout->addWidget(PB_Disconnect, 4, 1, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 5, 0, 1, 2);

        PBupdate = new QPushButton(centralWidget);
        PBupdate->setObjectName(QStringLiteral("PBupdate"));

        gridLayout->addWidget(PBupdate, 6, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        PB_Start = new QPushButton(centralWidget);
        PB_Start->setObjectName(QStringLiteral("PB_Start"));

        gridLayout->addWidget(PB_Start, 9, 0, 1, 1);

        PB_Stop = new QPushButton(centralWidget);
        PB_Stop->setObjectName(QStringLiteral("PB_Stop"));

        gridLayout->addWidget(PB_Stop, 9, 1, 1, 1);

        textIP = new QLineEdit(centralWidget);
        textIP->setObjectName(QStringLiteral("textIP"));

        gridLayout->addWidget(textIP, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sliderTiming = new QSlider(centralWidget);
        sliderTiming->setObjectName(QStringLiteral("sliderTiming"));
        sliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderTiming);

        textTiming = new QLabel(centralWidget);
        textTiming->setObjectName(QStringLiteral("textTiming"));

        horizontalLayout_2->addWidget(textTiming);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QStringLiteral("widgetPlotter"));
        pushButtonGet = new QPushButton(widgetPlotter);
        pushButtonGet->setObjectName(QStringLiteral("pushButtonGet"));
        pushButtonGet->setGeometry(QRect(160, 110, 101, 29));

        horizontalLayout->addWidget(widgetPlotter);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Timing", 0));
        PB_Connect->setText(QApplication::translate("MainWindow", "Connect", 0));
        PB_Disconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        PBupdate->setText(QApplication::translate("MainWindow", "Update", 0));
        label_2->setText(QApplication::translate("MainWindow", "IP do servidor", 0));
        PB_Start->setText(QApplication::translate("MainWindow", "Start", 0));
        PB_Stop->setText(QApplication::translate("MainWindow", "Stop", 0));
        textIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        textTiming->setText(QApplication::translate("MainWindow", "1", 0));
        pushButtonGet->setText(QApplication::translate("MainWindow", "getData", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
