#ifndef HEALING_DIALOG_H
#define HEALING_DIALOG_H

#include <QDialog>

namespace Ui {
class Healing_Dialog;
}

class Healing_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Healing_Dialog(QWidget *parent = 0);
    ~Healing_Dialog();

private:
    Ui::Healing_Dialog *ui;
};

#endif // HEALING_DIALOG_H
