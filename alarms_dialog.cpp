#include "alarms_dialog.h"
#include "ui_alarms_dialog.h"

Alarms_Dialog::Alarms_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Alarms_Dialog)
{
    ui->setupUi(this);
    setWindowTitle("Alarmes");
}

Alarms_Dialog::~Alarms_Dialog()
{
    delete ui;
}
