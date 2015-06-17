include(../../common.pri)
TARGET = aws
TEMPLATE = app
CONFIG += warn_on
QT += network
QT -= gui
INCLUDEPATH = $$TOPDIR/src
LIBS += -lqtaws

# Disable automatic ASCII conversions (best practice, especially for i18n support).
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

# Neaten the output directories.
CONFIG(debug,debug|release):   DESTDIR = $$absolute_path($$OUT_PWD/../../debug)
CONFIG(release,debug|release): DESTDIR = $$absolute_path($$OUT_PWD/../../release)
LIBS += -L$$DESTDIR
MOC_DIR = $$DESTDIR/$$TARGET-tmp
OBJECTS_DIR = $$DESTDIR/$$TARGET-tmp
QMAKE_RPATHDIR += $$DESTDIR
RCC_DIR = $$DESTDIR/$$TARGET-tmp

SOURCES += main.cpp
