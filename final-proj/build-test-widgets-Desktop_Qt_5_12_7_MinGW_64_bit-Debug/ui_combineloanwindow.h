/********************************************************************************
** Form generated from reading UI file 'combineloanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBINELOANWINDOW_H
#define UI_COMBINELOANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CombineLoanWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *CombineLoanWindow)
    {
        if (CombineLoanWindow->objectName().isEmpty())
            CombineLoanWindow->setObjectName(QString::fromUtf8("CombineLoanWindow"));
        CombineLoanWindow->resize(594, 663);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CombineLoanWindow->sizePolicy().hasHeightForWidth());
        CombineLoanWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(CombineLoanWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);
        label->setCursor(QCursor(Qt::PointingHandCursor));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        radioButton = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(CombineLoanWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, radioButton);

        radioButton_2 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, radioButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font1);

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_2);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        textBrowser->setFont(font2);

        formLayout->setWidget(8, QFormLayout::SpanningRole, textBrowser);

        CombineLoanWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CombineLoanWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 594, 28));
        CombineLoanWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CombineLoanWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CombineLoanWindow->setStatusBar(statusbar);

        retranslateUi(CombineLoanWindow);

        QMetaObject::connectSlotsByName(CombineLoanWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CombineLoanWindow)
    {
        CombineLoanWindow->setWindowTitle(QApplication::translate("CombineLoanWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("CombineLoanWindow", "\345\225\206\344\270\232\350\264\267\346\254\276\351\242\235\357\274\210\344\270\207\357\274\211\357\274\232", nullptr));
        label_5->setText(QApplication::translate("CombineLoanWindow", "\345\225\206\350\264\267\345\210\251\347\216\207\357\274\232", nullptr));
        label_2->setText(QApplication::translate("CombineLoanWindow", "\345\205\254\347\247\257\351\207\221\350\264\267\346\254\276\351\242\235\357\274\232", nullptr));
        label_6->setText(QApplication::translate("CombineLoanWindow", "\345\205\254\347\247\257\351\207\221\345\210\251\347\216\207\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("CombineLoanWindow", "\347\211\271\350\211\26222", nullptr));
        comboBox->setItemText(1, QApplication::translate("CombineLoanWindow", "test", nullptr));

        label_4->setText(QApplication::translate("CombineLoanWindow", "\346\214\211\346\217\255\345\271\264\346\225\260\357\274\232", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("CombineLoanWindow", "10\345\271\264(120\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("CombineLoanWindow", "9\345\271\264  (108\346\234\237)", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("CombineLoanWindow", "8\345\271\264  (96\346\234\237)", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("CombineLoanWindow", "7\345\271\264\357\274\21084\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(4, QApplication::translate("CombineLoanWindow", "6\345\271\264\357\274\21072\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(5, QApplication::translate("CombineLoanWindow", "5\345\271\264\357\274\21060\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(6, QApplication::translate("CombineLoanWindow", "4\345\271\264\357\274\21048\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(7, QApplication::translate("CombineLoanWindow", "3\345\271\264\357\274\21036\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(8, QApplication::translate("CombineLoanWindow", "2\345\271\264\357\274\21024\346\234\237\357\274\211", nullptr));
        comboBox_3->setItemText(9, QApplication::translate("CombineLoanWindow", "1\345\271\264\357\274\21012\346\234\237\357\274\211", nullptr));

        label_3->setText(QApplication::translate("CombineLoanWindow", "\350\277\230\346\254\276\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton->setText(QApplication::translate("CombineLoanWindow", "\347\255\211\351\242\235\346\234\254\346\201\257", nullptr));
        radioButton_2->setText(QApplication::translate("CombineLoanWindow", "\347\255\211\351\242\235\346\234\254\351\207\221", nullptr));
        pushButton->setText(QApplication::translate("CombineLoanWindow", "\346\270\205 \351\233\266", nullptr));
        pushButton_2->setText(QApplication::translate("CombineLoanWindow", "\347\241\256 \350\256\244", nullptr));
        textBrowser->setHtml(QApplication::translate("CombineLoanWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CombineLoanWindow: public Ui_CombineLoanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBINELOANWINDOW_H
