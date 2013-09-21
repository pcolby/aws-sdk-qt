#include <QtTest/QtTest>

#include "core/testawsabstractcredentials.h"
#include "core/testawsabstractsignature.h"
#include "core/testawsanonymouscredentials.h"
#include "core/testawsbasiccredentials.h"
#include "core/testawsendpoint.h"
#include "core/testawsregion.h"
#include "core/testawssignaturev2.h"
#include "core/testawssignaturev4.h"

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
    TEST(TestAwsAnonymousCredentials)
    TEST(TestAwsBasicCredentials)
    TEST(TestAwsEndpoint)
    TEST(TestAwsRegion)
    TEST(TestAwsSignatureV2)
    TEST(TestAwsSignatureV4)
    return 0;
}

