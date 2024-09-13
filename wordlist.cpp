#include "wordlist.h"

WordList::WordList() : db(QSqlDatabase::addDatabase("QSQLITE", "WORDLIST"))
{
    db.setDatabaseName("E:/Memorized/databases/wordlist.db");
    db.open();
}

WordList::~WordList()
{
    db.close();
}

std::vector<Word> WordList::obtain(const QString& table) const
{
    const QString command = "SELECT id, word, mean FROM %1;";
    QSqlQuery select(db);
    select.exec(command.arg(table));

    std::vector<Word> words;
    while (select.next())
    {
        Word w;
        w.id = select.value(0).toInt();
        w.word = select.value(1).toString();
        w.mean = select.value(2).toString();
        words.push_back(w);
    }
    return words;
}
