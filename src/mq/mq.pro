include(../../common.pri)

TARGET = mq
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createbrokerrequest.h \
    createbrokerrequest_p.h \
    createbrokerresponse.h \
    createbrokerresponse_p.h \
    createconfigurationrequest.h \
    createconfigurationrequest_p.h \
    createconfigurationresponse.h \
    createconfigurationresponse_p.h \
    createuserrequest.h \
    createuserrequest_p.h \
    createuserresponse.h \
    createuserresponse_p.h \
    deletebrokerrequest.h \
    deletebrokerrequest_p.h \
    deletebrokerresponse.h \
    deletebrokerresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    describebrokerrequest.h \
    describebrokerrequest_p.h \
    describebrokerresponse.h \
    describebrokerresponse_p.h \
    describeconfigurationrequest.h \
    describeconfigurationrequest_p.h \
    describeconfigurationresponse.h \
    describeconfigurationresponse_p.h \
    describeconfigurationrevisionrequest.h \
    describeconfigurationrevisionrequest_p.h \
    describeconfigurationrevisionresponse.h \
    describeconfigurationrevisionresponse_p.h \
    describeuserrequest.h \
    describeuserrequest_p.h \
    describeuserresponse.h \
    describeuserresponse_p.h \
    listbrokersrequest.h \
    listbrokersrequest_p.h \
    listbrokersresponse.h \
    listbrokersresponse_p.h \
    listconfigurationrevisionsrequest.h \
    listconfigurationrevisionsrequest_p.h \
    listconfigurationrevisionsresponse.h \
    listconfigurationrevisionsresponse_p.h \
    listconfigurationsrequest.h \
    listconfigurationsrequest_p.h \
    listconfigurationsresponse.h \
    listconfigurationsresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    mqclient.h \
    mqclient_p.h \
    mqclientrequest.h \
    mqclientrequest_p.h \
    mqclientresponse.h \
    mqclientresponse_p.h \
    rebootbrokerrequest.h \
    rebootbrokerrequest_p.h \
    rebootbrokerresponse.h \
    rebootbrokerresponse_p.h \
    updatebrokerrequest.h \
    updatebrokerrequest_p.h \
    updatebrokerresponse.h \
    updatebrokerresponse_p.h \
    updateconfigurationrequest.h \
    updateconfigurationrequest_p.h \
    updateconfigurationresponse.h \
    updateconfigurationresponse_p.h \
    updateuserrequest.h \
    updateuserrequest_p.h \
    updateuserresponse.h \
    updateuserresponse_p.h \

SOURCES += \
    createbrokerrequest.cpp \
    createbrokerresponse.cpp \
    createconfigurationrequest.cpp \
    createconfigurationresponse.cpp \
    createuserrequest.cpp \
    createuserresponse.cpp \
    deletebrokerrequest.cpp \
    deletebrokerresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    describebrokerrequest.cpp \
    describebrokerresponse.cpp \
    describeconfigurationrequest.cpp \
    describeconfigurationresponse.cpp \
    describeconfigurationrevisionrequest.cpp \
    describeconfigurationrevisionresponse.cpp \
    describeuserrequest.cpp \
    describeuserresponse.cpp \
    listbrokersrequest.cpp \
    listbrokersresponse.cpp \
    listconfigurationrevisionsrequest.cpp \
    listconfigurationrevisionsresponse.cpp \
    listconfigurationsrequest.cpp \
    listconfigurationsresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    mqclient.cpp \
    mqclientrequest.cpp \
    mqclientresponse.cpp \
    rebootbrokerrequest.cpp \
    rebootbrokerresponse.cpp \
    updatebrokerrequest.cpp \
    updatebrokerresponse.cpp \
    updateconfigurationrequest.cpp \
    updateconfigurationresponse.cpp \
    updateuserrequest.cpp \
    updateuserresponse.cpp \

win32:CONFIG += skip_target_version_ext
