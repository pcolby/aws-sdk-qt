TARGET = unit-test-api
include(../unit.pri)

# Link to the the AWS SDK for Qt library.
LIBS += -lqtaws
