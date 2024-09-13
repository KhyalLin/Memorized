#ifndef USERLIST_H
#define USERLIST_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDate>

class UserList
{
private:
    QSqlDatabase db;
    QString username;

public:
    UserList(const QString&);
    ~UserList();
    bool found(const QString&) const;
    bool verify(const QString&, const QString&) const;
    bool regist(const QString&, const QString&);
    int getnum() const;
    bool setnum(int);
    QDate getDate();
    bool setDate(QDate);
    QString getbook();
    bool setbook(const QString&);
};

#endif // USERLIST_H
