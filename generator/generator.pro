CONFIG += C++11
DEFINES += DEFAULT_API_DESCRIPTIONS_DIR=$$shell_quote(\"$$PWD/../descriptions\")
TEMPLATE = app
QT -= gui
HEADERS += generator.h
SOURCES += generator.cpp main.cpp
