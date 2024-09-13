/********************************************************************************
** Form generated from reading UI file 'querydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYDIALOG_H
#define UI_QUERYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QueryDialog
{
public:
    QPushButton *pushButton;
    QLabel *welcomeLable;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *numEdit;
    QLabel *bookLabel;
    QPushButton *changeButton;

    void setupUi(QDialog *QueryDialog)
    {
        if (QueryDialog->objectName().isEmpty())
            QueryDialog->setObjectName("QueryDialog");
        QueryDialog->resize(400, 300);
        pushButton = new QPushButton(QueryDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 210, 61, 24));
        welcomeLable = new QLabel(QueryDialog);
        welcomeLable->setObjectName("welcomeLable");
        welcomeLable->setGeometry(QRect(130, 40, 111, 20));
        label_2 = new QLabel(QueryDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(102, 150, 84, 16));
        label = new QLabel(QueryDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(242, 150, 16, 16));
        numEdit = new QLineEdit(QueryDialog);
        numEdit->setObjectName("numEdit");
        numEdit->setGeometry(QRect(190, 150, 41, 23));
        bookLabel = new QLabel(QueryDialog);
        bookLabel->setObjectName("bookLabel");
        bookLabel->setGeometry(QRect(103, 110, 131, 20));
        changeButton = new QPushButton(QueryDialog);
        changeButton->setObjectName("changeButton");
        changeButton->setGeometry(QRect(100, 210, 61, 24));

        retranslateUi(QueryDialog);

        QMetaObject::connectSlotsByName(QueryDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryDialog)
    {
        QueryDialog->setWindowTitle(QCoreApplication::translate("QueryDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("QueryDialog", "\347\241\256\345\256\232", nullptr));
        welcomeLable->setText(QString());
        label_2->setText(QCoreApplication::translate("QueryDialog", "\346\202\250\350\256\241\345\210\222\350\277\231\346\254\241\345\255\246\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("QueryDialog", "\350\257\215", nullptr));
        bookLabel->setText(QCoreApplication::translate("QueryDialog", "\346\202\250\347\232\204\350\257\215\344\271\246\357\274\232", nullptr));
        changeButton->setText(QCoreApplication::translate("QueryDialog", "\345\210\207\346\215\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryDialog: public Ui_QueryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYDIALOG_H
