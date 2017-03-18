#ifndef MAIN_DIALOG_H
#define MAIN_DIALOG_H

#include <QDialog>

namespace Ui {
class Main_Dialog;
}

class Alarms_Dialog;
class Cavebot_Dialog;
class Fishing_Dialog;
class Healing_Dialog;
class Hunting_Dialog;


class Main_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Main_Dialog(QWidget *parent = 0);
    ~Main_Dialog();

private:
    Ui::Main_Dialog *ui;
    Alarms_Dialog *mAlarmsDialog;
    Cavebot_Dialog *mCavebotDialog;
    Fishing_Dialog *mFishingDialog;
    Healing_Dialog *mHealingDialog;
    Hunting_Dialog *mHuntingDialog;
};

#endif // MAIN_DIALOG_H
