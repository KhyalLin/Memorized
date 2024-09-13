/********************************************************************************
** Form generated from reading UI file 'worddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDDIALOG_H
#define UI_WORDDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WordDialog
{
public:
    QLabel *wordLabel;
    QLabel *meanLabel;
    QPushButton *trueButton;
    QPushButton *falseButton;
    QPushButton *nextButton;

    void setupUi(QDialog *WordDialog)
    {
        if (WordDialog->objectName().isEmpty())
            WordDialog->setObjectName("WordDialog");
        WordDialog->resize(400, 300);
        wordLabel = new QLabel(WordDialog);
        wordLabel->setObjectName("wordLabel");
        wordLabel->setGeometry(QRect(130, 60, 121, 20));
        wordLabel->setLayoutDirection(Qt::LeftToRight);
        wordLabel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        meanLabel = new QLabel(WordDialog);
        meanLabel->setObjectName("meanLabel");
        meanLabel->setGeometry(QRect(70, 78, 241, 20));
        meanLabel->setLayoutDirection(Qt::LeftToRight);
        meanLabel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        trueButton = new QPushButton(WordDialog);
        trueButton->setObjectName("trueButton");
        trueButton->setGeometry(QRect(100, 190, 81, 24));
        falseButton = new QPushButton(WordDialog);
        falseButton->setObjectName("falseButton");
        falseButton->setGeometry(QRect(199, 190, 81, 24));
        nextButton = new QPushButton(WordDialog);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(100, 230, 181, 24));

        retranslateUi(WordDialog);

        QMetaObject::connectSlotsByName(WordDialog);
    } // setupUi

    void retranslateUi(QDialog *WordDialog)
    {
        WordDialog->setWindowTitle(QCoreApplication::translate("WordDialog", "Dialog", nullptr));
        wordLabel->setText(QString());
        meanLabel->setText(QString());
        trueButton->setText(QCoreApplication::translate("WordDialog", "\350\256\244\350\257\206", nullptr));
        falseButton->setText(QCoreApplication::translate("WordDialog", "\345\277\230\350\256\260", nullptr));
        nextButton->setText(QCoreApplication::translate("WordDialog", "\344\270\213\344\270\200\344\270\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordDialog: public Ui_WordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDDIALOG_H
