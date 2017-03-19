#ifndef CAVEBOT_DIALOG_H
#define CAVEBOT_DIALOG_H

#include <QDialog>

namespace Ui {
class Cavebot_Dialog;
}

class Engine;

class Cavebot_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Cavebot_Dialog(QWidget *parent = 0);
    ~Cavebot_Dialog();

private slots:
    void on_groupBox_cavebot_clicked();

private:
    Ui::Cavebot_Dialog *ui;
    Engine *mCoord;
};

#endif // CAVEBOT_DIALOG_H
