/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QPushButton *registerButton;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *usernameEdit;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLineEdit *passwordEdit;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(400, 300);
        registerButton = new QPushButton(RegisterDialog);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(80, 200, 201, 24));
        splitter = new QSplitter(RegisterDialog);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(80, 80, 201, 23));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName("label");
        splitter->addWidget(label);
        usernameEdit = new QLineEdit(splitter);
        usernameEdit->setObjectName("usernameEdit");
        splitter->addWidget(usernameEdit);
        splitter_2 = new QSplitter(RegisterDialog);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(80, 120, 201, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName("label_2");
        splitter_2->addWidget(label_2);
        passwordEdit = new QLineEdit(splitter_2);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(passwordEdit);

        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
