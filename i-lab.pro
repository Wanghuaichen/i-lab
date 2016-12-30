#-------------------------------------------------
#
# Project created by QtCreator 2016-12-06T09:43:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = i-lab
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    monitor.cpp \
    manipulator.cpp \
    agv.cpp \
    miller.cpp \
    lathe.cpp \
    delta.cpp \
    dnc.cpp \
    rfid.cpp \
    energy.cpp \
    dialog.cpp \
    dncsim.cpp \
    infoboard.cpp

HEADERS  += mainwindow.h \
    monitor.h \
    manipulator.h \
    agv.h \
    miller.h \
    lathe.h \
    delta.h \
    dnc.h \
    rfid.h \
    energy.h \
    dialog.h \
    dncsim.h \
    infoboard.h

FORMS    += \
    manipulator.ui \
    monitor.ui \
    mainwindow.ui \
    agv.ui \
    miller.ui \
    lathe.ui \
    delta.ui \
    dnc.ui \
    rfid.ui \
    energy.ui \
    dialog.ui \
    dncsim.ui \
    infoboard.ui

RESOURCES += \
    source.qrc
