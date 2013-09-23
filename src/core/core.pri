HEADERS += \
        awsabstractcredentials.h \
        awsabstractsignature.h \
        awsanonymouscredentials.h \
        awsbasiccredentials.h \
        awsbasiccredentials_p.h \
        awsendpoint.h \
        awsendpoint_p.h \
        awsregion.h \
        awsregion_p.h \
        awssignaturev2.h \
        awssignaturev2_p.h \
        awssignaturev3.h \
        awssignaturev3_p.h \
        awssignaturev4.h \
        awssignaturev4_p.h \
        qtawsglobal.h

SOURCES += \
        awsabstractcredentials.cpp \
        awsabstractsignature.cpp \
        awsanonymouscredentials.cpp \
        awsbasiccredentials.cpp \
        awsendpoint.cpp \
        awsregion.cpp \
        awssignaturev2.cpp \
        awssignaturev3.cpp \
        awssignaturev4.cpp \

VPATH += $$PWD

# The QMessageAuthenticationCode was not added until Qt 5.1, but apart from this class,
# we should be able to work with Qt 5.0, so for for Qt 5.0, allow the use to download the
# QMessageAuthenticationCode class code and dependencies manually.
contains(QT_VERSION, ^5\\.0\\..*) {
    message(Qt $$QT_VERSION detected - attempting to use local QMessageAuthenticationCode class)
    HEADERS += qmessageauthenticationcode.h sha.h sha-private.h
    SOURCES += qmessageauthenticationcode.cpp sha224-256.c sha384-512.c
}
