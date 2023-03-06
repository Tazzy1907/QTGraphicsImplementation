#pragma once

#include <QWidget>
#include "ui_signUpForm.h"

QT_BEGIN_NAMESPACE
namespace Ui { class signUpFormClass; };
QT_END_NAMESPACE


class signUpForm : public QWidget
{
	Q_OBJECT

public:
	signUpForm(QWidget *parent = nullptr);
	~signUpForm();

private:
	Ui::signUpFormClass *ui;
public slots:
	void BackButton();
	void SignUpButton();
};
