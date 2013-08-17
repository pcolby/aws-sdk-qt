# Create a library.
TEMPLATE = lib
DEFINES += QTAWS_LIBRARY
CONFIG += warn_on

# Disable automatic ASCII conversions (best practice, especially for i18n support).
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

# Neaten the output directories.
CONFIG(debug,debug|release) {
    DESTDIR = debug
    MOC_DIR = debug/tmp
    OBJECTS_DIR = debug/tmp
    RCC_DIR = debug/tmp
}
CONFIG(release,debug|release) {
    DESTDIR = release
    MOC_DIR = release/tmp
    OBJECTS_DIR = release/tmp
    RCC_DIR = release/tmp
}

include(src/aws.pri)
