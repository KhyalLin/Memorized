#ifndef MYDATABASE_H
#define MYDATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class MyDatabase
{
private:
    QSqlDatabase db;
    QString command;

public:
    MyDatabase(const QString&);
    ~MyDatabase();
    void prepare(const QString&);
};

#endif // MYDATABASE_H
