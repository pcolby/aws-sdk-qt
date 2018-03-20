include(../../common.pri)

TARGET = datapipeline
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    datapipelineclient.h \
    datapipelineclient_p.h \

SOURCES += \
    datapipelineclient.cpp \

win32:CONFIG += skip_target_version_ext
