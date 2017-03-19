/********************************************************************************
** Form generated from reading UI file 'hunting_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUNTING_DIALOG_H
#define UI_HUNTING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Hunting_Dialog
{
public:

    void setupUi(QDialog *Hunting_Dialog)
    {
        if (Hunting_Dialog->objectName().isEmpty())
            Hunting_Dialog->setObjectName(QStringLiteral("Hunting_Dialog"));
        Hunting_Dialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/icones/Hunting.png"), QSize(), QIcon::Normal, QIcon::Off);
        Hunting_Dialog->setWindowIcon(icon);

        retranslateUi(Hunting_Dialog);

        QMetaObject::connectSlotsByName(Hunting_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Hunting_Dialog)
    {
        Hunting_Dialog->setWindowTitle(QApplication::translate("Hunting_Dialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Hunting_Dialog: public Ui_Hunting_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUNTING_DIALOG_H
