#ifndef ENGINE_H
#define ENGINE_H

#include <QThread>

class Engine : public QThread
{
    Q_OBJECT
public:
    explicit Engine(QObject *parent = 0);
signals:
    void coord_X(int);

    void coord_Y(int);

    void coord_Z(int);
protected:
    void run();
};

#endif // ENGINE_H
