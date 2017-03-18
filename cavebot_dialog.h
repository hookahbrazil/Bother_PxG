#ifndef CAVEBOT_DIALOG_H
#define CAVEBOT_DIALOG_H

#include <QDialog>

namespace Ui {
class Cavebot_Dialog;
}

class Cavebot_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Cavebot_Dialog(QWidget *parent = 0);
    ~Cavebot_Dialog();

private:
    Ui::Cavebot_Dialog *ui;
};

#endif // CAVEBOT_DIALOG_H
