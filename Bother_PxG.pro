#-------------------------------------------------
#
# Project created by QtCreator 2017-03-17T21:13:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bother_PxG
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        main_dialog.cpp \
    cavebot_dialog.cpp \
    alarms_dialog.cpp \
    fishing_dialog.cpp \
    healing_dialog.cpp \
    hunting_dialog.cpp

HEADERS  += main_dialog.h \
    cavebot_dialog.h \
    alarms_dialog.h \
    fishing_dialog.h \
    healing_dialog.h \
    hunting_dialog.h

FORMS    += main_dialog.ui \
    cavebot_dialog.ui \
    alarms_dialog.ui \
    fishing_dialog.ui \
    healing_dialog.ui \
    hunting_dialog.ui

RESOURCES += \
    images_resourcefile.qrc
