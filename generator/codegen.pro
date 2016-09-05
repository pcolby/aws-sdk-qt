include(../../../common.pri)
CONFIG += C++11
DEFINES += DEFAULT_API_DESCRIPTIONS_DIR=$$shell_quote(\"$$PWD/api-descriptions\")
TEMPLATE = app
QT -= gui
HEADERS += generator.h
SOURCES += codegen.cpp generator.cpp
