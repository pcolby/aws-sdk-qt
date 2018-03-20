include(../../common.pri)

TARGET = mturk-requester
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    mturkclient.h \
    mturkclient_p.h \

SOURCES += \
    mturkclient.cpp \

win32:CONFIG += skip_target_version_ext
