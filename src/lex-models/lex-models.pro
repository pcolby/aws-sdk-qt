include(../../common.pri)

TARGET = lex-models
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createbotversionrequest.h \
    createbotversionrequest_p.h \
    createbotversionresponse.h \
    createbotversionresponse_p.h \
    createintentversionrequest.h \
    createintentversionrequest_p.h \
    createintentversionresponse.h \
    createintentversionresponse_p.h \
    createslottypeversionrequest.h \
    createslottypeversionrequest_p.h \
    createslottypeversionresponse.h \
    createslottypeversionresponse_p.h \
    deletebotaliasrequest.h \
    deletebotaliasrequest_p.h \
    deletebotaliasresponse.h \
    deletebotaliasresponse_p.h \
    deletebotchannelassociationrequest.h \
    deletebotchannelassociationrequest_p.h \
    deletebotchannelassociationresponse.h \
    deletebotchannelassociationresponse_p.h \
    deletebotrequest.h \
    deletebotrequest_p.h \
    deletebotresponse.h \
    deletebotresponse_p.h \
    deletebotversionrequest.h \
    deletebotversionrequest_p.h \
    deletebotversionresponse.h \
    deletebotversionresponse_p.h \
    deleteintentrequest.h \
    deleteintentrequest_p.h \
    deleteintentresponse.h \
    deleteintentresponse_p.h \
    deleteintentversionrequest.h \
    deleteintentversionrequest_p.h \
    deleteintentversionresponse.h \
    deleteintentversionresponse_p.h \
    deleteslottyperequest.h \
    deleteslottyperequest_p.h \
    deleteslottyperesponse.h \
    deleteslottyperesponse_p.h \
    deleteslottypeversionrequest.h \
    deleteslottypeversionrequest_p.h \
    deleteslottypeversionresponse.h \
    deleteslottypeversionresponse_p.h \
    deleteutterancesrequest.h \
    deleteutterancesrequest_p.h \
    deleteutterancesresponse.h \
    deleteutterancesresponse_p.h \
    getbotaliasesrequest.h \
    getbotaliasesrequest_p.h \
    getbotaliasesresponse.h \
    getbotaliasesresponse_p.h \
    getbotaliasrequest.h \
    getbotaliasrequest_p.h \
    getbotaliasresponse.h \
    getbotaliasresponse_p.h \
    getbotchannelassociationrequest.h \
    getbotchannelassociationrequest_p.h \
    getbotchannelassociationresponse.h \
    getbotchannelassociationresponse_p.h \
    getbotchannelassociationsrequest.h \
    getbotchannelassociationsrequest_p.h \
    getbotchannelassociationsresponse.h \
    getbotchannelassociationsresponse_p.h \
    getbotrequest.h \
    getbotrequest_p.h \
    getbotresponse.h \
    getbotresponse_p.h \
    getbotsrequest.h \
    getbotsrequest_p.h \
    getbotsresponse.h \
    getbotsresponse_p.h \
    getbotversionsrequest.h \
    getbotversionsrequest_p.h \
    getbotversionsresponse.h \
    getbotversionsresponse_p.h \
    getbuiltinintentrequest.h \
    getbuiltinintentrequest_p.h \
    getbuiltinintentresponse.h \
    getbuiltinintentresponse_p.h \
    getbuiltinintentsrequest.h \
    getbuiltinintentsrequest_p.h \
    getbuiltinintentsresponse.h \
    getbuiltinintentsresponse_p.h \
    getbuiltinslottypesrequest.h \
    getbuiltinslottypesrequest_p.h \
    getbuiltinslottypesresponse.h \
    getbuiltinslottypesresponse_p.h \
    getexportrequest.h \
    getexportrequest_p.h \
    getexportresponse.h \
    getexportresponse_p.h \
    getimportrequest.h \
    getimportrequest_p.h \
    getimportresponse.h \
    getimportresponse_p.h \
    getintentrequest.h \
    getintentrequest_p.h \
    getintentresponse.h \
    getintentresponse_p.h \
    getintentsrequest.h \
    getintentsrequest_p.h \
    getintentsresponse.h \
    getintentsresponse_p.h \
    getintentversionsrequest.h \
    getintentversionsrequest_p.h \
    getintentversionsresponse.h \
    getintentversionsresponse_p.h \
    getslottyperequest.h \
    getslottyperequest_p.h \
    getslottyperesponse.h \
    getslottyperesponse_p.h \
    getslottypesrequest.h \
    getslottypesrequest_p.h \
    getslottypesresponse.h \
    getslottypesresponse_p.h \
    getslottypeversionsrequest.h \
    getslottypeversionsrequest_p.h \
    getslottypeversionsresponse.h \
    getslottypeversionsresponse_p.h \
    getutterancesviewrequest.h \
    getutterancesviewrequest_p.h \
    getutterancesviewresponse.h \
    getutterancesviewresponse_p.h \
    lexmodelbuildingserviceclient.h \
    lexmodelbuildingserviceclient_p.h \
    lexmodelbuildingserviceclientrequest.h \
    lexmodelbuildingserviceclientrequest_p.h \
    lexmodelbuildingserviceclientresponse.h \
    lexmodelbuildingserviceclientresponse_p.h \
    putbotaliasrequest.h \
    putbotaliasrequest_p.h \
    putbotaliasresponse.h \
    putbotaliasresponse_p.h \
    putbotrequest.h \
    putbotrequest_p.h \
    putbotresponse.h \
    putbotresponse_p.h \
    putintentrequest.h \
    putintentrequest_p.h \
    putintentresponse.h \
    putintentresponse_p.h \
    putslottyperequest.h \
    putslottyperequest_p.h \
    putslottyperesponse.h \
    putslottyperesponse_p.h \
    startimportrequest.h \
    startimportrequest_p.h \
    startimportresponse.h \
    startimportresponse_p.h \

