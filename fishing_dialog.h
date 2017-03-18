#ifndef FISHING_DIALOG_H
#define FISHING_DIALOG_H

#include <QDialog>

namespace Ui {
class Fishing_Dialog;
}

class Fishing_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Fishing_Dialog(QWidget *parent = 0);
    ~Fishing_Dialog();

private:
    Ui::Fishing_Dialog *ui;
};

#endif // FISHING_DIALOG_H
