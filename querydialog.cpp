#include <QMessageBox>
#include "querydialog.h"
#include "ui_querydialog.h"
#include "userwordlist.h"

QueryDialog::QueryDialog(const QString& _username, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QueryDialog)
    , userlist(_username)
    , username(_username)
    , book(userlist.getbook())
{
    ui->setupUi(this);
}

QueryDialog::~QueryDialog()
{
    delete ui;
}

void QueryDialog::on_pushButton_clicked()
{
    int num = ui->numEdit->text().toInt();
    userlist.setnum(num);

    UserWordList userwordlist(username);
    if (book != userlist.getbook())
    {
        QMessageBox msgBox(this);
        msgBox.setWindowTitle("正在导入词书，请稍后...");
        msgBox.show();

        userlist.setbook(book);
        userwordlist.clearTable("todo");
        userwordlist.clearTable("doing");
        userwordlist.clearTable("done");

        std::vector<Word> words = WordList().obtain(book);
        for (auto word : words)
            userwordlist.createWord(word);
        msgBox.close();
    }
    emit queryFinished(num);
    close();
}

void QueryDialog::show()
{
    ui->welcomeLable->setText("Welcome, " + username + "!" );
    ui->bookLabel->setText("您的词书：" + book);
    QDialog::exec();
}

void QueryDialog::on_changeButton_clicked()
{
    if (book == "cet4")
        book = "cet6";
    else
        book = "cet4";
    ui->bookLabel->setText("您的词书：" + book);
}

