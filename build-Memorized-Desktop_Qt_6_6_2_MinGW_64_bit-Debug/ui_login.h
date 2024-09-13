/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *regist;
    QPushButton *login;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *username;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *password;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        regist = new QPushButton(Login);
        regist->setObjectName("regist");
        regist->setGeometry(QRect(100, 180, 80, 24));
        login = new QPushButton(Login);
        login->setObjectName("login");
        login->setGeometry(QRect(230, 180, 80, 24));
        splitter = new QSplitter(Login);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(100, 90, 211, 23));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        username = new QLineEdit(splitter);
        username->setObjectName("username");
        splitter->addWidget(username);
        splitter_2 = new QSplitter(Login);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(100, 130, 211, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName("label_2");
        splitter_2->addWidget(label_2);
        password = new QLineEdit(splitter_2);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);
        password->setDragEnabled(false);
        splitter_2->addWidget(password);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        regist->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
