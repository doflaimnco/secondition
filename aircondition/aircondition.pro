
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network sql

TARGET = aircondition
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    netcontrollor.cpp \
    reportwindow.cpp \
    monitorwindow.cpp \
    datacontrollor.cpp \
    adjustdialog.cpp

HEADERS  += mainwindow.h \
    netcontrollor.h \
    reportwindow.h \
    monitorwindow.h \
    datacontrollor.h \
    constant.h \
    DataStruct.h \
    adjustdialog.h \
    json.hpp \
    protocol.h

FORMS    += mainwindow.ui \
    reportwindow.ui \
    monitorwindow.ui \
    adjustdialog.ui
