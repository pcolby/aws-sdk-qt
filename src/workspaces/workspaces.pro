include(../../common.pri)

TARGET = workspaces
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createtagsrequest.h \
    createtagsrequest_p.h \
    createtagsresponse.h \
    createtagsresponse_p.h \
    createworkspacesrequest.h \
    createworkspacesrequest_p.h \
    createworkspacesresponse.h \
    createworkspacesresponse_p.h \
    deletetagsrequest.h \
    deletetagsrequest_p.h \
    deletetagsresponse.h \
    deletetagsresponse_p.h \
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
    modifyworkspacepropertiesrequest.h \
    modifyworkspacepropertiesrequest_p.h \
    modifyworkspacepropertiesresponse.h \
    modifyworkspacepropertiesresponse_p.h \
    rebootworkspacesrequest.h \
    rebootworkspacesrequest_p.h \
    rebootworkspacesresponse.h \
    rebootworkspacesresponse_p.h \
    rebuildworkspacesrequest.h \
    rebuildworkspacesrequest_p.h \
    rebuildworkspacesresponse.h \
    rebuildworkspacesresponse_p.h \
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
    workspacesclient.h \
    workspacesclient_p.h \
    workspacesclientrequest.h \
    workspacesclientrequest_p.h \
    workspacesclientresponse.h \
    workspacesclientresponse_p.h \

SOURCES += \
    createtagsrequest.cpp \
    createtagsresponse.cpp \
    createworkspacesrequest.cpp \
    createworkspacesresponse.cpp \
    deletetagsrequest.cpp \
    deletetagsresponse.cpp \
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
    modifyworkspacepropertiesrequest.cpp \
    modifyworkspacepropertiesresponse.cpp \
    rebootworkspacesrequest.cpp \
    rebootworkspacesresponse.cpp \
    rebuildworkspacesrequest.cpp \
    rebuildworkspacesresponse.cpp \
    startworkspacesrequest.cpp \
    startworkspacesresponse.cpp \
    stopworkspacesrequest.cpp \
    stopworkspacesresponse.cpp \
    terminateworkspacesrequest.cpp \
    terminateworkspacesresponse.cpp \
    workspacesclient.cpp \
    workspacesclientrequest.cpp \
    workspacesclientresponse.cpp \

win32:CONFIG += skip_target_version_ext
