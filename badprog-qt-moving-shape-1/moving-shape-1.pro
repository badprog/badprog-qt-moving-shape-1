# BadproG.com

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = moving-shape-1
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += src/main.cpp\
    src/MainWindow.cpp \
    src/MovingShape.cpp

HEADERS += src/MainWindow.h \
    src/IMovable.h \
    src/MovingShape.h


FORMS   += src/MainWindow.ui
