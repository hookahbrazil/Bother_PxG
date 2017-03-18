/********************************************************************************
** Form generated from reading UI file 'alarms_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMS_DIALOG_H
#define UI_ALARMS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Alarms_Dialog
{
public:

    void setupUi(QDialog *Alarms_Dialog)
    {
        if (Alarms_Dialog->objectName().isEmpty())
            Alarms_Dialog->setObjectName(QStringLiteral("Alarms_Dialog"));
        Alarms_Dialog->resize(400, 300);

        retranslateUi(Alarms_Dialog);

        QMetaObject::connectSlotsByName(Alarms_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Alarms_Dialog)
    {
        Alarms_Dialog->setWindowTitle(QApplication::translate("Alarms_Dialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Alarms_Dialog: public Ui_Alarms_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMS_DIALOG_H
