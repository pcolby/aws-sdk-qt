/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QtTest/QtTest>

#include "core/testawsabstractcredentials.h"
#include "core/testawsabstractsignature.h"
#include "core/testawsanonymouscredentials.h"
#include "core/testawsbasiccredentials.h"
#include "core/testawsendpoint.h"
#include "core/testawsregion.h"
#include "core/testawssignaturev1.h"
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
    TEST(TestAwsSignatureV1)
    TEST(TestAwsSignatureV2)
    TEST(TestAwsSignatureV4)
    return 0;
}

