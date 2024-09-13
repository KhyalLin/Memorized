#ifndef WORDLIST_H
#define WORDLIST_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <vector>

class Word
{
public:
    int id;
    int count;
    int days;
    QString word;
    QString mean;
};

class WordList
{
private:
    QSqlDatabase db;

public:
    WordList();
    ~WordList();
    std::vector<Word> obtain(const QString&) const;
};

#endif // WORDLIST_H
