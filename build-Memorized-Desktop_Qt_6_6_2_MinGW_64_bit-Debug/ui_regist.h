/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regist
{
public:
    QPushButton *regist;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *password;
    QSplitter *splitter_3;
    QLabel *label_3;
    QLineEdit *re_password;
    QPushButton *quit;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *username;

    void setupUi(QWidget *Regist)
    {
        if (Regist->objectName().isEmpty())
            Regist->setObjectName("Regist");
        Regist->resize(400, 300);
        regist = new QPushButton(Regist);
        regist->setObjectName("regist");
        regist->setGeometry(QRect(100, 210, 81, 24));
        splitter_2 = new QSplitter(Regist);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(100, 120, 201, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName("label_2");
        splitter_2->addWidget(label_2);
        password = new QLineEdit(splitter_2);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(password);
        splitter_3 = new QSplitter(Regist);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(100, 160, 201, 23));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName("label_3");
        splitter_3->addWidget(label_3);
        re_password = new QLineEdit(splitter_3);
        re_password->setObjectName("re_password");
        re_password->setEchoMode(QLineEdit::Password);
        splitter_3->addWidget(re_password);
        quit = new QPushButton(Regist);
        quit->setObjectName("quit");
        quit->setGeometry(QRect(220, 210, 80, 24));
        splitter = new QSplitter(Regist);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(100, 80, 201, 23));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        username = new QLineEdit(splitter);
        username->setObjectName("username");
        splitter->addWidget(username);

        retranslateUi(Regist);

        QMetaObject::connectSlotsByName(Regist);
    } // setupUi

    void retranslateUi(QWidget *Regist)
    {
        Regist->setWindowTitle(QCoreApplication::translate("Regist", "Form", nullptr));
        regist->setText(QCoreApplication::translate("Regist", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("Regist", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Regist", "\351\207\215\345\244\215\345\257\206\347\240\201\357\274\232", nullptr));
        quit->setText(QCoreApplication::translate("Regist", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("Regist", "\350\264\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regist: public Ui_Regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
