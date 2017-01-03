#-------------------------------------------------
#
# Project created by QtCreator 2017-01-02T10:32:15
#
#-------------------------------------------------

QT       += core gui multimedia quick multimediawidgets concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = zxingexample
TEMPLATE = app

include(./src/QZXing.pri)

SOURCES += main.cpp\
        mainwindow.cpp \
    cameraframegrabber.cpp \
    bzxing.cpp

HEADERS  += mainwindow.h \
    imagehandler.h \
    cameraframegrabber.h \
    bzxing.h
FORMS    += mainwindow.ui

