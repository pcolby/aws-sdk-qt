include(../../../common.pri)
DEFINES += DEFAULT_API_DESCRIPTIONS_DIR=$$shell_quote(\"$$PWD/api-descriptions\")
TEMPLATE = app
QT -= gui
SOURCES += codegen.cpp
