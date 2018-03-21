include(../../common.pri)

TARGET = meteringmarketplace
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchmeterusagerequest.h \
    batchmeterusagerequest_p.h \
    batchmeterusageresponse.h \
    batchmeterusageresponse_p.h \
    marketplacemeteringclient.h \
    marketplacemeteringclient_p.h \
    marketplacemeteringclientrequest.h \
    marketplacemeteringclientrequest_p.h \
    marketplacemeteringclientresponse.h \
    marketplacemeteringclientresponse_p.h \
    meterusagerequest.h \
    meterusagerequest_p.h \
    meterusageresponse.h \
    meterusageresponse_p.h \
    resolvecustomerrequest.h \
    resolvecustomerrequest_p.h \
    resolvecustomerresponse.h \
    resolvecustomerresponse_p.h \

SOURCES += \
    batchmeterusagerequest.cpp \
    batchmeterusageresponse.cpp \
    marketplacemeteringclient.cpp \
    marketplacemeteringclientrequest.cpp \
    marketplacemeteringclientresponse.cpp \
    meterusagerequest.cpp \
    meterusageresponse.cpp \
    resolvecustomerrequest.cpp \
    resolvecustomerresponse.cpp \

win32:CONFIG += skip_target_version_ext
