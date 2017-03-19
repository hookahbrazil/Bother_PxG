#include "cavebot_dialog.h"
#include "main_dialog.h"
#include "ui_cavebot_dialog.h"
#include "engine.h"

Cavebot_Dialog::Cavebot_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cavebot_Dialog)
{
    ui->setupUi(this);
    setWindowTitle("Cavebot");
    mCoord = new Engine(this);
    mCoord->start(QThread::HighestPriority);
    connect(mCoord, &Engine::coord_X, [&](int x){
        ui->listWidget->addItem(QString::number(x));
    });
}

Cavebot_Dialog::~Cavebot_Dialog()
{
    delete ui;
}

void Cavebot_Dialog::on_groupBox_cavebot_clicked()
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
