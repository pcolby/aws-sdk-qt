include(../../common.pri)

TARGET = marketplacecommerceanalytics
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    marketplacecommerceanalyticsclient.h \
    marketplacecommerceanalyticsclient_p.h \

SOURCES += \
    marketplacecommerceanalyticsclient.cpp \

win32:CONFIG += skip_target_version_ext
