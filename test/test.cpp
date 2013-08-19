#include <QtTest/QtTest>

#include "core/testawsabstractcredentials.h"
#include "core/testawsbasiccredentials.h"

int main(int argc, char *argv[]) {
    #define TEST(Class) \
    { \
        Class object; \
        const int result = QTest::qExec(&object, argc, argv); \
        if (result) exit(result); \
    }

    // Call the above test macro on all test classes here.
    TEST(TestAwsAbstractCredentials)
    TEST(TestAwsBasicCredentials)

    return 0;
}

