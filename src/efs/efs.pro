include(../../common.pri)

TARGET = QtAwsEfs
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createfilesystemrequest.h \
    createfilesystemrequest_p.h \
    createfilesystemresponse.h \
    createfilesystemresponse_p.h \
    createmounttargetrequest.h \
    createmounttargetrequest_p.h \
    createmounttargetresponse.h \
    createmounttargetresponse_p.h \
    createtagsrequest.h \
    createtagsrequest_p.h \
    createtagsresponse.h \
    createtagsresponse_p.h \
    deletefilesystemrequest.h \
    deletefilesystemrequest_p.h \
    deletefilesystemresponse.h \
    deletefilesystemresponse_p.h \
    deletemounttargetrequest.h \
    deletemounttargetrequest_p.h \
    deletemounttargetresponse.h \
    deletemounttargetresponse_p.h \
    deletetagsrequest.h \
    deletetagsrequest_p.h \
    deletetagsresponse.h \
    deletetagsresponse_p.h \
    describefilesystemsrequest.h \
    describefilesystemsrequest_p.h \
    describefilesystemsresponse.h \
    describefilesystemsresponse_p.h \
    describemounttargetsecuritygroupsrequest.h \
    describemounttargetsecuritygroupsrequest_p.h \
    describemounttargetsecuritygroupsresponse.h \
    describemounttargetsecuritygroupsresponse_p.h \
    describemounttargetsrequest.h \
    describemounttargetsrequest_p.h \
    describemounttargetsresponse.h \
    describemounttargetsresponse_p.h \
    describetagsrequest.h \
    describetagsrequest_p.h \
    describetagsresponse.h \
    describetagsresponse_p.h \
    efsclient.h \
    efsclient_p.h \
    efsrequest.h \
    efsrequest_p.h \
    efsresponse.h \
    efsresponse_p.h \
    modifymounttargetsecuritygroupsrequest.h \
    modifymounttargetsecuritygroupsrequest_p.h \
    modifymounttargetsecuritygroupsresponse.h \
    modifymounttargetsecuritygroupsresponse_p.h \
    updatefilesystemrequest.h \
    updatefilesystemrequest_p.h \
    updatefilesystemresponse.h \
    updatefilesystemresponse_p.h \

SOURCES += \
    createfilesystemrequest.cpp \
    createfilesystemresponse.cpp \
    createmounttargetrequest.cpp \
    createmounttargetresponse.cpp \
    createtagsrequest.cpp \
    createtagsresponse.cpp \
    deletefilesystemrequest.cpp \
    deletefilesystemresponse.cpp \
    deletemounttargetrequest.cpp \
    deletemounttargetresponse.cpp \
    deletetagsrequest.cpp \
    deletetagsresponse.cpp \
    describefilesystemsrequest.cpp \
    describefilesystemsresponse.cpp \
    describemounttargetsecuritygroupsrequest.cpp \
    describemounttargetsecuritygroupsresponse.cpp \
    describemounttargetsrequest.cpp \
    describemounttargetsresponse.cpp \
    describetagsrequest.cpp \
    describetagsresponse.cpp \
    efsclient.cpp \
    efsrequest.cpp \
    efsresponse.cpp \
    modifymounttargetsecuritygroupsrequest.cpp \
    modifymounttargetsecuritygroupsresponse.cpp \
    updatefilesystemrequest.cpp \
    updatefilesystemresponse.cpp \

win32:CONFIG += skip_target_version_ext
