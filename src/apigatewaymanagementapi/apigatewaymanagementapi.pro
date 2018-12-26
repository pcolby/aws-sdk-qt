include(../../common.pri)

TARGET = QtAwsApiGatewayManagementApi
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    apigatewaymanagementapiclient.h \
    apigatewaymanagementapiclient_p.h \
    apigatewaymanagementapirequest.h \
    apigatewaymanagementapirequest_p.h \
    apigatewaymanagementapiresponse.h \
    apigatewaymanagementapiresponse_p.h \
    posttoconnectionrequest.h \
    posttoconnectionrequest_p.h \
    posttoconnectionresponse.h \
    posttoconnectionresponse_p.h \

SOURCES += \
    apigatewaymanagementapiclient.cpp \
    apigatewaymanagementapirequest.cpp \
    apigatewaymanagementapiresponse.cpp \
    posttoconnectionrequest.cpp \
    posttoconnectionresponse.cpp \

win32:CONFIG += skip_target_version_ext
