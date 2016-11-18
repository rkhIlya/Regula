#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T16:31:37
#
#-------------------------------------------------

QT       += core gui axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Regula
TEMPLATE = app

INCLUDEPATH = .


SOURCES += main.cpp\
        mainwindow.cpp \
    input/documentinformation.cpp \
    report/group.cpp \
    search/reference.cpp \
    input/readdocx.cpp

HEADERS  += mainwindow.h \
    input/itextextractor.h \
    db/idbworker.h \
    search/isearchengine.h \
    report/ireportengine.h \
    input/documentinformation.h \
    report/group.h \
    search/reference.h \
    input/readdocx.h

FORMS    += mainwindow.ui
