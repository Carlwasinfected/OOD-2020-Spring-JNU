/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionhelp1;
    QAction *actionhelo2;
    QAction *actionhelp3;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *commercialLoan;
    QPushButton *accuFundLoan;
    QPushButton *combineLoan;
    QPushButton *historyQuery;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutRight;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayoutLeft;
    QLabel *welcomeMsg;
    QMenuBar *menubar;
    QMenu *menuzhu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(855, 475);
        actionhelp1 = new QAction(MainWindow);
        actionhelp1->setObjectName(QString::fromUtf8("actionhelp1"));
        actionhelo2 = new QAction(MainWindow);
        actionhelo2->setObjectName(QString::fromUtf8("actionhelo2"));
        actionhelp3 = new QAction(MainWindow);
        actionhelp3->setObjectName(QString::fromUtf8("actionhelp3"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 120, 351, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        commercialLoan = new QPushButton(verticalLayoutWidget);
        commercialLoan->setObjectName(QString::fromUtf8("commercialLoan"));

        verticalLayout->addWidget(commercialLoan);

        accuFundLoan = new QPushButton(verticalLayoutWidget);
        accuFundLoan->setObjectName(QString::fromUtf8("accuFundLoan"));

        verticalLayout->addWidget(accuFundLoan);

        combineLoan = new QPushButton(verticalLayoutWidget);
        combineLoan->setObjectName(QString::fromUtf8("combineLoan"));

        verticalLayout->addWidget(combineLoan);

        historyQuery = new QPushButton(verticalLayoutWidget);
        historyQuery->setObjectName(QString::fromUtf8("historyQuery"));

        verticalLayout->addWidget(historyQuery);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(370, 100, 471, 311));
        horizontalLayoutRight = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutRight->setObjectName(QString::fromUtf8("horizontalLayoutRight"));
        horizontalLayoutRight->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutRight->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 0, 441, 91));
        horizontalLayoutLeft = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayoutLeft->setObjectName(QString::fromUtf8("horizontalLayoutLeft"));
        horizontalLayoutLeft->setContentsMargins(0, 0, 0, 0);
        welcomeMsg = new QLabel(horizontalLayoutWidget_2);
        welcomeMsg->setObjectName(QString::fromUtf8("welcomeMsg"));
        sizePolicy.setHeightForWidth(welcomeMsg->sizePolicy().hasHeightForWidth());
        welcomeMsg->setSizePolicy(sizePolicy);

        horizontalLayoutLeft->addWidget(welcomeMsg);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 855, 28));
        menuzhu = new QMenu(menubar);
        menuzhu->setObjectName(QString::fromUtf8("menuzhu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuzhu->menuAction());
        menuzhu->addSeparator();
        menuzhu->addAction(actionhelp1);
        menuzhu->addAction(actionhelo2);
        menuzhu->addAction(actionhelp3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionhelp1->setText(QApplication::translate("MainWindow", "help1", nullptr));
        actionhelo2->setText(QApplication::translate("MainWindow", "helo2", nullptr));
        actionhelp3->setText(QApplication::translate("MainWindow", "help3", nullptr));
        commercialLoan->setText(QApplication::translate("MainWindow", "\345\225\206\344\270\232\350\264\267\346\254\276", nullptr));
        accuFundLoan->setText(QApplication::translate("MainWindow", "\345\205\254\347\247\257\351\207\221\350\264\267\346\254\276", nullptr));
        combineLoan->setText(QApplication::translate("MainWindow", "\347\273\204\345\220\210\345\236\213\350\264\267\346\254\276", nullptr));
        historyQuery->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\237\245\350\257\242\350\256\260\345\275\225", nullptr));
        welcomeMsg->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\346\202\250\357\274\214\347\224\250\346\210\267carlwang\357\274\201...tbd", nullptr));
        menuzhu->setTitle(QApplication::translate("MainWindow", "\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
