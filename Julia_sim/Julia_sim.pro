#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T13:18:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Julia_sim
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    julia_worker.cpp \
    julia.cpp

HEADERS  += mainwindow.h \
    julia_worker.h \
    julia.h

FORMS    += mainwindow.ui
