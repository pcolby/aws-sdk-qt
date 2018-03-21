include(../../common.pri)

TARGET = elasticloadbalancingv2
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addlistenercertificatesrequest.h \
    addlistenercertificatesrequest_p.h \
    addlistenercertificatesresponse.h \
    addlistenercertificatesresponse_p.h \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    createlistenerrequest.h \
    createlistenerrequest_p.h \
    createlistenerresponse.h \
    createlistenerresponse_p.h \
    createloadbalancerrequest.h \
    createloadbalancerrequest_p.h \
    createloadbalancerresponse.h \
    createloadbalancerresponse_p.h \
    createrulerequest.h \
    createrulerequest_p.h \
    createruleresponse.h \
    createruleresponse_p.h \
    createtargetgrouprequest.h \
    createtargetgrouprequest_p.h \
    createtargetgroupresponse.h \
    createtargetgroupresponse_p.h \
    deletelistenerrequest.h \
    deletelistenerrequest_p.h \
    deletelistenerresponse.h \
    deletelistenerresponse_p.h \
    deleteloadbalancerrequest.h \
    deleteloadbalancerrequest_p.h \
    deleteloadbalancerresponse.h \
    deleteloadbalancerresponse_p.h \
    deleterulerequest.h \
    deleterulerequest_p.h \
    deleteruleresponse.h \
    deleteruleresponse_p.h \
    deletetargetgrouprequest.h \
    deletetargetgrouprequest_p.h \
    deletetargetgroupresponse.h \
    deletetargetgroupresponse_p.h \
    deregistertargetsrequest.h \
    deregistertargetsrequest_p.h \
    deregistertargetsresponse.h \
    deregistertargetsresponse_p.h \
    describeaccountlimitsrequest.h \
    describeaccountlimitsrequest_p.h \
    describeaccountlimitsresponse.h \
    describeaccountlimitsresponse_p.h \
    describelistenercertificatesrequest.h \
    describelistenercertificatesrequest_p.h \
    describelistenercertificatesresponse.h \
    describelistenercertificatesresponse_p.h \
    describelistenersrequest.h \
    describelistenersrequest_p.h \
    describelistenersresponse.h \
    describelistenersresponse_p.h \
    describeloadbalancerattributesrequest.h \
    describeloadbalancerattributesrequest_p.h \
    describeloadbalancerattributesresponse.h \
    describeloadbalancerattributesresponse_p.h \
    describeloadbalancersrequest.h \
    describeloadbalancersrequest_p.h \
    describeloadbalancersresponse.h \
    describeloadbalancersresponse_p.h \
    describerulesrequest.h \
    describerulesrequest_p.h \
    describerulesresponse.h \
    describerulesresponse_p.h \
    describesslpoliciesrequest.h \
    describesslpoliciesrequest_p.h \
    describesslpoliciesresponse.h \
    describesslpoliciesresponse_p.h \
    describetagsrequest.h \
    describetagsrequest_p.h \
    describetagsresponse.h \
    describetagsresponse_p.h \
    describetargetgroupattributesrequest.h \
    describetargetgroupattributesrequest_p.h \
    describetargetgroupattributesresponse.h \
    describetargetgroupattributesresponse_p.h \
    describetargetgroupsrequest.h \
    describetargetgroupsrequest_p.h \
    describetargetgroupsresponse.h \
    describetargetgroupsresponse_p.h \
    describetargethealthrequest.h \
    describetargethealthrequest_p.h \
    describetargethealthresponse.h \
    describetargethealthresponse_p.h \
    elasticloadbalancingv2client.h \
    elasticloadbalancingv2client_p.h \
    elasticloadbalancingv2clientrequest.h \
    elasticloadbalancingv2clientrequest_p.h \
    elasticloadbalancingv2clientresponse.h \
    elasticloadbalancingv2clientresponse_p.h \
    modifylistenerrequest.h \
    modifylistenerrequest_p.h \
    modifylistenerresponse.h \
    modifylistenerresponse_p.h \
    modifyloadbalancerattributesrequest.h \
    modifyloadbalancerattributesrequest_p.h \
    modifyloadbalancerattributesresponse.h \
    modifyloadbalancerattributesresponse_p.h \
    modifyrulerequest.h \
    modifyrulerequest_p.h \
    modifyruleresponse.h \
    modifyruleresponse_p.h \
    modifytargetgroupattributesrequest.h \
    modifytargetgroupattributesrequest_p.h \
    modifytargetgroupattributesresponse.h \
    modifytargetgroupattributesresponse_p.h \
    modifytargetgrouprequest.h \
    modifytargetgrouprequest_p.h \
    modifytargetgroupresponse.h \
    modifytargetgroupresponse_p.h \
    registertargetsrequest.h \
    registertargetsrequest_p.h \
    registertargetsresponse.h \
    registertargetsresponse_p.h \
    removelistenercertificatesrequest.h \
    removelistenercertificatesrequest_p.h \
    removelistenercertificatesresponse.h \
    removelistenercertificatesresponse_p.h \
    removetagsrequest.h \
    removetagsrequest_p.h \
    removetagsresponse.h \
    removetagsresponse_p.h \
    setipaddresstyperequest.h \
    setipaddresstyperequest_p.h \
    setipaddresstyperesponse.h \
    setipaddresstyperesponse_p.h \
    setruleprioritiesrequest.h \
    setruleprioritiesrequest_p.h \
    setruleprioritiesresponse.h \
    setruleprioritiesresponse_p.h \
    setsecuritygroupsrequest.h \
    setsecuritygroupsrequest_p.h \
    setsecuritygroupsresponse.h \
    setsecuritygroupsresponse_p.h \
    setsubnetsrequest.h \
    setsubnetsrequest_p.h \
    setsubnetsresponse.h \
    setsubnetsresponse_p.h \

