include(../unit.pri)
TARGET = unit-test-all

# Enable tests of the library's internals.
DEFINES += QTAWS_ENABLE_PRIVATE_TESTS

# Include the library's source code directly (so we can enable
# accurate code coverage reporting for this test project).
include(../../../src/core/core.pri)
