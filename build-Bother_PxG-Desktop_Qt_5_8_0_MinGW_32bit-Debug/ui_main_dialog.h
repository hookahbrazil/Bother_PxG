/********************************************************************************
** Form generated from reading UI file 'main_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_DIALOG_H
#define UI_MAIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Main_Dialog
{
public:

    void setupUi(QDialog *Main_Dialog)
    {
        if (Main_Dialog->objectName().isEmpty())
            Main_Dialog->setObjectName(QStringLiteral("Main_Dialog"));
        Main_Dialog->resize(504, 328);
        Main_Dialog->setStyleSheet(QStringLiteral("background-image: url(:/background/images/background/dark-page_shadow.png);"));

        retranslateUi(Main_Dialog);

        QMetaObject::connectSlotsByName(Main_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Main_Dialog)
    {
        Main_Dialog->setWindowTitle(QApplication::translate("Main_Dialog", "Main_Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Main_Dialog: public Ui_Main_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_DIALOG_H
