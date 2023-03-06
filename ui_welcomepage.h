/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomePage
{
public:
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *renderButton;
    QPushButton *quitButton;
    QLabel *label_2;

    void setupUi(QWidget *WelcomePage)
    {
        if (WelcomePage->objectName().isEmpty())
            WelcomePage->setObjectName("WelcomePage");
        WelcomePage->resize(900, 500);
        label = new QLabel(WelcomePage);
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
        loginButton = new QPushButton(WelcomePage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(50, 250, 200, 150));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(11);
        font1.setBold(true);
        loginButton->setFont(font1);
        renderButton = new QPushButton(WelcomePage);
        renderButton->setObjectName("renderButton");
        renderButton->setGeometry(QRect(350, 250, 200, 150));
        renderButton->setFont(font1);
        quitButton = new QPushButton(WelcomePage);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(650, 250, 200, 150));
        quitButton->setFont(font1);
        label_2 = new QLabel(WelcomePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 450, 200, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(WelcomePage);

        QMetaObject::connectSlotsByName(WelcomePage);
    } // setupUi

    void retranslateUi(QWidget *WelcomePage)
    {
        WelcomePage->setWindowTitle(QCoreApplication::translate("WelcomePage", "My Coursework", nullptr));
        label->setText(QCoreApplication::translate("WelcomePage", "Welcome to my Graphics Engine. Please select one of the following options:", nullptr));
        loginButton->setText(QCoreApplication::translate("WelcomePage", "Login", nullptr));
        renderButton->setText(QCoreApplication::translate("WelcomePage", "Quick Render", nullptr));
        quitButton->setText(QCoreApplication::translate("WelcomePage", "Quit", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomePage", "By Tanaz Siriwardena", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomePage: public Ui_WelcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
