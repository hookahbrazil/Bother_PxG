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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Main_Dialog
{
public:
    QGroupBox *groupBox_bother;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_caveBot;
    QPushButton *pushButton_healing;
    QPushButton *pushButton_fishing;
    QPushButton *pushButton_hunting;
    QPushButton *pushButton_alarms;

    void setupUi(QDialog *Main_Dialog)
    {
        if (Main_Dialog->objectName().isEmpty())
            Main_Dialog->setObjectName(QStringLiteral("Main_Dialog"));
        Main_Dialog->resize(245, 318);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/icones/minilogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Main_Dialog->setWindowIcon(icon);
        Main_Dialog->setStyleSheet(QStringLiteral(""));
        groupBox_bother = new QGroupBox(Main_Dialog);
        groupBox_bother->setObjectName(QStringLiteral("groupBox_bother"));
        groupBox_bother->setGeometry(QRect(9, 9, 118, 257));
        groupBox_bother->setCheckable(true);
        groupBox_bother->setChecked(false);
        verticalLayout = new QVBoxLayout(groupBox_bother);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_caveBot = new QPushButton(groupBox_bother);
        pushButton_caveBot->setObjectName(QStringLiteral("pushButton_caveBot"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton_caveBot->setFont(font);
        pushButton_caveBot->setLayoutDirection(Qt::LeftToRight);
        pushButton_caveBot->setAutoFillBackground(false);
        pushButton_caveBot->setStyleSheet(QStringLiteral("color:gray;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/images/icones/Cavebot.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_caveBot->setIcon(icon1);
        pushButton_caveBot->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_caveBot);

        pushButton_healing = new QPushButton(groupBox_bother);
        pushButton_healing->setObjectName(QStringLiteral("pushButton_healing"));
        pushButton_healing->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/images/icones/Healer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_healing->setIcon(icon2);
        pushButton_healing->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_healing);

        pushButton_fishing = new QPushButton(groupBox_bother);
        pushButton_fishing->setObjectName(QStringLiteral("pushButton_fishing"));
        pushButton_fishing->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/images/icones/Fishing.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_fishing->setIcon(icon3);
        pushButton_fishing->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_fishing);

        pushButton_hunting = new QPushButton(groupBox_bother);
        pushButton_hunting->setObjectName(QStringLiteral("pushButton_hunting"));
        pushButton_hunting->setFont(font);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/images/icones/Hunting.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_hunting->setIcon(icon4);
        pushButton_hunting->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_hunting);

        pushButton_alarms = new QPushButton(Main_Dialog);
        pushButton_alarms->setObjectName(QStringLiteral("pushButton_alarms"));
        pushButton_alarms->setGeometry(QRect(140, 200, 98, 40));
        pushButton_alarms->setFont(font);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/images/icones/Alarms.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_alarms->setIcon(icon5);
        pushButton_alarms->setIconSize(QSize(32, 32));

        retranslateUi(Main_Dialog);

        QMetaObject::connectSlotsByName(Main_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Main_Dialog)
    {
        Main_Dialog->setWindowTitle(QApplication::translate("Main_Dialog", "Main_Dialog", Q_NULLPTR));
        groupBox_bother->setTitle(QApplication::translate("Main_Dialog", "Ativar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_caveBot->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_caveBot->setText(QApplication::translate("Main_Dialog", "Cavebot", Q_NULLPTR));
        pushButton_healing->setText(QApplication::translate("Main_Dialog", "Curar", Q_NULLPTR));
        pushButton_fishing->setText(QApplication::translate("Main_Dialog", "Pescar", Q_NULLPTR));
        pushButton_hunting->setText(QApplication::translate("Main_Dialog", "Atacar", Q_NULLPTR));
        pushButton_alarms->setText(QApplication::translate("Main_Dialog", "Alarmes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Main_Dialog: public Ui_Main_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_DIALOG_H
