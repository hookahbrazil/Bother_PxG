#include "main_dialog.h"
#include "ui_main_dialog.h"
#include "alarms_dialog.h"
#include "cavebot_dialog.h"
#include "fishing_dialog.h"
#include "healing_dialog.h"
#include "hunting_dialog.h"

Main_Dialog::Main_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Main_Dialog)
{
    ui->setupUi(this);
    mAlarmsDialog  = new Alarms_Dialog;
    mCavebotDialog  = new Cavebot_Dialog(this);
    mFishingDialog  = new Fishing_Dialog(this);
    mHealingDialog  = new Healing_Dialog(this);
    mHuntingDialog  = new Hunting_Dialog(this);
}

Main_Dialog::~Main_Dialog()
{
    delete ui;
}
