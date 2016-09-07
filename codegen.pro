CONFIG += C++11
DEFINES += DEFAULT_API_DESCRIPTIONS_DIR=$$shell_quote(\"$$PWD/qrc/descriptions\")
TEMPLATE = app
QT -= gui
VPATH += src
HEADERS += generator.h
SOURCES += generator.cpp main.cpp
