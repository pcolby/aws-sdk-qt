include(../../common.pri)

TARGET = sqs2
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    sqsclient.h \
    sqsclient_p.h \

SOURCES += \
    sqsclient.cpp \

win32:CONFIG += skip_target_version_ext
