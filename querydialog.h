#ifndef QUERYDIALOG_H
#define QUERYDIALOG_H

#include <QDialog>
#include "userlist.h"

namespace Ui {
class QueryDialog;
}

class QueryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QueryDialog(const QString& username, QWidget *parent = nullptr);
    ~QueryDialog();
    void show();

signals:
    void queryFinished(int);

private slots:
    void on_pushButton_clicked();
    void on_changeButton_clicked();

private:
    Ui::QueryDialog *ui;
    UserList userlist;
    QString username;
    QString book;
};

#endif // QUERYDIALOG_H
