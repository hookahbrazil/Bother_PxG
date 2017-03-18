#ifndef ALARMS_DIALOG_H
#define ALARMS_DIALOG_H

#include <QDialog>

namespace Ui {
class Alarms_Dialog;
}

class Alarms_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Alarms_Dialog(QWidget *parent = 0);
    ~Alarms_Dialog();

private:
    Ui::Alarms_Dialog *ui;
};

#endif // ALARMS_DIALOG_H
