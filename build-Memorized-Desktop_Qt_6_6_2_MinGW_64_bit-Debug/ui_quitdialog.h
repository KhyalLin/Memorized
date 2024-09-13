/********************************************************************************
** Form generated from reading UI file 'quitdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUITDIALOG_H
#define UI_QUITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QuitDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *QuitDialog)
    {
        if (QuitDialog->objectName().isEmpty())
            QuitDialog->setObjectName("QuitDialog");
        QuitDialog->resize(400, 300);
        label = new QLabel(QuitDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 90, 181, 20));
        pushButton = new QPushButton(QuitDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 170, 71, 24));

        retranslateUi(QuitDialog);

        QMetaObject::connectSlotsByName(QuitDialog);
    } // setupUi

    void retranslateUi(QDialog *QuitDialog)
    {
        QuitDialog->setWindowTitle(QCoreApplication::translate("QuitDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("QuitDialog", "\346\201\255\345\226\234\344\275\240\345\256\214\346\210\220\344\272\206\344\273\212\345\244\251\347\232\204\345\255\246\344\271\240\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("QuitDialog", "Cheers!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuitDialog: public Ui_QuitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITDIALOG_H
