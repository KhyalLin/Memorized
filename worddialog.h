#ifndef WORDDIALOG_H
#define WORDDIALOG_H

#include <QDialog>

namespace Ui {
class WordDialog;
}

class WordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WordDialog(const QString&, const QString&, QWidget *parent = nullptr);
    ~WordDialog();

signals:
    void know(bool);

private slots:
    void on_trueButton_clicked();
    void on_falseButton_clicked();
    void on_nextButton_clicked();

private:
    Ui::WordDialog *ui;
    bool known;
};

#endif // WORDDIALOG_H
