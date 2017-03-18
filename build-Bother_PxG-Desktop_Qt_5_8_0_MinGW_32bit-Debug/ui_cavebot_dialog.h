/********************************************************************************
** Form generated from reading UI file 'cavebot_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAVEBOT_DIALOG_H
#define UI_CAVEBOT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Cavebot_Dialog
{
public:

    void setupUi(QDialog *Cavebot_Dialog)
    {
        if (Cavebot_Dialog->objectName().isEmpty())
            Cavebot_Dialog->setObjectName(QStringLiteral("Cavebot_Dialog"));
        Cavebot_Dialog->resize(400, 300);

        retranslateUi(Cavebot_Dialog);

        QMetaObject::connectSlotsByName(Cavebot_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Cavebot_Dialog)
    {
        Cavebot_Dialog->setWindowTitle(QApplication::translate("Cavebot_Dialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cavebot_Dialog: public Ui_Cavebot_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAVEBOT_DIALOG_H
