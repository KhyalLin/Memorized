#include "userlist.h"

UserList::UserList(const QString& _username)
    : db(QSqlDatabase::addDatabase("QSQLITE", "USERLIST" + _username)),
    username(_username)
{
    db.setDatabaseName("E:/Memorized/databases/userlist.db");
    db.open();
}

UserList::~UserList()
{
    db.close();
}

bool UserList::found(const QString& username) const
{
    const QString command = "SELECT id FROM user "
                            "WHERE username='%1';";
    QSqlQuery select(db);
    select.exec(command.arg(username));
    return select.next();
}

bool UserList::verify(const QString& username, const QString& password) const
{
    const QString command = "SELECT id FROM user "
                            "WHERE username='%1' AND password='%2';";
    QSqlQuery select(db);
    select.exec(command.arg(username).arg(password));
    return select.next();
}

bool UserList::regist(const QString& username, const QString& password)
{
    const QString command = "INSERT INTO user (username, password) "
                            "VALUES ('%1', '%2');";
    QSqlQuery insert(db);
    return insert.exec(command.arg(username, password));
}

int UserList::getnum() const
{
    const QString command = "SELECT num FROM user "
                            "WHERE username='%1';";
    QSqlQuery select(db);
    select.exec(command.arg(username));
    select.next();
    return select.value(0).toInt();
}

bool UserList::setnum(int num)
{
    const QString command = "UPDATE user "
                            "SET num=%1 "
                            "WHERE username='%2';";
    QSqlQuery update(db);
    return update.exec(command.arg(num).arg(username));
}

QDate UserList::getDate()
{
    const QString command = "SELECT year, month, day FROM user "
                            "WHERE username='%1';";
    QSqlQuery select(db);
    select.exec(command.arg(username));

    select.next();
    int year = select.value(0).toInt();
    int month = select.value(1).toInt();
    int day = select.value(2).toInt();
    return QDate(year, month, day);
}

bool UserList::setDate(QDate date)
{
    const QString command = "UPDATE user "
                            "SET year=%1, "
                            "    month=%2, "
                            "    day=%3 "
                            "WHERE username='%4';";
    QSqlQuery update(db);
    int year = date.year();
    int month = date.month();
    int day = date.day();
    return update.exec(command.arg(year).arg(month).arg(day).arg(username));
}

QString UserList::getbook()
{
    const QString command = "SELECT book FROM user "
                            "WHERE username='%1';";
    QSqlQuery select(db);
    select.exec(command.arg(username));
    select.next();
    return select.value(0).toString();
}

bool UserList::setbook(const QString& book)
{
    const QString command = "UPDATE user "
                            "SET book='%1' "
                            "WHERE username='%2';";
    QSqlQuery update(db);
    return update.exec(command.arg(book).arg(username));
}
