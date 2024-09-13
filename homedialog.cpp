#include "homedialog.h"
#include "ui_homedialog.h"
#include "logindialog.h"
#include "registerdialog.h"

HomeDialog::HomeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomeDialog)
{
    ui->setupUi(this);
}

HomeDialog::~HomeDialog()
{
    delete ui;
}

void HomeDialog::on_loginButton_clicked()
{
    LoginDialog login;
    QObject::connect(&login, &LoginDialog::loginFinish, this,
                     [&](QString s) { emit finished(s); });
    this->hide();
    login.exec();
    this->close();
}

void HomeDialog::on_registerButton_clicked()
{
    RegisterDialog regist;
    QObject::connect(&regist, &RegisterDialog::registFinished, this, [&](QString s) {
        emit finished(s);
    });
    this->hide();
    regist.exec();
    this->close();
}
