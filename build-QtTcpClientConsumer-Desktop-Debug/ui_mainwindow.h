/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(643, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        PB_Connect = new QPushButton(centralWidget);
        PB_Connect->setObjectName(QString::fromUtf8("PB_Connect"));

        gridLayout->addWidget(PB_Connect, 4, 0, 1, 1);

        PB_Disconnect = new QPushButton(centralWidget);
        PB_Disconnect->setObjectName(QString::fromUtf8("PB_Disconnect"));

        gridLayout->addWidget(PB_Disconnect, 4, 1, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 5, 0, 1, 2);

        PBupdate = new QPushButton(centralWidget);
        PBupdate->setObjectName(QString::fromUtf8("PBupdate"));

        gridLayout->addWidget(PBupdate, 6, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        PB_Start = new QPushButton(centralWidget);
        PB_Start->setObjectName(QString::fromUtf8("PB_Start"));

        gridLayout->addWidget(PB_Start, 9, 0, 1, 1);

        PB_Stop = new QPushButton(centralWidget);
        PB_Stop->setObjectName(QString::fromUtf8("PB_Stop"));

        gridLayout->addWidget(PB_Stop, 9, 1, 1, 1);

        textIP = new QLineEdit(centralWidget);
        textIP->setObjectName(QString::fromUtf8("textIP"));

        gridLayout->addWidget(textIP, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sliderTiming = new QSlider(centralWidget);
        sliderTiming->setObjectName(QString::fromUtf8("sliderTiming"));
        sliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderTiming);

        textTiming = new QLabel(centralWidget);
        textTiming->setObjectName(QString::fromUtf8("textTiming"));

        horizontalLayout_2->addWidget(textTiming);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        widgetPlotter = new Plotter(centralWidget);
        widgetPlotter->setObjectName(QString::fromUtf8("widgetPlotter"));
        pushButtonGet = new QPushButton(widgetPlotter);
        pushButtonGet->setObjectName(QString::fromUtf8("pushButtonGet"));
        pushButtonGet->setGeometry(QRect(160, 110, 101, 29));

        horizontalLayout->addWidget(widgetPlotter);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Timing", 0, QApplication::UnicodeUTF8));
        PB_Connect->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        PB_Disconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        PBupdate->setText(QApplication::translate("MainWindow", "Update", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "IP do servidor", 0, QApplication::UnicodeUTF8));
        PB_Start->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        PB_Stop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        textIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        textTiming->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButtonGet->setText(QApplication::translate("MainWindow", "getData", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
