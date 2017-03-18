#ifndef HUNTING_DIALOG_H
#define HUNTING_DIALOG_H

#include <QDialog>

namespace Ui {
class Hunting_Dialog;
}

class Hunting_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Hunting_Dialog(QWidget *parent = 0);
    ~Hunting_Dialog();

private:
    Ui::Hunting_Dialog *ui;
};

#endif // HUNTING_DIALOG_H
