include(../../common.pri)

TARGET = QtAwsChime
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchsuspenduserrequest.h \
    batchsuspenduserrequest_p.h \
    batchsuspenduserresponse.h \
    batchsuspenduserresponse_p.h \
    batchunsuspenduserrequest.h \
    batchunsuspenduserrequest_p.h \
    batchunsuspenduserresponse.h \
    batchunsuspenduserresponse_p.h \
    batchupdateuserrequest.h \
    batchupdateuserrequest_p.h \
    batchupdateuserresponse.h \
    batchupdateuserresponse_p.h \
    chimeclient.h \
    chimeclient_p.h \
    chimerequest.h \
    chimerequest_p.h \
    chimeresponse.h \
    chimeresponse_p.h \
    createaccountrequest.h \
    createaccountrequest_p.h \
    createaccountresponse.h \
    createaccountresponse_p.h \
    deleteaccountrequest.h \
    deleteaccountrequest_p.h \
    deleteaccountresponse.h \
    deleteaccountresponse_p.h \
    getaccountrequest.h \
    getaccountrequest_p.h \
    getaccountresponse.h \
    getaccountresponse_p.h \
    getaccountsettingsrequest.h \
    getaccountsettingsrequest_p.h \
    getaccountsettingsresponse.h \
    getaccountsettingsresponse_p.h \
    getuserrequest.h \
    getuserrequest_p.h \
    getuserresponse.h \
    getuserresponse_p.h \
    inviteusersrequest.h \
    inviteusersrequest_p.h \
    inviteusersresponse.h \
    inviteusersresponse_p.h \
    listaccountsrequest.h \
    listaccountsrequest_p.h \
    listaccountsresponse.h \
    listaccountsresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    logoutuserrequest.h \
    logoutuserrequest_p.h \
    logoutuserresponse.h \
    logoutuserresponse_p.h \
    resetpersonalpinrequest.h \
    resetpersonalpinrequest_p.h \
    resetpersonalpinresponse.h \
    resetpersonalpinresponse_p.h \
    updateaccountrequest.h \
    updateaccountrequest_p.h \
    updateaccountresponse.h \
    updateaccountresponse_p.h \
    updateaccountsettingsrequest.h \
    updateaccountsettingsrequest_p.h \
    updateaccountsettingsresponse.h \
    updateaccountsettingsresponse_p.h \
    updateuserrequest.h \
    updateuserrequest_p.h \
    updateuserresponse.h \
    updateuserresponse_p.h \

SOURCES += \
    batchsuspenduserrequest.cpp \
    batchsuspenduserresponse.cpp \
    batchunsuspenduserrequest.cpp \
    batchunsuspenduserresponse.cpp \
    batchupdateuserrequest.cpp \
    batchupdateuserresponse.cpp \
    chimeclient.cpp \
    chimerequest.cpp \
    chimeresponse.cpp \
    createaccountrequest.cpp \
    createaccountresponse.cpp \
    deleteaccountrequest.cpp \
    deleteaccountresponse.cpp \
    getaccountrequest.cpp \
    getaccountresponse.cpp \
    getaccountsettingsrequest.cpp \
    getaccountsettingsresponse.cpp \
    getuserrequest.cpp \
    getuserresponse.cpp \
    inviteusersrequest.cpp \
    inviteusersresponse.cpp \
    listaccountsrequest.cpp \
    listaccountsresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    logoutuserrequest.cpp \
    logoutuserresponse.cpp \
    resetpersonalpinrequest.cpp \
    resetpersonalpinresponse.cpp \
    updateaccountrequest.cpp \
    updateaccountresponse.cpp \
    updateaccountsettingsrequest.cpp \
    updateaccountsettingsresponse.cpp \
    updateuserrequest.cpp \
    updateuserresponse.cpp \

win32:CONFIG += skip_target_version_ext
