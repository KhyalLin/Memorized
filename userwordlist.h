#ifndef USERWORDLIST_H
#define USERWORDLIST_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <queue>
#include "wordlist.h"

class UserWordList
{
private:
    QSqlDatabase db;

public:
    UserWordList(const QString&);
    ~UserWordList();
    bool createTable(const QString&);
    bool clearTable(const QString&);
    bool createWord(const Word&);
    bool insertWord(const QString&, const Word&);
    bool removeWord(const QString&, const Word&);
    int length(const QString&) const;
    std::queue<Word> obtain(int num, int days);
};

#endif // USERWORDLIST_H
