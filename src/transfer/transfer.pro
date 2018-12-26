include(../../common.pri)

TARGET = QtAwsTransfer
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createserverrequest.h \
    createserverrequest_p.h \
    createserverresponse.h \
    createserverresponse_p.h \
    createuserrequest.h \
    createuserrequest_p.h \
    createuserresponse.h \
    createuserresponse_p.h \
    deleteserverrequest.h \
    deleteserverrequest_p.h \
    deleteserverresponse.h \
    deleteserverresponse_p.h \
    deletesshpublickeyrequest.h \
    deletesshpublickeyrequest_p.h \
    deletesshpublickeyresponse.h \
    deletesshpublickeyresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    describeserverrequest.h \
    describeserverrequest_p.h \
    describeserverresponse.h \
    describeserverresponse_p.h \
    describeuserrequest.h \
    describeuserrequest_p.h \
    describeuserresponse.h \
    describeuserresponse_p.h \
    importsshpublickeyrequest.h \
    importsshpublickeyrequest_p.h \
    importsshpublickeyresponse.h \
    importsshpublickeyresponse_p.h \
    listserversrequest.h \
    listserversrequest_p.h \
    listserversresponse.h \
    listserversresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    startserverrequest.h \
    startserverrequest_p.h \
    startserverresponse.h \
    startserverresponse_p.h \
    stopserverrequest.h \
    stopserverrequest_p.h \
    stopserverresponse.h \
    stopserverresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    testidentityproviderrequest.h \
    testidentityproviderrequest_p.h \
    testidentityproviderresponse.h \
    testidentityproviderresponse_p.h \
    transferclient.h \
    transferclient_p.h \
    transferrequest.h \
    transferrequest_p.h \
    transferresponse.h \
    transferresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateserverrequest.h \
    updateserverrequest_p.h \
    updateserverresponse.h \
    updateserverresponse_p.h \
    updateuserrequest.h \
    updateuserrequest_p.h \
    updateuserresponse.h \
    updateuserresponse_p.h \

SOURCES += \
    createserverrequest.cpp \
    createserverresponse.cpp \
    createuserrequest.cpp \
    createuserresponse.cpp \
    deleteserverrequest.cpp \
    deleteserverresponse.cpp \
    deletesshpublickeyrequest.cpp \
    deletesshpublickeyresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    describeserverrequest.cpp \
    describeserverresponse.cpp \
    describeuserrequest.cpp \
    describeuserresponse.cpp \
    importsshpublickeyrequest.cpp \
    importsshpublickeyresponse.cpp \
    listserversrequest.cpp \
    listserversresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    startserverrequest.cpp \
    startserverresponse.cpp \
    stopserverrequest.cpp \
    stopserverresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    testidentityproviderrequest.cpp \
    testidentityproviderresponse.cpp \
    transferclient.cpp \
    transferrequest.cpp \
    transferresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateserverrequest.cpp \
    updateserverresponse.cpp \
    updateuserrequest.cpp \
    updateuserresponse.cpp \

win32:CONFIG += skip_target_version_ext
