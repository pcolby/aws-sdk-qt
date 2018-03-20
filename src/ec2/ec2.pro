include(../../common.pri)

TARGET = ec2
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    ec2client.h \
    ec2client_p.h \

SOURCES += \
    ec2client.cpp \

win32:CONFIG += skip_target_version_ext
