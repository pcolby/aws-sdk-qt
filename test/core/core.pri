HEADERS += \
        testawsabstractcredentials.h \
        testawsabstractsignature.h \
        testawsanonymouscredentials.h \
        testawsbasiccredentials.h \
        testawsendpoint.h \
        testawsregion.h \
        testawssignaturev2.h \
        testawssignaturev4.h \

SOURCES += \
        testawsabstractcredentials.cpp \
        testawsabstractsignature.cpp \
        testawsanonymouscredentials.cpp \
        testawsbasiccredentials.cpp \
        testawsendpoint.cpp \
        testawsregion.cpp \
        testawssignaturev2.cpp \
        testawssignaturev4.cpp \

VPATH += $$PWD

include(../../src/core/core.pri)
