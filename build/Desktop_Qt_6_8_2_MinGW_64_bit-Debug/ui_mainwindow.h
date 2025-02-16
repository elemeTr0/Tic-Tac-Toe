/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget01;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QWidget *widget10;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QWidget *widget12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QWidget *widget00;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QWidget *widget11;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QWidget *widget21;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QWidget *widget20;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QWidget *widget22;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *winner;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 611);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        widget01 = new QWidget(widget);
        widget01->setObjectName("widget01");
        horizontalLayout_2 = new QHBoxLayout(widget01);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget01);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);


        gridLayout_2->addWidget(widget01, 1, 1, 1, 1);

        widget10 = new QWidget(widget);
        widget10->setObjectName("widget10");
        verticalLayout_2 = new QVBoxLayout(widget10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(widget10);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);


        gridLayout_2->addWidget(widget10, 3, 0, 1, 1);

        widget12 = new QWidget(widget);
        widget12->setObjectName("widget12");
        horizontalLayout_4 = new QHBoxLayout(widget12);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(widget12);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);


        gridLayout_2->addWidget(widget12, 3, 2, 1, 1);

        widget00 = new QWidget(widget);
        widget00->setObjectName("widget00");
        horizontalLayout = new QHBoxLayout(widget00);
        horizontalLayout->setObjectName("horizontalLayout");
        label_1 = new QLabel(widget00);
        label_1->setObjectName("label_1");

        horizontalLayout->addWidget(label_1);


        gridLayout_2->addWidget(widget00, 1, 0, 1, 1);

        widget11 = new QWidget(widget);
        widget11->setObjectName("widget11");
        verticalLayout_4 = new QVBoxLayout(widget11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(widget11);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);


        gridLayout_2->addWidget(widget11, 3, 1, 1, 1);

        widget21 = new QWidget(widget);
        widget21->setObjectName("widget21");
        verticalLayout_5 = new QVBoxLayout(widget21);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_8 = new QLabel(widget21);
        label_8->setObjectName("label_8");

        verticalLayout_5->addWidget(label_8);


        gridLayout_2->addWidget(widget21, 5, 1, 1, 1);

        widget20 = new QWidget(widget);
        widget20->setObjectName("widget20");
        verticalLayout_3 = new QVBoxLayout(widget20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(widget20);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);


        gridLayout_2->addWidget(widget20, 5, 0, 1, 1);

        widget22 = new QWidget(widget);
        widget22->setObjectName("widget22");
        horizontalLayout_5 = new QHBoxLayout(widget22);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(widget22);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);


        gridLayout_2->addWidget(widget22, 5, 2, 1, 1);

        widget02 = new QWidget(widget);
        widget02->setObjectName("widget02");
        horizontalLayout_3 = new QHBoxLayout(widget02);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget02);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);


        gridLayout_2->addWidget(widget02, 1, 2, 1, 1);

        winner = new QLabel(widget);
        winner->setObjectName("winner");

        gridLayout_2->addWidget(winner, 0, 1, 1, 1);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_1->setText(QString());
        label_5->setText(QString());
        label_8->setText(QString());
        label_7->setText(QString());
        label_9->setText(QString());
        label_3->setText(QString());
        winner->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
