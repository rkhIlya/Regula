#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T16:31:37
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Regula
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    db/saphireworker.cpp

HEADERS  += mainwindow.h \
    input/itextextractor.h \
    db/idbworker.h \
    search/isearchengine.h \
    report/ireportengine.h \
    db/saphireworker.h

FORMS    += mainwindow.ui
