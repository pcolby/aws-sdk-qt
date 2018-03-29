include(../../common.pri)

TARGET = snowball
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cancelclusterrequest.h \
    cancelclusterrequest_p.h \
    cancelclusterresponse.h \
    cancelclusterresponse_p.h \
    canceljobrequest.h \
    canceljobrequest_p.h \
    canceljobresponse.h \
    canceljobresponse_p.h \
    createaddressrequest.h \
    createaddressrequest_p.h \
    createaddressresponse.h \
    createaddressresponse_p.h \
    createclusterrequest.h \
    createclusterrequest_p.h \
    createclusterresponse.h \
    createclusterresponse_p.h \
    createjobrequest.h \
    createjobrequest_p.h \
    createjobresponse.h \
    createjobresponse_p.h \
    describeaddressesrequest.h \
    describeaddressesrequest_p.h \
    describeaddressesresponse.h \
    describeaddressesresponse_p.h \
    describeaddressrequest.h \
    describeaddressrequest_p.h \
    describeaddressresponse.h \
    describeaddressresponse_p.h \
    describeclusterrequest.h \
    describeclusterrequest_p.h \
    describeclusterresponse.h \
    describeclusterresponse_p.h \
    describejobrequest.h \
    describejobrequest_p.h \
    describejobresponse.h \
    describejobresponse_p.h \
    getjobmanifestrequest.h \
    getjobmanifestrequest_p.h \
    getjobmanifestresponse.h \
    getjobmanifestresponse_p.h \
    getjobunlockcoderequest.h \
    getjobunlockcoderequest_p.h \
    getjobunlockcoderesponse.h \
    getjobunlockcoderesponse_p.h \
    getsnowballusagerequest.h \
    getsnowballusagerequest_p.h \
    getsnowballusageresponse.h \
    getsnowballusageresponse_p.h \
    listclusterjobsrequest.h \
    listclusterjobsrequest_p.h \
    listclusterjobsresponse.h \
    listclusterjobsresponse_p.h \
    listclustersrequest.h \
    listclustersrequest_p.h \
    listclustersresponse.h \
    listclustersresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    snowballclient.h \
    snowballclient_p.h \
    snowballrequest.h \
    snowballrequest_p.h \
    snowballresponse.h \
    snowballresponse_p.h \
    updateclusterrequest.h \
    updateclusterrequest_p.h \
    updateclusterresponse.h \
    updateclusterresponse_p.h \
    updatejobrequest.h \
    updatejobrequest_p.h \
    updatejobresponse.h \
    updatejobresponse_p.h \

SOURCES += \
    cancelclusterrequest.cpp \
    cancelclusterresponse.cpp \
    canceljobrequest.cpp \
    canceljobresponse.cpp \
    createaddressrequest.cpp \
    createaddressresponse.cpp \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    createjobrequest.cpp \
    createjobresponse.cpp \
    describeaddressesrequest.cpp \
    describeaddressesresponse.cpp \
    describeaddressrequest.cpp \
    describeaddressresponse.cpp \
    describeclusterrequest.cpp \
    describeclusterresponse.cpp \
    describejobrequest.cpp \
    describejobresponse.cpp \
    getjobmanifestrequest.cpp \
    getjobmanifestresponse.cpp \
    getjobunlockcoderequest.cpp \
    getjobunlockcoderesponse.cpp \
    getsnowballusagerequest.cpp \
    getsnowballusageresponse.cpp \
    listclusterjobsrequest.cpp \
    listclusterjobsresponse.cpp \
    listclustersrequest.cpp \
    listclustersresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    snowballclient.cpp \
    snowballrequest.cpp \
    snowballresponse.cpp \
    updateclusterrequest.cpp \
    updateclusterresponse.cpp \
    updatejobrequest.cpp \
    updatejobresponse.cpp \

win32:CONFIG += skip_target_version_ext
