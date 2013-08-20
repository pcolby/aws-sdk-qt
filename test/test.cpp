#include <QtTest/QtTest>

#include "core/testawsabstractcredentials.h"
#include "core/testawsabstractsignature.h"
#include "core/testawsbasiccredentials.h"
#include "core/testawssignaturev2.h"

int main(int argc, char *argv[]) {
    #define TEST(Class) \
    { \
        Class object; \
        const int result = QTest::qExec(&object, argc, argv); \
        if (result) exit(result); \
    }

    // Call the above test macro on all test classes here.
    TEST(TestAwsAbstractCredentials)
    TEST(TestAwsAbstractSignature)
    TEST(TestAwsBasicCredentials)
    TEST(TestAwsSignatureV2)
    return 0;
}

