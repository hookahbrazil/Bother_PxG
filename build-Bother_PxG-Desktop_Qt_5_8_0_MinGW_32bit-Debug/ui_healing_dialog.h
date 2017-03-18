/********************************************************************************
** Form generated from reading UI file 'healing_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALING_DIALOG_H
#define UI_HEALING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Healing_Dialog
{
public:

    void setupUi(QDialog *Healing_Dialog)
    {
        if (Healing_Dialog->objectName().isEmpty())
            Healing_Dialog->setObjectName(QStringLiteral("Healing_Dialog"));
        Healing_Dialog->resize(400, 300);

        retranslateUi(Healing_Dialog);

        QMetaObject::connectSlotsByName(Healing_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Healing_Dialog)
    {
        Healing_Dialog->setWindowTitle(QApplication::translate("Healing_Dialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Healing_Dialog: public Ui_Healing_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALING_DIALOG_H
