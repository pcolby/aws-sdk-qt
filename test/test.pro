TEMPLATE = app
QT += testlib
QT -= gui
CONFIG += testcase
SOURCES += test.cpp

# Enable code coverage reporting (for Linux at least).
unix:QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
unix:QMAKE_LFLAGS += -fprofile-arcs -ftest-coverage

#include(...)

SUBDIRS += core
