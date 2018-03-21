include(../../common.pri)

TARGET = shield
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createprotectionrequest.h \
    createprotectionrequest_p.h \
    createprotectionresponse.h \
    createprotectionresponse_p.h \
    createsubscriptionrequest.h \
    createsubscriptionrequest_p.h \
    createsubscriptionresponse.h \
    createsubscriptionresponse_p.h \
    deleteprotectionrequest.h \
    deleteprotectionrequest_p.h \
    deleteprotectionresponse.h \
    deleteprotectionresponse_p.h \
    deletesubscriptionrequest.h \
    deletesubscriptionrequest_p.h \
    deletesubscriptionresponse.h \
    deletesubscriptionresponse_p.h \
    describeattackrequest.h \
    describeattackrequest_p.h \
    describeattackresponse.h \
    describeattackresponse_p.h \
    describeprotectionrequest.h \
    describeprotectionrequest_p.h \
    describeprotectionresponse.h \
    describeprotectionresponse_p.h \
    describesubscriptionrequest.h \
    describesubscriptionrequest_p.h \
    describesubscriptionresponse.h \
    describesubscriptionresponse_p.h \
    getsubscriptionstaterequest.h \
    getsubscriptionstaterequest_p.h \
    getsubscriptionstateresponse.h \
    getsubscriptionstateresponse_p.h \
    listattacksrequest.h \
    listattacksrequest_p.h \
    listattacksresponse.h \
    listattacksresponse_p.h \
    listprotectionsrequest.h \
    listprotectionsrequest_p.h \
    listprotectionsresponse.h \
    listprotectionsresponse_p.h \
    shieldclient.h \
    shieldclient_p.h \
    shieldclientrequest.h \
    shieldclientrequest_p.h \
    shieldclientresponse.h \
    shieldclientresponse_p.h \

SOURCES += \
    createprotectionrequest.cpp \
    createprotectionresponse.cpp \
    createsubscriptionrequest.cpp \
    createsubscriptionresponse.cpp \
    deleteprotectionrequest.cpp \
    deleteprotectionresponse.cpp \
    deletesubscriptionrequest.cpp \
    deletesubscriptionresponse.cpp \
    describeattackrequest.cpp \
    describeattackresponse.cpp \
    describeprotectionrequest.cpp \
    describeprotectionresponse.cpp \
    describesubscriptionrequest.cpp \
    describesubscriptionresponse.cpp \
    getsubscriptionstaterequest.cpp \
    getsubscriptionstateresponse.cpp \
    listattacksrequest.cpp \
    listattacksresponse.cpp \
    listprotectionsrequest.cpp \
    listprotectionsresponse.cpp \
    shieldclient.cpp \
    shieldclientrequest.cpp \
    shieldclientresponse.cpp \

win32:CONFIG += skip_target_version_ext
