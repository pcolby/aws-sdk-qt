include(../../common.pri)

TARGET = QtAwsKafka
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createclusterrequest.h \
    createclusterrequest_p.h \
    createclusterresponse.h \
    createclusterresponse_p.h \
    createconfigurationrequest.h \
    createconfigurationrequest_p.h \
    createconfigurationresponse.h \
    createconfigurationresponse_p.h \
    deleteclusterrequest.h \
    deleteclusterrequest_p.h \
    deleteclusterresponse.h \
    deleteclusterresponse_p.h \
    describeclusteroperationrequest.h \
    describeclusteroperationrequest_p.h \
    describeclusteroperationresponse.h \
    describeclusteroperationresponse_p.h \
    describeclusterrequest.h \
    describeclusterrequest_p.h \
    describeclusterresponse.h \
    describeclusterresponse_p.h \
    describeconfigurationrequest.h \
    describeconfigurationrequest_p.h \
    describeconfigurationresponse.h \
    describeconfigurationresponse_p.h \
    describeconfigurationrevisionrequest.h \
    describeconfigurationrevisionrequest_p.h \
    describeconfigurationrevisionresponse.h \
    describeconfigurationrevisionresponse_p.h \
    getbootstrapbrokersrequest.h \
    getbootstrapbrokersrequest_p.h \
    getbootstrapbrokersresponse.h \
    getbootstrapbrokersresponse_p.h \
    kafkaclient.h \
    kafkaclient_p.h \
    kafkarequest.h \
    kafkarequest_p.h \
    kafkaresponse.h \
    kafkaresponse_p.h \
    listclusteroperationsrequest.h \
    listclusteroperationsrequest_p.h \
    listclusteroperationsresponse.h \
    listclusteroperationsresponse_p.h \
    listclustersrequest.h \
    listclustersrequest_p.h \
    listclustersresponse.h \
    listclustersresponse_p.h \
    listconfigurationrevisionsrequest.h \
    listconfigurationrevisionsrequest_p.h \
    listconfigurationrevisionsresponse.h \
    listconfigurationrevisionsresponse_p.h \
    listconfigurationsrequest.h \
    listconfigurationsrequest_p.h \
    listconfigurationsresponse.h \
    listconfigurationsresponse_p.h \
    listnodesrequest.h \
    listnodesrequest_p.h \
    listnodesresponse.h \
    listnodesresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatebrokerstoragerequest.h \
    updatebrokerstoragerequest_p.h \
    updatebrokerstorageresponse.h \
    updatebrokerstorageresponse_p.h \
    updateclusterconfigurationrequest.h \
    updateclusterconfigurationrequest_p.h \
    updateclusterconfigurationresponse.h \
    updateclusterconfigurationresponse_p.h \

SOURCES += \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    createconfigurationrequest.cpp \
    createconfigurationresponse.cpp \
    deleteclusterrequest.cpp \
    deleteclusterresponse.cpp \
    describeclusteroperationrequest.cpp \
    describeclusteroperationresponse.cpp \
    describeclusterrequest.cpp \
    describeclusterresponse.cpp \
    describeconfigurationrequest.cpp \
    describeconfigurationresponse.cpp \
    describeconfigurationrevisionrequest.cpp \
    describeconfigurationrevisionresponse.cpp \
    getbootstrapbrokersrequest.cpp \
    getbootstrapbrokersresponse.cpp \
    kafkaclient.cpp \
    kafkarequest.cpp \
    kafkaresponse.cpp \
    listclusteroperationsrequest.cpp \
    listclusteroperationsresponse.cpp \
    listclustersrequest.cpp \
    listclustersresponse.cpp \
    listconfigurationrevisionsrequest.cpp \
    listconfigurationrevisionsresponse.cpp \
    listconfigurationsrequest.cpp \
    listconfigurationsresponse.cpp \
    listnodesrequest.cpp \
    listnodesresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatebrokerstoragerequest.cpp \
    updatebrokerstorageresponse.cpp \
    updateclusterconfigurationrequest.cpp \
    updateclusterconfigurationresponse.cpp \

win32:CONFIG += skip_target_version_ext
