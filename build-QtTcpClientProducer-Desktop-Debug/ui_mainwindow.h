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
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *TextIP;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *PBconnect;
    QPushButton *PBdisconnect;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_5;
    QLCDNumber *lcdMin;
    QSlider *SliderMax;
    QLabel *label_17;
    QLabel *label_18;
    QLCDNumber *lcdMax;
    QSlider *SliderMin;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QSlider *SliderTiming;
    QLabel *textTiming;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBstart;
    QPushButton *PBstop;
    QTextEdit *TextOutput;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(604, 433);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        TextIP = new QLineEdit(centralWidget);
        TextIP->setObjectName(QString::fromUtf8("TextIP"));

        verticalLayout_5->addWidget(TextIP);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        PBconnect = new QPushButton(centralWidget);
        PBconnect->setObjectName(QString::fromUtf8("PBconnect"));

        horizontalLayout_10->addWidget(PBconnect);

        PBdisconnect = new QPushButton(centralWidget);
        PBdisconnect->setObjectName(QString::fromUtf8("PBdisconnect"));

        horizontalLayout_10->addWidget(PBdisconnect);


        verticalLayout_5->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lcdMin = new QLCDNumber(centralWidget);
        lcdMin->setObjectName(QString::fromUtf8("lcdMin"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdMin->sizePolicy().hasHeightForWidth());
        lcdMin->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        lcdMin->setFont(font);

        gridLayout_5->addWidget(lcdMin, 1, 1, 1, 1);

        SliderMax = new QSlider(centralWidget);
        SliderMax->setObjectName(QString::fromUtf8("SliderMax"));
        SliderMax->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(SliderMax, 2, 0, 1, 1);

        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 0, 1, 1, 1);

        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 2, 1, 1, 1);

        lcdMax = new QLCDNumber(centralWidget);
        lcdMax->setObjectName(QString::fromUtf8("lcdMax"));
        sizePolicy.setHeightForWidth(lcdMax->sizePolicy().hasHeightForWidth());
        lcdMax->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(lcdMax, 3, 1, 1, 1);

        SliderMin = new QSlider(centralWidget);
        SliderMin->setObjectName(QString::fromUtf8("SliderMin"));
        SliderMin->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(SliderMin, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_9->addWidget(label_19);

        SliderTiming = new QSlider(centralWidget);
        SliderTiming->setObjectName(QString::fromUtf8("SliderTiming"));
        SliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(SliderTiming);

        textTiming = new QLabel(centralWidget);
        textTiming->setObjectName(QString::fromUtf8("textTiming"));

        horizontalLayout_9->addWidget(textTiming);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PBstart = new QPushButton(centralWidget);
        PBstart->setObjectName(QString::fromUtf8("PBstart"));

        horizontalLayout->addWidget(PBstart);

        PBstop = new QPushButton(centralWidget);
        PBstop->setObjectName(QString::fromUtf8("PBstop"));

        horizontalLayout->addWidget(PBstop);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        TextOutput = new QTextEdit(centralWidget);
        TextOutput->setObjectName(QString::fromUtf8("TextOutput"));

        horizontalLayout_2->addWidget(TextOutput);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 25));
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
        TextIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        PBconnect->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        PBdisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Min", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Max", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Timing(s)", 0, QApplication::UnicodeUTF8));
        textTiming->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        PBstart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        PBstop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
