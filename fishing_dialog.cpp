#include "fishing_dialog.h"
#include "ui_fishing_dialog.h"

Fishing_Dialog::Fishing_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fishing_Dialog)
{
    ui->setupUi(this);
    setWindowTitle("Pescar");
}

Fishing_Dialog::~Fishing_Dialog()
{
    delete ui;
}
