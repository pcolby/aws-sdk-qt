include(../../common.pri)

TARGET = s3
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    s3client.h \
    s3client_p.h \

SOURCES += \
    s3client.cpp \

win32:CONFIG += skip_target_version_ext
