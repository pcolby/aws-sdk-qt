VERSION = 0.1.0
TOPDIR = $$PWD

# Enable all warnings for all targets.
CONFIG += warn_on

# Treat warnings as errors.
win32:QMAKE_CXXFLAGS_WARN_ON += /WX
else: QMAKE_CXXFLAGS_WARN_ON += -Werror
