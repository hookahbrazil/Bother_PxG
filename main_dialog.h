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
    bool bother_status = false;
    bool alarms_status = false;
    bool cavebot_status = false;
    bool fishing_status = false;
    bool healing_status = false;
    bool hunting_status = false;

public:
    explicit Main_Dialog(QWidget *parent = 0);
    ~Main_Dialog();

    void set_bother_status(bool new_status){this->bother_status = new_status;}
    void set_alarms_status(bool new_status){this->alarms_status = new_status;}
    void set_cavebot_status(bool new_status){this->cavebot_status = new_status;}
    void set_fishing_status(bool new_status){this->fishing_status = new_status;}
    void set_healing_status(bool new_status){this->healing_status = new_status;}
    void set_hunting_status(bool new_status){this->hunting_status = new_status;}

    bool get_bother_status(){ return this->bother_status;}
    bool get_alarms_status(){ return this->alarms_status;}
    bool get_cavebot_status(){ return this->cavebot_status;}
    bool get_fishing_status(){ return this->fishing_status;}
    bool get_healing_status(){ return this->healing_status;}
    bool get_hunting_status(){ return this->hunting_status;}

    static Main_Dialog* get(){
        static Main_Dialog* m = nullptr;
        if (!m) {
            m = new Main_Dialog();
            return m;
        }
    }

private slots:

    void on_pushButton_caveBot_clicked();

    void on_pushButton_healing_clicked();

    void on_pushButton_fishing_clicked();

    void on_pushButton_hunting_clicked();

    void on_pushButton_alarms_clicked();


    void on_groupBox_bother_clicked();

private:
    Ui::Main_Dialog *ui;
    Alarms_Dialog *mAlarmsDialog;
    Cavebot_Dialog *mCavebotDialog;
    Fishing_Dialog *mFishingDialog;
    Healing_Dialog *mHealingDialog;
    Hunting_Dialog *mHuntingDialog;
};

#endif // MAIN_DIALOG_H
