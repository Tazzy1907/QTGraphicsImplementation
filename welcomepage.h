#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WelcomePage; }
QT_END_NAMESPACE

class WelcomePage : public QWidget
{
    Q_OBJECT

public:
    WelcomePage(QWidget *parent = nullptr);
    ~WelcomePage();

private:
    Ui::WelcomePage *ui;


public slots:
    void LaunchDemo();
    void Login();

};
#endif // WELCOMEPAGE_H
