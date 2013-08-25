HEADERS += \
        testawsabstractcredentials.h \
        testawsabstractsignature.h \
        testawsanonymouscredentials.h \
        testawsbasiccredentials.h \
        testawssignaturev2.h \
        testawssignaturev4.h \

SOURCES += \
        testawsabstractcredentials.cpp \
        testawsabstractsignature.cpp \
        testawsanonymouscredentials.cpp \
        testawsbasiccredentials.cpp \
        testawssignaturev2.cpp \
        testawssignaturev4.cpp \

VPATH += $$PWD

include(../../src/core/core.pri)
