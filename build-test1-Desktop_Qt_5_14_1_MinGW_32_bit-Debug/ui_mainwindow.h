/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionScores;
    QWidget *centralwidget;
    QPushButton *btn_0;
    QPushButton *btn_1;
    QPushButton *btn_3;
    QPushButton *btn_2;
    QPushButton *btn_6;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_7;
    QPushButton *btn_11;
    QPushButton *btn_10;
    QPushButton *btn_9;
    QPushButton *btn_8;
    QPushButton *btn_12;
    QPushButton *btn_14;
    QPushButton *btn_15;
    QPushButton *btn_13;
    QPushButton *btn_dest;
    QPushButton *btn_source;
    QMenuBar *menubar;
    QMenu *menuGame;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(301, 476);
        actionScores = new QAction(MainWindow);
        actionScores->setObjectName(QString::fromUtf8("actionScores"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(10, 80, 70, 70));
        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(10, 150, 70, 70));
        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(10, 290, 70, 70));
        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(10, 220, 70, 70));
        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(80, 220, 70, 70));
        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(80, 80, 70, 70));
        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(80, 150, 70, 70));
        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(80, 290, 70, 70));
        btn_11 = new QPushButton(centralwidget);
        btn_11->setObjectName(QString::fromUtf8("btn_11"));
        btn_11->setGeometry(QRect(150, 290, 70, 70));
        btn_10 = new QPushButton(centralwidget);
        btn_10->setObjectName(QString::fromUtf8("btn_10"));
        btn_10->setGeometry(QRect(150, 220, 70, 70));
        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(150, 150, 70, 70));
        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(150, 80, 70, 70));
        btn_12 = new QPushButton(centralwidget);
        btn_12->setObjectName(QString::fromUtf8("btn_12"));
        btn_12->setGeometry(QRect(220, 80, 70, 70));
        btn_14 = new QPushButton(centralwidget);
        btn_14->setObjectName(QString::fromUtf8("btn_14"));
        btn_14->setGeometry(QRect(220, 220, 70, 70));
        btn_15 = new QPushButton(centralwidget);
        btn_15->setObjectName(QString::fromUtf8("btn_15"));
        btn_15->setGeometry(QRect(220, 290, 70, 70));
        btn_13 = new QPushButton(centralwidget);
        btn_13->setObjectName(QString::fromUtf8("btn_13"));
        btn_13->setGeometry(QRect(220, 150, 70, 70));
        btn_dest = new QPushButton(centralwidget);
        btn_dest->setObjectName(QString::fromUtf8("btn_dest"));
        btn_dest->setGeometry(QRect(220, 360, 70, 70));
        btn_source = new QPushButton(centralwidget);
        btn_source->setObjectName(QString::fromUtf8("btn_source"));
        btn_source->setGeometry(QRect(10, 10, 70, 70));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 301, 22));
        menuGame = new QMenu(menubar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_source, btn_0);
        QWidget::setTabOrder(btn_0, btn_1);
        QWidget::setTabOrder(btn_1, btn_2);
        QWidget::setTabOrder(btn_2, btn_3);
        QWidget::setTabOrder(btn_3, btn_4);
        QWidget::setTabOrder(btn_4, btn_5);
        QWidget::setTabOrder(btn_5, btn_6);
        QWidget::setTabOrder(btn_6, btn_7);
        QWidget::setTabOrder(btn_7, btn_8);
        QWidget::setTabOrder(btn_8, btn_9);
        QWidget::setTabOrder(btn_9, btn_10);
        QWidget::setTabOrder(btn_10, btn_11);
        QWidget::setTabOrder(btn_11, btn_12);
        QWidget::setTabOrder(btn_12, btn_13);
        QWidget::setTabOrder(btn_13, btn_14);
        QWidget::setTabOrder(btn_14, btn_15);
        QWidget::setTabOrder(btn_15, btn_dest);

        menubar->addAction(menuGame->menuAction());
        menuGame->addAction(actionScores);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionScores->setText(QCoreApplication::translate("MainWindow", "Scores", nullptr));
        btn_0->setText(QString());
        btn_1->setText(QString());
        btn_3->setText(QString());
        btn_2->setText(QString());
        btn_6->setText(QString());
        btn_4->setText(QString());
        btn_5->setText(QString());
        btn_7->setText(QString());
        btn_11->setText(QString());
        btn_10->setText(QString());
        btn_9->setText(QString());
        btn_8->setText(QString());
        btn_12->setText(QString());
        btn_14->setText(QString());
        btn_15->setText(QString());
        btn_13->setText(QString());
        btn_dest->setText(QString());
        btn_source->setText(QString());
        menuGame->setTitle(QCoreApplication::translate("MainWindow", "Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
