#include <QtTest/QtTest>

//#include "TestXxx.h"

int main(int argc, char *argv[]) {
    #define TEST(Class) \
    { \
        Class object; \
        const int result = QTest::qExec(&object, argc, argv); \
        if (result) exit(result); \
    }

    // Call the above test macro on all test classes here.
    //TEST(TestAxx)

    return 0;
}

