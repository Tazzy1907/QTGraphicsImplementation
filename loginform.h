#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>

namespace Ui {
class loginForm;
}

class loginForm : public QWidget
{
    Q_OBJECT

public:
    explicit loginForm(QWidget *parent = nullptr);
    ~loginForm();

private:
    Ui::loginForm *ui;

public slots:
    void BackButton();
    void SignUpButton();
    void LoginButton();
};

#endif // LOGINFORM_H
