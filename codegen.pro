TEMPLATE = app
CONFIG += C++11
QT -= gui

RESOURCES += $$PWD/qrc/api-descriptions.qrc

VPATH += src
HEADERS += generator.h
SOURCES += generator.cpp main.cpp