SOURCES += \
    createbotversionrequest.cpp \
    createbotversionresponse.cpp \
    createintentversionrequest.cpp \
    createintentversionresponse.cpp \
    createslottypeversionrequest.cpp \
    createslottypeversionresponse.cpp \
    deletebotaliasrequest.cpp \
    deletebotaliasresponse.cpp \
    deletebotchannelassociationrequest.cpp \
    deletebotchannelassociationresponse.cpp \
    deletebotrequest.cpp \
    deletebotresponse.cpp \
    deletebotversionrequest.cpp \
    deletebotversionresponse.cpp \
    deleteintentrequest.cpp \
    deleteintentresponse.cpp \
    deleteintentversionrequest.cpp \
    deleteintentversionresponse.cpp \
    deleteslottyperequest.cpp \
    deleteslottyperesponse.cpp \
    deleteslottypeversionrequest.cpp \
    deleteslottypeversionresponse.cpp \
    deleteutterancesrequest.cpp \
    deleteutterancesresponse.cpp \
    getbotaliasesrequest.cpp \
    getbotaliasesresponse.cpp \
    getbotaliasrequest.cpp \
    getbotaliasresponse.cpp \
    getbotchannelassociationrequest.cpp \
    getbotchannelassociationresponse.cpp \
    getbotchannelassociationsrequest.cpp \
    getbotchannelassociationsresponse.cpp \
    getbotrequest.cpp \
    getbotresponse.cpp \
    getbotsrequest.cpp \
    getbotsresponse.cpp \
    getbotversionsrequest.cpp \
    getbotversionsresponse.cpp \
    getbuiltinintentrequest.cpp \
    getbuiltinintentresponse.cpp \
    getbuiltinintentsrequest.cpp \
    getbuiltinintentsresponse.cpp \
    getbuiltinslottypesrequest.cpp \
    getbuiltinslottypesresponse.cpp \
    getexportrequest.cpp \
    getexportresponse.cpp \
    getimportrequest.cpp \
    getimportresponse.cpp \
    getintentrequest.cpp \
    getintentresponse.cpp \
    getintentsrequest.cpp \
    getintentsresponse.cpp \
    getintentversionsrequest.cpp \
    getintentversionsresponse.cpp \
    getslottyperequest.cpp \
    getslottyperesponse.cpp \
    getslottypesrequest.cpp \
    getslottypesresponse.cpp \
    getslottypeversionsrequest.cpp \
    getslottypeversionsresponse.cpp \
    getutterancesviewrequest.cpp \
    getutterancesviewresponse.cpp \
    lexmodelbuildingserviceclient.cpp \
    lexmodelbuildingserviceclientrequest.cpp \
    lexmodelbuildingserviceclientresponse.cpp \
    putbotaliasrequest.cpp \
    putbotaliasresponse.cpp \
    putbotrequest.cpp \
    putbotresponse.cpp \
    putintentrequest.cpp \
    putintentresponse.cpp \
    putslottyperequest.cpp \
    putslottyperesponse.cpp \
    startimportrequest.cpp \
    startimportresponse.cpp \

win32:CONFIG += skip_target_version_ext
