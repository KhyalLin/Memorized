#include "worddialog.h"
#include "ui_worddialog.h"

WordDialog::WordDialog(const QString& word, const QString& mean, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WordDialog)
{
    ui->setupUi(this);
    ui->wordLabel->setAlignment(Qt::AlignCenter);
    ui->meanLabel->setAlignment(Qt::AlignCenter);
    ui->wordLabel->setText(word);
    ui->meanLabel->setText(mean);
    ui->meanLabel->hide();
    ui->nextButton->hide();
}

WordDialog::~WordDialog()
{
    delete ui;
}

void WordDialog::on_trueButton_clicked()
{
    known = true;
    ui->meanLabel->show();
    ui->nextButton->show();
    ui->trueButton->hide();
    ui->falseButton->hide();
}

void WordDialog::on_falseButton_clicked()
{
    known = false;
    ui->meanLabel->show();
    ui->nextButton->show();
    ui->trueButton->hide();
    ui->falseButton->hide();
}

void WordDialog::on_nextButton_clicked()
{
    emit know(known);
    close();
}
