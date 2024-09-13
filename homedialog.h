#ifndef HOMEDIALOG_H
#define HOMEDIALOG_H

#include <QDialog>

namespace Ui {
class HomeDialog;
}

class HomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HomeDialog(QWidget *parent = nullptr);
    ~HomeDialog();

signals:
    void finished(QString);

private slots:
    void on_loginButton_clicked();
    void on_registerButton_clicked();

private:
    Ui::HomeDialog *ui;
};

#endif // HOMEDIALOG_H
