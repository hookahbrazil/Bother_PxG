#include "engine.h"
#include "main_dialog.h"
Engine::Engine(QObject *parent) : QThread(parent)
{

}

void Engine::run()
{
    //    if (bother == true) {
        for (int var = 0; var < 10000; ++var) {
            emit coord_X(var);
        }

        //            emit coord_Y(i);
        //            emit coord_Z(i);
    //    }
}
