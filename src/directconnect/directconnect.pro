include(../../common.pri)

TARGET = directconnect
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    directconnectclient.h \
    directconnectclient_p.h \

SOURCES += \
    directconnectclient.cpp \

win32:CONFIG += skip_target_version_ext
