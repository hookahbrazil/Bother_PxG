#include "cavebot_dialog.h"
#include "ui_cavebot_dialog.h"

Cavebot_Dialog::Cavebot_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cavebot_Dialog)
{
    ui->setupUi(this);
}

Cavebot_Dialog::~Cavebot_Dialog()
{
    delete ui;
}
