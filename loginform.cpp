#include "loginform.h"
#include "ui_loginform.h"
#include <welcomepage.h>
#include <signUpForm.h>

WelcomePage *w2;
signUpForm* s;

loginForm::loginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginForm)
{
    ui->setupUi(this);
    connect(ui->backButton, SIGNAL(clicked()), this, SLOT(BackButton()));
    connect(ui->quitButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->signUpButton, SIGNAL(clicked()), this, SLOT(SignUpButton()));
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(LoginButton()));

}

loginForm::~loginForm()
{
    delete ui;
}

void loginForm::SignUpButton() {
    hide();
    s = new signUpForm();
    s->show();
}

void loginForm::BackButton() {
    hide();
    w2 = new WelcomePage();
    w2->show();
}

void loginForm::LoginButton() {

}


