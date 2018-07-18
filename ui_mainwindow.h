/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Button1;
    QPushButton *negToggle;
    QPushButton *Button4;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button7;
    QPushButton *addButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QPushButton *Button9;
    QPushButton *subButton;
    QPushButton *clearButton;
    QPushButton *equalsButton;
    QLCDNumber *display;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(382, 383);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(54, 54, 54);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 100, 340, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button6 = new QPushButton(gridLayoutWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        Button6->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button6, 2, 0, 1, 1);

        Button3 = new QPushButton(gridLayoutWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button3, 3, 0, 1, 1);

        Button2 = new QPushButton(gridLayoutWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button0 = new QPushButton(gridLayoutWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        Button0->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Button1 = new QPushButton(gridLayoutWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button1, 3, 2, 1, 1);

        negToggle = new QPushButton(gridLayoutWidget);
        negToggle->setObjectName(QStringLiteral("negToggle"));
        negToggle->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(negToggle, 4, 0, 1, 1);

        Button4 = new QPushButton(gridLayoutWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button4, 2, 2, 1, 1);

        Button8 = new QPushButton(gridLayoutWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        Button8->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button8, 0, 1, 1, 1);

        Button5 = new QPushButton(gridLayoutWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button7 = new QPushButton(gridLayoutWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        Button7->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button7, 0, 2, 1, 1);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(addButton, 0, 3, 1, 1);

        mulButton = new QPushButton(gridLayoutWidget);
        mulButton->setObjectName(QStringLiteral("mulButton"));
        mulButton->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(mulButton, 3, 3, 1, 1);

        divButton = new QPushButton(gridLayoutWidget);
        divButton->setObjectName(QStringLiteral("divButton"));
        divButton->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(divButton, 4, 3, 1, 1);

        Button9 = new QPushButton(gridLayoutWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        Button9->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(Button9, 0, 0, 1, 1);

        subButton = new QPushButton(gridLayoutWidget);
        subButton->setObjectName(QStringLiteral("subButton"));
        subButton->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(subButton, 2, 3, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(clearButton, 4, 2, 1, 1);

        equalsButton = new QPushButton(gridLayoutWidget);
        equalsButton->setObjectName(QStringLiteral("equalsButton"));
        equalsButton->setStyleSheet(QLatin1String("background-color: rgb(111, 111, 111);\n"
"color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(equalsButton, 5, 0, 1, 4);

        display = new QLCDNumber(centralWidget);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(10, 0, 361, 91));
        display->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        display->setSmallDecimalPoint(true);
        display->setDigitCount(10);
        display->setSegmentStyle(QLCDNumber::Flat);
        display->setProperty("value", QVariant(0));
        display->setProperty("intValue", QVariant(0));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        Button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        Button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        Button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        Button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        negToggle->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        Button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        Button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        Button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        Button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        mulButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        divButton->setText(QApplication::translate("MainWindow", "/", nullptr));
        Button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        subButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "C", nullptr));
        equalsButton->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
