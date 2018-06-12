include(../../common.pri)

TARGET = QtAwsPi
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    describedimensionkeysrequest.h \
    describedimensionkeysrequest_p.h \
    describedimensionkeysresponse.h \
    describedimensionkeysresponse_p.h \
    getresourcemetricsrequest.h \
    getresourcemetricsrequest_p.h \
    getresourcemetricsresponse.h \
    getresourcemetricsresponse_p.h \
    piclient.h \
    piclient_p.h \
    pirequest.h \
    pirequest_p.h \
    piresponse.h \
    piresponse_p.h \

SOURCES += \
    describedimensionkeysrequest.cpp \
    describedimensionkeysresponse.cpp \
    getresourcemetricsrequest.cpp \
    getresourcemetricsresponse.cpp \
    piclient.cpp \
    pirequest.cpp \
    piresponse.cpp \

win32:CONFIG += skip_target_version_ext
