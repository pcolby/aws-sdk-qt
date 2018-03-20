include(../../common.pri)

TARGET = cognito-idp
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cognitoidentityproviderclient.h \
    cognitoidentityproviderclient_p.h \

SOURCES += \
    cognitoidentityproviderclient.cpp \

win32:CONFIG += skip_target_version_ext
