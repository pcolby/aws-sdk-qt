include(../../common.pri)

TARGET = ecr
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchchecklayeravailabilityrequest.h \
    batchchecklayeravailabilityrequest_p.h \
    batchchecklayeravailabilityresponse.h \
    batchchecklayeravailabilityresponse_p.h \
    batchdeleteimagerequest.h \
    batchdeleteimagerequest_p.h \
    batchdeleteimageresponse.h \
    batchdeleteimageresponse_p.h \
    batchgetimagerequest.h \
    batchgetimagerequest_p.h \
    batchgetimageresponse.h \
    batchgetimageresponse_p.h \
    completelayeruploadrequest.h \
    completelayeruploadrequest_p.h \
    completelayeruploadresponse.h \
    completelayeruploadresponse_p.h \
    createrepositoryrequest.h \
    createrepositoryrequest_p.h \
    createrepositoryresponse.h \
    createrepositoryresponse_p.h \
    deletelifecyclepolicyrequest.h \
    deletelifecyclepolicyrequest_p.h \
    deletelifecyclepolicyresponse.h \
    deletelifecyclepolicyresponse_p.h \
    deleterepositorypolicyrequest.h \
    deleterepositorypolicyrequest_p.h \
    deleterepositorypolicyresponse.h \
    deleterepositorypolicyresponse_p.h \
    deleterepositoryrequest.h \
    deleterepositoryrequest_p.h \
    deleterepositoryresponse.h \
    deleterepositoryresponse_p.h \
    describeimagesrequest.h \
    describeimagesrequest_p.h \
    describeimagesresponse.h \
    describeimagesresponse_p.h \
    describerepositoriesrequest.h \
    describerepositoriesrequest_p.h \
    describerepositoriesresponse.h \
    describerepositoriesresponse_p.h \
    ecrclient.h \
    ecrclient_p.h \
    getauthorizationtokenrequest.h \
    getauthorizationtokenrequest_p.h \
    getauthorizationtokenresponse.h \
    getauthorizationtokenresponse_p.h \
    getdownloadurlforlayerrequest.h \
    getdownloadurlforlayerrequest_p.h \
    getdownloadurlforlayerresponse.h \
    getdownloadurlforlayerresponse_p.h \
    getlifecyclepolicypreviewrequest.h \
    getlifecyclepolicypreviewrequest_p.h \
    getlifecyclepolicypreviewresponse.h \
    getlifecyclepolicypreviewresponse_p.h \
    getlifecyclepolicyrequest.h \
    getlifecyclepolicyrequest_p.h \
    getlifecyclepolicyresponse.h \
    getlifecyclepolicyresponse_p.h \
    getrepositorypolicyrequest.h \
    getrepositorypolicyrequest_p.h \
    getrepositorypolicyresponse.h \
    getrepositorypolicyresponse_p.h \
    initiatelayeruploadrequest.h \
    initiatelayeruploadrequest_p.h \
    initiatelayeruploadresponse.h \
    initiatelayeruploadresponse_p.h \
    listimagesrequest.h \
    listimagesrequest_p.h \
    listimagesresponse.h \
    listimagesresponse_p.h \
    putimagerequest.h \
    putimagerequest_p.h \
    putimageresponse.h \
    putimageresponse_p.h \
    putlifecyclepolicyrequest.h \
    putlifecyclepolicyrequest_p.h \
    putlifecyclepolicyresponse.h \
    putlifecyclepolicyresponse_p.h \
    setrepositorypolicyrequest.h \
    setrepositorypolicyrequest_p.h \
    setrepositorypolicyresponse.h \
    setrepositorypolicyresponse_p.h \
    startlifecyclepolicypreviewrequest.h \
    startlifecyclepolicypreviewrequest_p.h \
    startlifecyclepolicypreviewresponse.h \
    startlifecyclepolicypreviewresponse_p.h \
    uploadlayerpartrequest.h \
    uploadlayerpartrequest_p.h \
    uploadlayerpartresponse.h \
    uploadlayerpartresponse_p.h \

SOURCES += \
    batchchecklayeravailabilityrequest.cpp \
    batchchecklayeravailabilityresponse.cpp \
    batchdeleteimagerequest.cpp \
    batchdeleteimageresponse.cpp \
    batchgetimagerequest.cpp \
    batchgetimageresponse.cpp \
    completelayeruploadrequest.cpp \
    completelayeruploadresponse.cpp \
    createrepositoryrequest.cpp \
    createrepositoryresponse.cpp \
    deletelifecyclepolicyrequest.cpp \
    deletelifecyclepolicyresponse.cpp \
    deleterepositorypolicyrequest.cpp \
    deleterepositorypolicyresponse.cpp \
    deleterepositoryrequest.cpp \
    deleterepositoryresponse.cpp \
    describeimagesrequest.cpp \
    describeimagesresponse.cpp \
    describerepositoriesrequest.cpp \
    describerepositoriesresponse.cpp \
    ecrclient.cpp \
    getauthorizationtokenrequest.cpp \
    getauthorizationtokenresponse.cpp \
    getdownloadurlforlayerrequest.cpp \
    getdownloadurlforlayerresponse.cpp \
    getlifecyclepolicypreviewrequest.cpp \
    getlifecyclepolicypreviewresponse.cpp \
    getlifecyclepolicyrequest.cpp \
    getlifecyclepolicyresponse.cpp \
    getrepositorypolicyrequest.cpp \
    getrepositorypolicyresponse.cpp \
    initiatelayeruploadrequest.cpp \
    initiatelayeruploadresponse.cpp \
    listimagesrequest.cpp \
    listimagesresponse.cpp \
    putimagerequest.cpp \
    putimageresponse.cpp \
    putlifecyclepolicyrequest.cpp \
    putlifecyclepolicyresponse.cpp \
    setrepositorypolicyrequest.cpp \
    setrepositorypolicyresponse.cpp \
    startlifecyclepolicypreviewrequest.cpp \
    startlifecyclepolicypreviewresponse.cpp \
    uploadlayerpartrequest.cpp \
    uploadlayerpartresponse.cpp \

win32:CONFIG += skip_target_version_ext
