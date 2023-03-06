#include "welcomepage.h"
#include "ui_welcomepage.h"
#include "loginform.h"
#include "pgeRendering.h"

loginForm *l;

WelcomePage::WelcomePage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomePage)
{
    ui->setupUi(this);
    connect(ui->renderButton, SIGNAL(clicked()), this, SLOT(LaunchDemo()));
    connect(ui->quitButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(Login()));
}

void WelcomePage::LaunchDemo() {



    Engine demo;
    if (demo.Construct(256, 256, 4, 4)) {
        demo.Start();
    }

}

void WelcomePage::Login() {
    hide();
    l = new loginForm;
    l->show();
}

WelcomePage::~WelcomePage()
{
    delete ui;

}
