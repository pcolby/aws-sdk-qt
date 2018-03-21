include(../../common.pri)

TARGET = dax
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
    createparametergrouprequest.h \
    createparametergrouprequest_p.h \
    createparametergroupresponse.h \
    createparametergroupresponse_p.h \
    createsubnetgrouprequest.h \
    createsubnetgrouprequest_p.h \
    createsubnetgroupresponse.h \
    createsubnetgroupresponse_p.h \
    daxclient.h \
    daxclient_p.h \
    daxclientrequest.h \
    daxclientrequest_p.h \
    daxclientresponse.h \
    daxclientresponse_p.h \
    decreasereplicationfactorrequest.h \
    decreasereplicationfactorrequest_p.h \
    decreasereplicationfactorresponse.h \
    decreasereplicationfactorresponse_p.h \
    deleteclusterrequest.h \
    deleteclusterrequest_p.h \
    deleteclusterresponse.h \
    deleteclusterresponse_p.h \
    deleteparametergrouprequest.h \
    deleteparametergrouprequest_p.h \
    deleteparametergroupresponse.h \
    deleteparametergroupresponse_p.h \
    deletesubnetgrouprequest.h \
    deletesubnetgrouprequest_p.h \
    deletesubnetgroupresponse.h \
    deletesubnetgroupresponse_p.h \
    describeclustersrequest.h \
    describeclustersrequest_p.h \
    describeclustersresponse.h \
    describeclustersresponse_p.h \
    describedefaultparametersrequest.h \
    describedefaultparametersrequest_p.h \
    describedefaultparametersresponse.h \
    describedefaultparametersresponse_p.h \
    describeeventsrequest.h \
    describeeventsrequest_p.h \
    describeeventsresponse.h \
    describeeventsresponse_p.h \
    describeparametergroupsrequest.h \
    describeparametergroupsrequest_p.h \
    describeparametergroupsresponse.h \
    describeparametergroupsresponse_p.h \
    describeparametersrequest.h \
    describeparametersrequest_p.h \
    describeparametersresponse.h \
    describeparametersresponse_p.h \
    describesubnetgroupsrequest.h \
    describesubnetgroupsrequest_p.h \
    describesubnetgroupsresponse.h \
    describesubnetgroupsresponse_p.h \
    increasereplicationfactorrequest.h \
    increasereplicationfactorrequest_p.h \
    increasereplicationfactorresponse.h \
    increasereplicationfactorresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    rebootnoderequest.h \
    rebootnoderequest_p.h \
    rebootnoderesponse.h \
    rebootnoderesponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateclusterrequest.h \
    updateclusterrequest_p.h \
    updateclusterresponse.h \
    updateclusterresponse_p.h \
    updateparametergrouprequest.h \
    updateparametergrouprequest_p.h \
    updateparametergroupresponse.h \
    updateparametergroupresponse_p.h \
    updatesubnetgrouprequest.h \
    updatesubnetgrouprequest_p.h \
    updatesubnetgroupresponse.h \
    updatesubnetgroupresponse_p.h \

SOURCES += \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    createparametergrouprequest.cpp \
    createparametergroupresponse.cpp \
    createsubnetgrouprequest.cpp \
    createsubnetgroupresponse.cpp \
    daxclient.cpp \
    daxclientrequest.cpp \
    daxclientresponse.cpp \
    decreasereplicationfactorrequest.cpp \
    decreasereplicationfactorresponse.cpp \
    deleteclusterrequest.cpp \
    deleteclusterresponse.cpp \
    deleteparametergrouprequest.cpp \
    deleteparametergroupresponse.cpp \
    deletesubnetgrouprequest.cpp \
    deletesubnetgroupresponse.cpp \
    describeclustersrequest.cpp \
    describeclustersresponse.cpp \
    describedefaultparametersrequest.cpp \
    describedefaultparametersresponse.cpp \
    describeeventsrequest.cpp \
    describeeventsresponse.cpp \
    describeparametergroupsrequest.cpp \
    describeparametergroupsresponse.cpp \
    describeparametersrequest.cpp \
    describeparametersresponse.cpp \
    describesubnetgroupsrequest.cpp \
    describesubnetgroupsresponse.cpp \
    increasereplicationfactorrequest.cpp \
    increasereplicationfactorresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    rebootnoderequest.cpp \
    rebootnoderesponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateclusterrequest.cpp \
    updateclusterresponse.cpp \
    updateparametergrouprequest.cpp \
    updateparametergroupresponse.cpp \
    updatesubnetgrouprequest.cpp \
    updatesubnetgroupresponse.cpp \

win32:CONFIG += skip_target_version_ext
