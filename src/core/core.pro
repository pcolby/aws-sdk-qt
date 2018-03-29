include(../../common.pri)

TARGET = aws-qt-core
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
        awsabstractclient.h \
        awsabstractclient_p.h \
        awsabstractcredentials.h \
        awsabstractcredentials_p.h \
        awsabstractrequest.h \
        awsabstractrequest_p.h \
        awsabstractresponse.h \
        awsabstractresponse_p.h \
        awsabstractsignature.h \
        awsabstractsignature_p.h \
        awsanonymouscredentials.h \
        awsbasiccredentials.h \
        awsbasiccredentials_p.h \
        awsendpoint.h \
        awsendpoint_p.h \
        awsregion.h \
        awsregion_p.h \
        awssignaturev0.h \
        awssignaturev0_p.h \
        awssignaturev1.h \
        awssignaturev1_p.h \
        awssignaturev2.h \
        awssignaturev2_p.h \
        awssignaturev3.h \
        awssignaturev3_p.h \
        awssignaturev4.h \
        awssignaturev4_p.h \
        qtawsglobal.h

SOURCES += \
        awsabstractclient.cpp \
        awsabstractcredentials.cpp \
        awsabstractrequest.cpp \
        awsabstractresponse.cpp \
        awsabstractsignature.cpp \
        awsanonymouscredentials.cpp \
        awsbasiccredentials.cpp \
        awsendpoint.cpp \
        awsregion.cpp \
        awssignaturev0.cpp \
        awssignaturev1.cpp \
        awssignaturev2.cpp \
        awssignaturev3.cpp \
        awssignaturev4.cpp \

win32:CONFIG += skip_target_version_ext
