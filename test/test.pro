TEMPLATE = app
QT += testlib
QT -= gui
CONFIG += testcase
SOURCES += test.cpp

# Neaten the output directories.
MOC_DIR = build
OBJECTS_DIR = build

# Enable code coverage reporting (for Linux at least).
unix:QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
unix:QMAKE_LFLAGS += -fprofile-arcs -ftest-coverage

# @todo
# lcov --capture --directory . --output coverage.info
# genhtml --prefix `pwd` --output-directory coverage_html coverage.info

include(core/core.pri)

#SUBDIRS += core
