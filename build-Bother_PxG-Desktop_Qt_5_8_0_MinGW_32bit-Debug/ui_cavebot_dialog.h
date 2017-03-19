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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Cavebot_Dialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_cavebot;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_X;
    QLabel *label_2;
    QLineEdit *lineEdit_y;
    QLabel *label_3;
    QLineEdit *lineEdit_Z;
    QListWidget *listWidget;

    void setupUi(QDialog *Cavebot_Dialog)
    {
        if (Cavebot_Dialog->objectName().isEmpty())
            Cavebot_Dialog->setObjectName(QStringLiteral("Cavebot_Dialog"));
        Cavebot_Dialog->resize(166, 342);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/icones/Cavebot.png"), QSize(), QIcon::Normal, QIcon::Off);
        Cavebot_Dialog->setWindowIcon(icon);
        Cavebot_Dialog->setAutoFillBackground(false);
        Cavebot_Dialog->setSizeGripEnabled(false);
        Cavebot_Dialog->setModal(false);
        gridLayout = new QGridLayout(Cavebot_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_cavebot = new QGroupBox(Cavebot_Dialog);
        groupBox_cavebot->setObjectName(QStringLiteral("groupBox_cavebot"));
        groupBox_cavebot->setCheckable(true);
        groupBox_cavebot->setChecked(false);
        formLayout = new QFormLayout(groupBox_cavebot);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox_cavebot);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_X = new QLineEdit(groupBox_cavebot);
        lineEdit_X->setObjectName(QStringLiteral("lineEdit_X"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_X);

        label_2 = new QLabel(groupBox_cavebot);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_y = new QLineEdit(groupBox_cavebot);
        lineEdit_y->setObjectName(QStringLiteral("lineEdit_y"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_y);

        label_3 = new QLabel(groupBox_cavebot);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_Z = new QLineEdit(groupBox_cavebot);
        lineEdit_Z->setObjectName(QStringLiteral("lineEdit_Z"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Z);

        listWidget = new QListWidget(groupBox_cavebot);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        formLayout->setWidget(3, QFormLayout::FieldRole, listWidget);


        gridLayout->addWidget(groupBox_cavebot, 0, 0, 1, 1);


        retranslateUi(Cavebot_Dialog);

        QMetaObject::connectSlotsByName(Cavebot_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Cavebot_Dialog)
    {
        Cavebot_Dialog->setWindowTitle(QApplication::translate("Cavebot_Dialog", "Dialog", Q_NULLPTR));
        groupBox_cavebot->setTitle(QApplication::translate("Cavebot_Dialog", "Ativar", Q_NULLPTR));
        label->setText(QApplication::translate("Cavebot_Dialog", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("Cavebot_Dialog", "Y", Q_NULLPTR));
        label_3->setText(QApplication::translate("Cavebot_Dialog", "Z", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cavebot_Dialog: public Ui_Cavebot_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAVEBOT_DIALOG_H
