#include "mydatabase.h"

MyDatabase::MyDatabase(const QString& FilePath)
    : db(QSqlDatabase::addDatabase("QSQLITE", "MYDATABASE"))
{
    db.setDatabaseName(FilePath);
    db.open();
}

MyDatabase::~MyDatabase()
{
    db.close();
}

void MyDatabase::prepare(const QString& cmd)
{
    command = cmd;
}

void MyDatabase::exec()
