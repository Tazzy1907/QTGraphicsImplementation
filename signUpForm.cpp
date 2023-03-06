#include "signUpForm.h"
#include "loginform.h"

loginForm* l2;

signUpForm::signUpForm(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::signUpFormClass())
{
	ui->setupUi(this);

	connect(ui->backButton, SIGNAL(clicked()), this, SLOT(BackButton()));
	connect(ui->signUpButton, SIGNAL(clicked()), this, SLOT(SignUpButton()));
}

signUpForm::~signUpForm()
{
	delete ui;
}

void signUpForm::BackButton() {
	l2 = new loginForm();
	hide();
	l2->show();
}

void signUpForm::SignUpButton() {
	ui->label->setText("Sign Up Button pressed");
	// Placeholder code, replaced later.
}