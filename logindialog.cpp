#include <QSqlQuery>
#include <QMessageBox>
#include "logindialog.h"
#include "ui_logindialog.h"
#include "userlist.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    UserList userlist("login");

    if (!userlist.found(username))
    {
        QMessageBox::critical(nullptr,
                              "Error",
                              "用户不存在！");
        ui->usernameEdit->clear();
        ui->passwordEdit->clear();
        return;
    }
    if (!userlist.verify(username, password))
    {
        QMessageBox::critical(nullptr,
                              "Error",
                              "密码错误！");
        ui->usernameEdit->clear();
        ui->passwordEdit->clear();
        return;
    }

    emit loginFinish(username);
    close();
}
