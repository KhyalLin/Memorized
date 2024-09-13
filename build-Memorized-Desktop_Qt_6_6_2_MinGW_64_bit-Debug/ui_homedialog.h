/********************************************************************************
** Form generated from reading UI file 'homedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEDIALOG_H
#define UI_HOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomeDialog
{
public:
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *registerButton;

    void setupUi(QDialog *HomeDialog)
    {
        if (HomeDialog->objectName().isEmpty())
            HomeDialog->setObjectName("HomeDialog");
        HomeDialog->resize(400, 300);
        label = new QLabel(HomeDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 60, 91, 41));
        label->setTextFormat(Qt::AutoText);
        loginButton = new QPushButton(HomeDialog);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(151, 170, 91, 24));
        registerButton = new QPushButton(HomeDialog);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(150, 210, 91, 24));

        retranslateUi(HomeDialog);

        QMetaObject::connectSlotsByName(HomeDialog);
    } // setupUi

    void retranslateUi(QDialog *HomeDialog)
    {
        HomeDialog->setWindowTitle(QCoreApplication::translate("HomeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HomeDialog", "Memorized", nullptr));
        loginButton->setText(QCoreApplication::translate("HomeDialog", "\347\231\273\345\275\225", nullptr));
        registerButton->setText(QCoreApplication::translate("HomeDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeDialog: public Ui_HomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEDIALOG_H
