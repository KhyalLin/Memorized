#include <QApplication>
#include <queue>
#include "homedialog.h"
#include "worddialog.h"
#include "querydialog.h"
#include "quitdialog.h"
#include "userlist.h"
#include "userwordlist.h"

const int counting[] = { 0, 1, 3, 7, 0 };

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    QString username = "NULL";
    HomeDialog homeDialog;
    QObject::connect(&homeDialog, &HomeDialog::finished,
                     [&](QString s){ username = s; });
    homeDialog.exec();
    if (username == "NULL")
        return application.exec();

    qDebug() << "query";
    QueryDialog query(username);
    query.show();

    qDebug() << "QDate";
    UserList userlist(username);
    QDate before = userlist.getDate();
    QDate now = QDate::currentDate();
    int days = before.daysTo(now);
    int num = userlist.getnum();
    userlist.setDate(now);

    qDebug() << "getqueue";
    UserWordList userwordlist(username);
    std::queue<Word> queue;
    queue = userwordlist.obtain(num, days);

    qDebug() << "queue";
    while (!queue.empty())
    {
        Word word = queue.front(); queue.pop();
        WordDialog worddialog(word.word, word.mean);
        bool known;
        QObject::connect(&worddialog, &WordDialog::know,
                         [&](bool f){ known = f; });
        worddialog.exec();

        if (!known)
        {
            word.count = 0;
            queue.push(word);
            continue;
        }
        word.count++;
        word.days = counting[word.count];
        userwordlist.insertWord("doing", word);
        if (word.count == 4)
        {
            userwordlist.removeWord("doing", word);
            userwordlist.insertWord("done", word);
        }
    }

    qDebug() << "quit";
    QuitDialog quit;
    quit.exec();
    return application.exec();
}
