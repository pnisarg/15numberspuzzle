/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Oct 5 22:14:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_9;
    QPushButton *button_10;
    QPushButton *button_11;
    QPushButton *button_12;
    QPushButton *button_13;
    QPushButton *button_14;
    QPushButton *button_15;
    QPushButton *button_16;
    QPushButton *button_7;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(489, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        frame->setMidLineWidth(1);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button_1 = new QPushButton(frame);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        button_1->setFont(font);

        gridLayout->addWidget(button_1, 0, 0, 1, 1);

        button_2 = new QPushButton(frame);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setMaximumSize(QSize(16777215, 16777215));
        button_2->setFont(font);

        gridLayout->addWidget(button_2, 0, 1, 1, 1);

        button_3 = new QPushButton(frame);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setMaximumSize(QSize(16777215, 16777215));
        button_3->setFont(font);

        gridLayout->addWidget(button_3, 0, 2, 1, 1);

        button_4 = new QPushButton(frame);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setMaximumSize(QSize(16777215, 16777215));
        button_4->setFont(font);

        gridLayout->addWidget(button_4, 0, 3, 1, 1);

        button_9 = new QPushButton(frame);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setMaximumSize(QSize(16777215, 16777215));
        button_9->setFont(font);

        gridLayout->addWidget(button_9, 2, 0, 1, 1);

        button_10 = new QPushButton(frame);
        button_10->setObjectName(QString::fromUtf8("button_10"));
        button_10->setMaximumSize(QSize(16777215, 16777215));
        button_10->setFont(font);

        gridLayout->addWidget(button_10, 2, 1, 1, 1);

        button_11 = new QPushButton(frame);
        button_11->setObjectName(QString::fromUtf8("button_11"));
        button_11->setMaximumSize(QSize(16777215, 16777215));
        button_11->setFont(font);

        gridLayout->addWidget(button_11, 2, 2, 1, 1);

        button_12 = new QPushButton(frame);
        button_12->setObjectName(QString::fromUtf8("button_12"));
        button_12->setMaximumSize(QSize(16777215, 16777215));
        button_12->setFont(font);

        gridLayout->addWidget(button_12, 2, 3, 1, 1);

        button_13 = new QPushButton(frame);
        button_13->setObjectName(QString::fromUtf8("button_13"));
        button_13->setMaximumSize(QSize(16777215, 16777215));
        button_13->setFont(font);

        gridLayout->addWidget(button_13, 3, 0, 1, 1);

        button_14 = new QPushButton(frame);
        button_14->setObjectName(QString::fromUtf8("button_14"));
        button_14->setMaximumSize(QSize(16777215, 16777215));
        button_14->setFont(font);

        gridLayout->addWidget(button_14, 3, 1, 1, 1);

        button_15 = new QPushButton(frame);
        button_15->setObjectName(QString::fromUtf8("button_15"));
        button_15->setMaximumSize(QSize(16777215, 16777215));
        button_15->setFont(font);

        gridLayout->addWidget(button_15, 3, 2, 1, 1);

        button_16 = new QPushButton(frame);
        button_16->setObjectName(QString::fromUtf8("button_16"));
        button_16->setMaximumSize(QSize(16777215, 16777215));
        button_16->setFont(font);

        gridLayout->addWidget(button_16, 3, 3, 1, 1);

        button_7 = new QPushButton(frame);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setMaximumSize(QSize(16777215, 16777215));
        button_7->setFont(font);

        gridLayout->addWidget(button_7, 1, 2, 1, 1);

        button_5 = new QPushButton(frame);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setMaximumSize(QSize(16777215, 16777215));
        button_5->setFont(font);

        gridLayout->addWidget(button_5, 1, 0, 1, 1);

        button_6 = new QPushButton(frame);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setMaximumSize(QSize(16777215, 16777215));
        button_6->setFont(font);

        gridLayout->addWidget(button_6, 1, 1, 1, 1);

        button_8 = new QPushButton(frame);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setMaximumSize(QSize(16777215, 16777215));
        button_8->setFont(font);

        gridLayout->addWidget(button_8, 1, 3, 1, 1);


        verticalLayout->addWidget(frame);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MV Boli\";"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"MV Boli\";"));

        verticalLayout->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 489, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), statusBar, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "15 Numbers Puzzle", 0, QApplication::UnicodeUTF8));
        button_1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        button_2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        button_3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        button_4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        button_9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        button_10->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        button_11->setText(QApplication::translate("MainWindow", "11", 0, QApplication::UnicodeUTF8));
        button_12->setText(QApplication::translate("MainWindow", "12", 0, QApplication::UnicodeUTF8));
        button_13->setText(QApplication::translate("MainWindow", "13", 0, QApplication::UnicodeUTF8));
        button_14->setText(QApplication::translate("MainWindow", "14", 0, QApplication::UnicodeUTF8));
        button_15->setText(QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8));
        button_16->setText(QString());
        button_7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        button_5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        button_6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        button_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Shuffle", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
