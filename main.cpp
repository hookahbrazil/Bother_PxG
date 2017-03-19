#include "main_dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fision");
    Main_Dialog w;
    w.show();

    return a.exec();
}
