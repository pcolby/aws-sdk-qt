include(../../common.pri)

TARGET = QtAwsWorkSpaces
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associateipgroupsrequest.h \
    associateipgroupsrequest_p.h \
    associateipgroupsresponse.h \
    associateipgroupsresponse_p.h \
    authorizeiprulesrequest.h \
    authorizeiprulesrequest_p.h \
    authorizeiprulesresponse.h \
    authorizeiprulesresponse_p.h \
    createipgrouprequest.h \
    createipgrouprequest_p.h \
    createipgroupresponse.h \
    createipgroupresponse_p.h \
    createtagsrequest.h \
    createtagsrequest_p.h \
    createtagsresponse.h \
    createtagsresponse_p.h \
    createworkspacesrequest.h \
    createworkspacesrequest_p.h \
    createworkspacesresponse.h \
    createworkspacesresponse_p.h \
    deleteipgrouprequest.h \
    deleteipgrouprequest_p.h \
    deleteipgroupresponse.h \
    deleteipgroupresponse_p.h \
    deletetagsrequest.h \
    deletetagsrequest_p.h \
    deletetagsresponse.h \
    deletetagsresponse_p.h \
    describeipgroupsrequest.h \
    describeipgroupsrequest_p.h \
    describeipgroupsresponse.h \
    describeipgroupsresponse_p.h \
    describetagsrequest.h \
    describetagsrequest_p.h \
    describetagsresponse.h \
    describetagsresponse_p.h \
    describeworkspacebundlesrequest.h \
    describeworkspacebundlesrequest_p.h \
    describeworkspacebundlesresponse.h \
    describeworkspacebundlesresponse_p.h \
    describeworkspacedirectoriesrequest.h \
    describeworkspacedirectoriesrequest_p.h \
    describeworkspacedirectoriesresponse.h \
    describeworkspacedirectoriesresponse_p.h \
    describeworkspacesconnectionstatusrequest.h \
    describeworkspacesconnectionstatusrequest_p.h \
    describeworkspacesconnectionstatusresponse.h \
    describeworkspacesconnectionstatusresponse_p.h \
    describeworkspacesrequest.h \
    describeworkspacesrequest_p.h \
    describeworkspacesresponse.h \
    describeworkspacesresponse_p.h \
    disassociateipgroupsrequest.h \
    disassociateipgroupsrequest_p.h \
    disassociateipgroupsresponse.h \
    disassociateipgroupsresponse_p.h \
    modifyworkspacepropertiesrequest.h \
    modifyworkspacepropertiesrequest_p.h \
    modifyworkspacepropertiesresponse.h \
    modifyworkspacepropertiesresponse_p.h \
    modifyworkspacestaterequest.h \
    modifyworkspacestaterequest_p.h \
    modifyworkspacestateresponse.h \
    modifyworkspacestateresponse_p.h \
    rebootworkspacesrequest.h \
    rebootworkspacesrequest_p.h \
    rebootworkspacesresponse.h \
    rebootworkspacesresponse_p.h \
    rebuildworkspacesrequest.h \
    rebuildworkspacesrequest_p.h \
    rebuildworkspacesresponse.h \
    rebuildworkspacesresponse_p.h \
    revokeiprulesrequest.h \
    revokeiprulesrequest_p.h \
    revokeiprulesresponse.h \
    revokeiprulesresponse_p.h \
    startworkspacesrequest.h \
    startworkspacesrequest_p.h \
    startworkspacesresponse.h \
    startworkspacesresponse_p.h \
    stopworkspacesrequest.h \
    stopworkspacesrequest_p.h \
    stopworkspacesresponse.h \
    stopworkspacesresponse_p.h \
    terminateworkspacesrequest.h \
    terminateworkspacesrequest_p.h \
    terminateworkspacesresponse.h \
    terminateworkspacesresponse_p.h \
    updaterulesofipgrouprequest.h \
    updaterulesofipgrouprequest_p.h \
    updaterulesofipgroupresponse.h \
    updaterulesofipgroupresponse_p.h \
    workspacesclient.h \
    workspacesclient_p.h \
    workspacesrequest.h \
    workspacesrequest_p.h \
    workspacesresponse.h \
    workspacesresponse_p.h \

SOURCES += \
    associateipgroupsrequest.cpp \
    associateipgroupsresponse.cpp \
    authorizeiprulesrequest.cpp \
    authorizeiprulesresponse.cpp \
    createipgrouprequest.cpp \
    createipgroupresponse.cpp \
    createtagsrequest.cpp \
    createtagsresponse.cpp \
    createworkspacesrequest.cpp \
    createworkspacesresponse.cpp \
    deleteipgrouprequest.cpp \
    deleteipgroupresponse.cpp \
    deletetagsrequest.cpp \
    deletetagsresponse.cpp \
    describeipgroupsrequest.cpp \
    describeipgroupsresponse.cpp \
    describetagsrequest.cpp \
    describetagsresponse.cpp \
    describeworkspacebundlesrequest.cpp \
    describeworkspacebundlesresponse.cpp \
    describeworkspacedirectoriesrequest.cpp \
    describeworkspacedirectoriesresponse.cpp \
    describeworkspacesconnectionstatusrequest.cpp \
    describeworkspacesconnectionstatusresponse.cpp \
    describeworkspacesrequest.cpp \
    describeworkspacesresponse.cpp \
    disassociateipgroupsrequest.cpp \
    disassociateipgroupsresponse.cpp \
    modifyworkspacepropertiesrequest.cpp \
    modifyworkspacepropertiesresponse.cpp \
    modifyworkspacestaterequest.cpp \
    modifyworkspacestateresponse.cpp \
    rebootworkspacesrequest.cpp \
    rebootworkspacesresponse.cpp \
    rebuildworkspacesrequest.cpp \
    rebuildworkspacesresponse.cpp \
    revokeiprulesrequest.cpp \
    revokeiprulesresponse.cpp \
    startworkspacesrequest.cpp \
    startworkspacesresponse.cpp \
    stopworkspacesrequest.cpp \
    stopworkspacesresponse.cpp \
    terminateworkspacesrequest.cpp \
    terminateworkspacesresponse.cpp \
    updaterulesofipgrouprequest.cpp \
    updaterulesofipgroupresponse.cpp \
    workspacesclient.cpp \
    workspacesrequest.cpp \
    workspacesresponse.cpp \

win32:CONFIG += skip_target_version_ext
