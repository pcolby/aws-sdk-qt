// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testawsabstractcredentials.h"

#include "core/awsabstractcredentials.h"

namespace TestAwsAbstractCredentials_Mocks {

// Bare minimum concrete mock class.
class MockCredentials : public AwsAbstractCredentials {
public:
    virtual QString accessKeyId() const { return QString(); }
    virtual QString secretKey() const { return QString(); }
    virtual QString token() const { return QString(); }
};

// A mock class that claims to be refreshable, but makes no effort to be so.
class MockRefreshableCredentials : public MockCredentials {
public:
    virtual bool isRefreshable() const { return true; } // The ruse.
};

} using namespace TestAwsAbstractCredentials_Mocks;

void TestAwsAbstractCredentials::expiration()
{
    MockCredentials credentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration should not be invoked on non-refreshable objects ");
    QVERIFY(credentials.expiration().isNull());

    MockRefreshableCredentials refreshableCredentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration must be implemented by refreshable derived classes ");
    QVERIFY(refreshableCredentials.expiration().isNull());
}

void TestAwsAbstractCredentials::isExpired()
{
    MockCredentials credentials;
    QVERIFY(!credentials.isExpired());

    MockRefreshableCredentials refreshableCredentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration must be implemented by refreshable derived classes ");
    QVERIFY(!refreshableCredentials.isExpired());
}

void TestAwsAbstractCredentials::isRefreshable()
{
    MockCredentials credentials;
    QVERIFY(!credentials.isRefreshable());

    MockRefreshableCredentials refreshableCredentials;
    QVERIFY(refreshableCredentials.isRefreshable());
}

void TestAwsAbstractCredentials::refresh()
{
    MockCredentials credentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: refresh should not be invoked on non-refreshable objects ");
    QVERIFY(!credentials.refresh());

    MockRefreshableCredentials refreshableCredentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: refresh must be implemented by refreshable derived classes ");
    QVERIFY(!refreshableCredentials.refresh());
}
