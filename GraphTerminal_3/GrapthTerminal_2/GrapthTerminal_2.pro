#-------------------------------------------------
#
# Project created by QtCreator 2015-03-30T15:05:37
#
#-------------------------------------------------
include( C:/qwt-6.1.3/examples/examples.pri )
QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += qwt
INCLUDEPATH += C:/qwt-6.1.3/include/
LIBS += -L"C:/qwt-6.1.3/lib" -lqwt
TARGET = GrapthTerminal_2
TEMPLATE = app

SOURCES  += main.cpp \
    widget.cpp \
    plot.cpp \
    integral.cpp \
    aperiodic_unit.cpp

HEADERS  += \
    widget.h \
    plot.h \
    integral.h \
    aperiodic_unit.h

FORMS    += \
    widget.ui

SUBDIRS += \
    ../../../qwt-6.1.3/examples/examples.pro
