#include "hunting_dialog.h"
#include "ui_hunting_dialog.h"

Hunting_Dialog::Hunting_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hunting_Dialog)
{
    ui->setupUi(this);
}

Hunting_Dialog::~Hunting_Dialog()
{
    delete ui;
}
