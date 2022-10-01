// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testawsanonymouscredentials.h"

#include "core/awsanonymouscredentials.h"

void TestAwsAnonymousCredentials::accessKeyId()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.accessKeyId().isNull());
}

void TestAwsAnonymousCredentials::secretKey()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.secretKey().isNull());
}

void TestAwsAnonymousCredentials::token()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(credentials.token().isNull());
}

void TestAwsAnonymousCredentials::expiration()
{
    const AwsAnonymousCredentials credentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration should not be invoked on non-refreshable objects ");
    QVERIFY(credentials.expiration().isNull());
}

void TestAwsAnonymousCredentials::isExpired()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(!credentials.isExpired());
}

void TestAwsAnonymousCredentials::isRefreshable()
{
    const AwsAnonymousCredentials credentials;
    QVERIFY(!credentials.isRefreshable());
}

void TestAwsAnonymousCredentials::refresh()
{
    AwsAnonymousCredentials credentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: refresh should not be invoked on non-refreshable objects ");
    QVERIFY(!credentials.refresh());
}