SOURCES += \
    addlistenercertificatesrequest.cpp \
    addlistenercertificatesresponse.cpp \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    createlistenerrequest.cpp \
    createlistenerresponse.cpp \
    createloadbalancerrequest.cpp \
    createloadbalancerresponse.cpp \
    createrulerequest.cpp \
    createruleresponse.cpp \
    createtargetgrouprequest.cpp \
    createtargetgroupresponse.cpp \
    deletelistenerrequest.cpp \
    deletelistenerresponse.cpp \
    deleteloadbalancerrequest.cpp \
    deleteloadbalancerresponse.cpp \
    deleterulerequest.cpp \
    deleteruleresponse.cpp \
    deletetargetgrouprequest.cpp \
    deletetargetgroupresponse.cpp \
    deregistertargetsrequest.cpp \
    deregistertargetsresponse.cpp \
    describeaccountlimitsrequest.cpp \
    describeaccountlimitsresponse.cpp \
    describelistenercertificatesrequest.cpp \
    describelistenercertificatesresponse.cpp \
    describelistenersrequest.cpp \
    describelistenersresponse.cpp \
    describeloadbalancerattributesrequest.cpp \
    describeloadbalancerattributesresponse.cpp \
    describeloadbalancersrequest.cpp \
    describeloadbalancersresponse.cpp \
    describerulesrequest.cpp \
    describerulesresponse.cpp \
    describesslpoliciesrequest.cpp \
    describesslpoliciesresponse.cpp \
    describetagsrequest.cpp \
    describetagsresponse.cpp \
    describetargetgroupattributesrequest.cpp \
    describetargetgroupattributesresponse.cpp \
    describetargetgroupsrequest.cpp \
    describetargetgroupsresponse.cpp \
    describetargethealthrequest.cpp \
    describetargethealthresponse.cpp \
    elasticloadbalancingv2client.cpp \
    elasticloadbalancingv2clientrequest.cpp \
    elasticloadbalancingv2clientresponse.cpp \
    modifylistenerrequest.cpp \
    modifylistenerresponse.cpp \
    modifyloadbalancerattributesrequest.cpp \
    modifyloadbalancerattributesresponse.cpp \
    modifyrulerequest.cpp \
    modifyruleresponse.cpp \
    modifytargetgroupattributesrequest.cpp \
    modifytargetgroupattributesresponse.cpp \
    modifytargetgrouprequest.cpp \
    modifytargetgroupresponse.cpp \
    registertargetsrequest.cpp \
    registertargetsresponse.cpp \
    removelistenercertificatesrequest.cpp \
    removelistenercertificatesresponse.cpp \
    removetagsrequest.cpp \
    removetagsresponse.cpp \
    setipaddresstyperequest.cpp \
    setipaddresstyperesponse.cpp \
    setruleprioritiesrequest.cpp \
    setruleprioritiesresponse.cpp \
    setsecuritygroupsrequest.cpp \
    setsecuritygroupsresponse.cpp \
    setsubnetsrequest.cpp \
    setsubnetsresponse.cpp \

win32:CONFIG += skip_target_version_ext
