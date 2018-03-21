include(../../common.pri)

TARGET = es
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    createelasticsearchdomainrequest.h \
    createelasticsearchdomainrequest_p.h \
    createelasticsearchdomainresponse.h \
    createelasticsearchdomainresponse_p.h \
    deleteelasticsearchdomainrequest.h \
    deleteelasticsearchdomainrequest_p.h \
    deleteelasticsearchdomainresponse.h \
    deleteelasticsearchdomainresponse_p.h \
    deleteelasticsearchserviceroleresponse.h \
    deleteelasticsearchserviceroleresponse_p.h \
    describeelasticsearchdomainconfigrequest.h \
    describeelasticsearchdomainconfigrequest_p.h \
    describeelasticsearchdomainconfigresponse.h \
    describeelasticsearchdomainconfigresponse_p.h \
    describeelasticsearchdomainrequest.h \
    describeelasticsearchdomainrequest_p.h \
    describeelasticsearchdomainresponse.h \
    describeelasticsearchdomainresponse_p.h \
    describeelasticsearchdomainsrequest.h \
    describeelasticsearchdomainsrequest_p.h \
    describeelasticsearchdomainsresponse.h \
    describeelasticsearchdomainsresponse_p.h \
    describeelasticsearchinstancetypelimitsrequest.h \
    describeelasticsearchinstancetypelimitsrequest_p.h \
    describeelasticsearchinstancetypelimitsresponse.h \
    describeelasticsearchinstancetypelimitsresponse_p.h \
    elasticsearchserviceclient.h \
    elasticsearchserviceclient_p.h \
    elasticsearchserviceclientrequest.h \
    elasticsearchserviceclientrequest_p.h \
    elasticsearchserviceclientresponse.h \
    elasticsearchserviceclientresponse_p.h \
    listdomainnamesresponse.h \
    listdomainnamesresponse_p.h \
    listelasticsearchinstancetypesrequest.h \
    listelasticsearchinstancetypesrequest_p.h \
    listelasticsearchinstancetypesresponse.h \
    listelasticsearchinstancetypesresponse_p.h \
    listelasticsearchversionsrequest.h \
    listelasticsearchversionsrequest_p.h \
    listelasticsearchversionsresponse.h \
    listelasticsearchversionsresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    removetagsrequest.h \
    removetagsrequest_p.h \
    removetagsresponse.h \
    removetagsresponse_p.h \
    updateelasticsearchdomainconfigrequest.h \
    updateelasticsearchdomainconfigrequest_p.h \
    updateelasticsearchdomainconfigresponse.h \
    updateelasticsearchdomainconfigresponse_p.h \

SOURCES += \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    createelasticsearchdomainrequest.cpp \
    createelasticsearchdomainresponse.cpp \
    deleteelasticsearchdomainrequest.cpp \
    deleteelasticsearchdomainresponse.cpp \
    deleteelasticsearchserviceroleresponse.cpp \
    describeelasticsearchdomainconfigrequest.cpp \
    describeelasticsearchdomainconfigresponse.cpp \
    describeelasticsearchdomainrequest.cpp \
    describeelasticsearchdomainresponse.cpp \
    describeelasticsearchdomainsrequest.cpp \
    describeelasticsearchdomainsresponse.cpp \
    describeelasticsearchinstancetypelimitsrequest.cpp \
    describeelasticsearchinstancetypelimitsresponse.cpp \
    elasticsearchserviceclient.cpp \
    elasticsearchserviceclientrequest.cpp \
    elasticsearchserviceclientresponse.cpp \
    listdomainnamesresponse.cpp \
    listelasticsearchinstancetypesrequest.cpp \
    listelasticsearchinstancetypesresponse.cpp \
    listelasticsearchversionsrequest.cpp \
    listelasticsearchversionsresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    removetagsrequest.cpp \
    removetagsresponse.cpp \
    updateelasticsearchdomainconfigrequest.cpp \
    updateelasticsearchdomainconfigresponse.cpp \

win32:CONFIG += skip_target_version_ext
