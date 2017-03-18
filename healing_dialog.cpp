#include "healing_dialog.h"
#include "ui_healing_dialog.h"

Healing_Dialog::Healing_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Healing_Dialog)
{
    ui->setupUi(this);
}

Healing_Dialog::~Healing_Dialog()
{
    delete ui;
}
