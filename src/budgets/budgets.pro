include(../../common.pri)

TARGET = budgets
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    budgetsclient.h \
    budgetsclient_p.h \
    budgetsclientrequest.h \
    budgetsclientrequest_p.h \
    budgetsclientresponse.h \
    budgetsclientresponse_p.h \
    createbudgetrequest.h \
    createbudgetrequest_p.h \
    createbudgetresponse.h \
    createbudgetresponse_p.h \
    createnotificationrequest.h \
    createnotificationrequest_p.h \
    createnotificationresponse.h \
    createnotificationresponse_p.h \
    createsubscriberrequest.h \
    createsubscriberrequest_p.h \
    createsubscriberresponse.h \
    createsubscriberresponse_p.h \
    deletebudgetrequest.h \
    deletebudgetrequest_p.h \
    deletebudgetresponse.h \
    deletebudgetresponse_p.h \
    deletenotificationrequest.h \
    deletenotificationrequest_p.h \
    deletenotificationresponse.h \
    deletenotificationresponse_p.h \
    deletesubscriberrequest.h \
    deletesubscriberrequest_p.h \
    deletesubscriberresponse.h \
    deletesubscriberresponse_p.h \
    describebudgetrequest.h \
    describebudgetrequest_p.h \
    describebudgetresponse.h \
    describebudgetresponse_p.h \
    describebudgetsrequest.h \
    describebudgetsrequest_p.h \
    describebudgetsresponse.h \
    describebudgetsresponse_p.h \
    describenotificationsforbudgetrequest.h \
    describenotificationsforbudgetrequest_p.h \
    describenotificationsforbudgetresponse.h \
    describenotificationsforbudgetresponse_p.h \
    describesubscribersfornotificationrequest.h \
    describesubscribersfornotificationrequest_p.h \
    describesubscribersfornotificationresponse.h \
    describesubscribersfornotificationresponse_p.h \
    updatebudgetrequest.h \
    updatebudgetrequest_p.h \
    updatebudgetresponse.h \
    updatebudgetresponse_p.h \
    updatenotificationrequest.h \
    updatenotificationrequest_p.h \
    updatenotificationresponse.h \
    updatenotificationresponse_p.h \
    updatesubscriberrequest.h \
    updatesubscriberrequest_p.h \
    updatesubscriberresponse.h \
    updatesubscriberresponse_p.h \

SOURCES += \
    budgetsclient.cpp \
    budgetsclientrequest.cpp \
    budgetsclientresponse.cpp \
    createbudgetrequest.cpp \
    createbudgetresponse.cpp \
    createnotificationrequest.cpp \
    createnotificationresponse.cpp \
    createsubscriberrequest.cpp \
    createsubscriberresponse.cpp \
    deletebudgetrequest.cpp \
    deletebudgetresponse.cpp \
    deletenotificationrequest.cpp \
    deletenotificationresponse.cpp \
    deletesubscriberrequest.cpp \
    deletesubscriberresponse.cpp \
    describebudgetrequest.cpp \
    describebudgetresponse.cpp \
    describebudgetsrequest.cpp \
    describebudgetsresponse.cpp \
    describenotificationsforbudgetrequest.cpp \
    describenotificationsforbudgetresponse.cpp \
    describesubscribersfornotificationrequest.cpp \
    describesubscribersfornotificationresponse.cpp \
    updatebudgetrequest.cpp \
    updatebudgetresponse.cpp \
    updatenotificationrequest.cpp \
    updatenotificationresponse.cpp \
    updatesubscriberrequest.cpp \
    updatesubscriberresponse.cpp \

win32:CONFIG += skip_target_version_ext
