include(../../common.pri)

TARGET = connect
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    connectclient.h \
    connectclient_p.h \
    connectrequest.h \
    connectrequest_p.h \
    connectresponse.h \
    connectresponse_p.h \
    startoutboundvoicecontactrequest.h \
    startoutboundvoicecontactrequest_p.h \
    startoutboundvoicecontactresponse.h \
    startoutboundvoicecontactresponse_p.h \
    stopcontactrequest.h \
    stopcontactrequest_p.h \
    stopcontactresponse.h \
    stopcontactresponse_p.h \

SOURCES += \
    connectclient.cpp \
    connectrequest.cpp \
    connectresponse.cpp \
    startoutboundvoicecontactrequest.cpp \
    startoutboundvoicecontactresponse.cpp \
    stopcontactrequest.cpp \
    stopcontactresponse.cpp \

win32:CONFIG += skip_target_version_ext
