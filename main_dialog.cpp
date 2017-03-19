#include "main_dialog.h"
#include "ui_main_dialog.h"
#include "alarms_dialog.h"
#include "cavebot_dialog.h"
#include "fishing_dialog.h"
#include "healing_dialog.h"
#include "hunting_dialog.h"
#include "qmessagebox.h"

Main_Dialog::Main_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Main_Dialog)
{
    ui->setupUi(this);
    setWindowTitle("Bother PxG");
    mAlarmsDialog  = new Alarms_Dialog(this);
    mCavebotDialog  = new Cavebot_Dialog(this);
    mFishingDialog  = new Fishing_Dialog(this);
    mHealingDialog  = new Healing_Dialog(this);
    mHuntingDialog  = new Hunting_Dialog(this);
}

Main_Dialog::~Main_Dialog()
{
    delete ui;
}


void Main_Dialog::on_pushButton_caveBot_clicked()
{
    mCavebotDialog->show();
}

void Main_Dialog::on_pushButton_healing_clicked()
{
    mHealingDialog->show();
}

void Main_Dialog::on_pushButton_fishing_clicked()
{
    mFishingDialog->show();
}

void Main_Dialog::on_pushButton_hunting_clicked()
{
    mHuntingDialog->show();
}

void Main_Dialog::on_pushButton_alarms_clicked() //Show alarm
{
    //mAlarmsDialog->show();

}


void Main_Dialog::on_groupBox_bother_clicked()// Set bother ON or OFF
{
    bool checked = Main_Dialog::get()->get_bother_status();
    if (checked == false) {
        Main_Dialog::get()->set_bother_status(true);
    }
    else
    {
        Main_Dialog::get()->set_bother_status(false);
    }
}
