#include <QMessageBox>
#include <QDir>
#include <vector>
#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "userlist.h"
#include "wordlist.h"
#include "userwordlist.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_registerButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    UserList* userlist = new UserList("regist");
    if (userlist->found(username))
    {
        QMessageBox::critical(nullptr,
                              "Error",
                              "用户名已存在！");
        ui->usernameEdit->clear();
        ui->passwordEdit->clear();
        delete userlist;
        return;
    }
    delete userlist;
    QMessageBox msgBox;
    msgBox.setWindowTitle("正在导入词书，请稍后...");
    msgBox.show();

    userlist = new UserList(username);
    userlist->regist(username, password);
    userlist->setbook("cet4");

    QDir().mkdir("E:/Memorized/user/" + username);
    UserWordList userwordlist(username);
    userwordlist.createTable("todo");
    userwordlist.createTable("doing");
    userwordlist.createTable("done");
    std::vector<Word> words = WordList().obtain("cet4");
    for (auto word : words)
        userwordlist.createWord(word);
    delete userlist;
    msgBox.close();

    emit registFinished(username);
    close();
}
