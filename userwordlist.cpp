#include "userwordlist.h"
#include <QDir>

UserWordList::UserWordList(const QString& username)
    : db(QSqlDatabase::addDatabase("QSQLITE", username + "sWORDLIST"))
{
    db.setDatabaseName("E:/Memorized/user/" + username + "/word.db");
    db.open();
}

UserWordList::~UserWordList()
{
    db.close();
}

bool UserWordList::createTable(const QString& table)
{
    const QString command = "CREATE TABLE %1 ("
                            "    id INTEGER PRIMARY KEY,"
                            "    count INTEGER DEFAULT 0,"
                            "    word TEXT NOT NULL,"
                            "    mean TEXT NOT NULL,"
                            "    days INYEGER DEFAULT 0"
                            ");";
    QSqlQuery create(db);
    return create.exec(command.arg(table));
}

bool UserWordList::clearTable(const QString& table)
{
    const QString command = "DELETE FROM %1;";
    QSqlQuery query(db);
    return query.exec(command.arg(table));
}

bool UserWordList::createWord(const Word& word)
{
    const QString command = "INSERT INTO todo (id, word, mean) "
                            "VALUES (%1, '%2', '%3');";
    QSqlQuery insert(db);
    return insert.exec(command.arg(word.id).arg(word.word).arg(word.mean));
}

bool UserWordList::insertWord(const QString& table, const Word& word)
{
    const QString command = "INSERT INTO %1 (id, count, word, mean, days) "
                            "VALUES (%2, %3, '%4', '%5', %6);";
    QSqlQuery insert(db);
    return insert.exec(command.arg(table).arg(word.id).arg(word.count)
                        .arg(word.word).arg(word.mean).arg(word.days));
}

bool UserWordList::removeWord(const QString& table, const Word& word)
{
    const QString command = "DELETE FROM %1 "
                            "WHERE id=%2;";
    QSqlQuery delet(db);
    return delet.exec(command.arg(table).arg(word.id));
}

int UserWordList::length(const QString& table) const
{
    const QString command = "SELECT COUNT(*) FROM %1;";
    QSqlQuery select(db);
    select.exec(command.arg(table));
    return select.value(0).toInt();
}

std::queue<Word> UserWordList::obtain(int num, int days)
{
    const QString command = "SELECT id, count, word, mean, days FROM %1 "
                            "WHERE days<=%2 LIMIT %3;";
    QSqlQuery select(db);
    std::queue<Word> words;

    select.exec(command.arg("doing").arg(days).arg(num));
    while (select.next())
    {
        Word word;
        word.id = select.value(0).toInt();
        word.count = select.value(1).toInt();
        word.word = select.value(2).toString();
        word.mean = select.value(3).toString();
        word.days = select.value(4).toInt();
        words.push(word);
        removeWord("doing", word);
    }
    if (words.size() >= num)
        return words;

    QSqlQuery select2(db);
    select2.exec(command.arg("todo").arg(days).arg(num - words.size()));
    while (select2.next())
    {
        Word word;
        word.id = select2.value(0).toInt();
        word.count = select2.value(1).toInt();
        word.word = select2.value(2).toString();
        word.mean = select2.value(3).toString();
        word.days = select2.value(4).toInt();
        words.push(word);
        removeWord("todo", word);
    }

    QSqlQuery(db).exec(QString("UPDATE doing set days = days - %1;").arg(days));
    return words;
}
