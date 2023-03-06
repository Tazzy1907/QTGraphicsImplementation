/********************************************************************************
** Form generated from reading UI file 'signUpForm.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signUpFormClass
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *signUpButton;
    QPushButton *backButton;
    QLabel *label_4;

    void setupUi(QWidget *signUpFormClass)
    {
        if (signUpFormClass->objectName().isEmpty())
            signUpFormClass->setObjectName("signUpFormClass");
        signUpFormClass->resize(900, 500);
        label = new QLabel(signUpFormClass);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 50, 340, 120));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        formLayoutWidget = new QWidget(signUpFormClass);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(380, 180, 172, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        signUpButton = new QPushButton(signUpFormClass);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(380, 270, 171, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(11);
        font1.setBold(true);
        signUpButton->setFont(font1);
        backButton = new QPushButton(signUpFormClass);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 20, 81, 41));
        backButton->setFont(font1);
        label_4 = new QLabel(signUpFormClass);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(378, 310, 171, 71));
        QFont font2;
        font2.setItalic(true);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        retranslateUi(signUpFormClass);

        QMetaObject::connectSlotsByName(signUpFormClass);
    } // setupUi

    void retranslateUi(QWidget *signUpFormClass)
    {
        signUpFormClass->setWindowTitle(QCoreApplication::translate("signUpFormClass", "signUpForm", nullptr));
        label->setText(QCoreApplication::translate("signUpFormClass", "Sign Up Page", nullptr));
        label_2->setText(QCoreApplication::translate("signUpFormClass", "Username:", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("signUpFormClass", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("signUpFormClass", "Password:", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("signUpFormClass", "Password", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("signUpFormClass", "Repeat Password", nullptr));
        signUpButton->setText(QCoreApplication::translate("signUpFormClass", "Sign  Up", nullptr));
        backButton->setText(QCoreApplication::translate("signUpFormClass", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("signUpFormClass", "Your password should be at least 8 characters long, contain an uppercase letter, a character, and a number.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpFormClass: public Ui_signUpFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
