/********************************************************************************
** Form generated from reading UI file 'fishing_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FISHING_DIALOG_H
#define UI_FISHING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Fishing_Dialog
{
public:

    void setupUi(QDialog *Fishing_Dialog)
    {
        if (Fishing_Dialog->objectName().isEmpty())
            Fishing_Dialog->setObjectName(QStringLiteral("Fishing_Dialog"));
        Fishing_Dialog->resize(400, 300);

        retranslateUi(Fishing_Dialog);

        QMetaObject::connectSlotsByName(Fishing_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Fishing_Dialog)
    {
        Fishing_Dialog->setWindowTitle(QApplication::translate("Fishing_Dialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Fishing_Dialog: public Ui_Fishing_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FISHING_DIALOG_H
