/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginForm
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *loginButton;
    QPushButton *quitButton;
    QPushButton *signUpButton;
    QPushButton *backButton;

    void setupUi(QWidget *loginForm)
    {
        if (loginForm->objectName().isEmpty())
            loginForm->setObjectName("loginForm");
        loginForm->resize(900, 500);
        label = new QLabel(loginForm);
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
        formLayoutWidget = new QWidget(loginForm);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(380, 180, 172, 56));
        formLayout = new QFormLayout(formLayoutWidget);
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

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(380, 250, 81, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(11);
        font1.setBold(true);
        loginButton->setFont(font1);
        quitButton = new QPushButton(loginForm);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(470, 250, 81, 41));
        quitButton->setFont(font1);
        signUpButton = new QPushButton(loginForm);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(380, 300, 171, 31));
        signUpButton->setFont(font1);
        backButton = new QPushButton(loginForm);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 20, 81, 41));
        backButton->setFont(font1);

        retranslateUi(loginForm);

        QMetaObject::connectSlotsByName(loginForm);
    } // setupUi

    void retranslateUi(QWidget *loginForm)
    {
        loginForm->setWindowTitle(QCoreApplication::translate("loginForm", "Login", nullptr));
        label->setText(QCoreApplication::translate("loginForm", "Login Page", nullptr));
        label_2->setText(QCoreApplication::translate("loginForm", "Username:", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("loginForm", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("loginForm", "Password", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("loginForm", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("loginForm", "Login", nullptr));
        quitButton->setText(QCoreApplication::translate("loginForm", "Quit", nullptr));
        signUpButton->setText(QCoreApplication::translate("loginForm", "Sign  Up", nullptr));
        backButton->setText(QCoreApplication::translate("loginForm", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginForm: public Ui_loginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
