/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Login_Button_2;
    QLineEdit *UserNames_2;
    QLineEdit *PassWords_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 300);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(10, 10, 382, 282));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 20, 251, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 90, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 150, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_6->setFont(font2);
        label_6->setCursor(QCursor(Qt::PointingHandCursor));
        Login_Button_2 = new QPushButton(groupBox);
        Login_Button_2->setObjectName(QString::fromUtf8("Login_Button_2"));
        Login_Button_2->setGeometry(QRect(220, 210, 111, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        Login_Button_2->setFont(font3);
        Login_Button_2->setCursor(QCursor(Qt::PointingHandCursor));
        Login_Button_2->setAutoDefault(false);
        UserNames_2 = new QLineEdit(groupBox);
        UserNames_2->setObjectName(QString::fromUtf8("UserNames_2"));
        UserNames_2->setGeometry(QRect(110, 90, 221, 31));
        PassWords_2 = new QLineEdit(groupBox);
        PassWords_2->setObjectName(QString::fromUtf8("PassWords_2"));
        PassWords_2->setGeometry(QRect(110, 150, 221, 31));
        PassWords_2->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("LoginDialog", "\346\210\277\350\264\267\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        label_4->setText(QApplication::translate("LoginDialog", "\346\237\245\350\257\242\347\263\273\347\273\237\347\231\273\345\275\225", nullptr));
        label_5->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_6->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        Login_Button_2->setText(QApplication::translate("LoginDialog", "\347\231\273    \345\275\225", nullptr));
        UserNames_2->setText(QApplication::translate("LoginDialog", "carlwang99", nullptr));
        PassWords_2->setText(QApplication::translate("LoginDialog", "123", nullptr));
        PassWords_2->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
