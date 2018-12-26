include(../../common.pri)

TARGET = QtAwsS3Control
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    deletepublicaccessblockrequest.h \
    deletepublicaccessblockrequest_p.h \
    deletepublicaccessblockresponse.h \
    deletepublicaccessblockresponse_p.h \
    getpublicaccessblockrequest.h \
    getpublicaccessblockrequest_p.h \
    getpublicaccessblockresponse.h \
    getpublicaccessblockresponse_p.h \
    putpublicaccessblockrequest.h \
    putpublicaccessblockrequest_p.h \
    putpublicaccessblockresponse.h \
    putpublicaccessblockresponse_p.h \
    s3controlclient.h \
    s3controlclient_p.h \
    s3controlrequest.h \
    s3controlrequest_p.h \
    s3controlresponse.h \
    s3controlresponse_p.h \

SOURCES += \
    deletepublicaccessblockrequest.cpp \
    deletepublicaccessblockresponse.cpp \
    getpublicaccessblockrequest.cpp \
    getpublicaccessblockresponse.cpp \
    putpublicaccessblockrequest.cpp \
    putpublicaccessblockresponse.cpp \
    s3controlclient.cpp \
    s3controlrequest.cpp \
    s3controlresponse.cpp \

win32:CONFIG += skip_target_version_ext
