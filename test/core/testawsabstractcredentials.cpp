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

#include "testawsabstractcredentials.h"

#include "../../src/core/awsabstractcredentials.h"

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

void TestAwsAbstractCredentials::expiration() {
    MockCredentials credentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration should not be invoked on non-refreshable objects ");
    QVERIFY(credentials.expiration().isNull());

    MockRefreshableCredentials refreshableCredentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration must be implemented by refreshable derived classes ");
    QVERIFY(refreshableCredentials.expiration().isNull());
}

void TestAwsAbstractCredentials::isExpired() {
    MockCredentials credentials;
    QVERIFY(!credentials.isExpired());

    MockRefreshableCredentials refreshableCredentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration must be implemented by refreshable derived classes ");
    QVERIFY(!refreshableCredentials.isExpired());
}

void TestAwsAbstractCredentials::isRefreshable() {
    MockCredentials credentials;
    QVERIFY(!credentials.isRefreshable());

    MockRefreshableCredentials refreshableCredentials;
    QVERIFY(refreshableCredentials.isRefreshable());
}

void TestAwsAbstractCredentials::refresh() {
    MockCredentials credentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: refresh should not be invoked on non-refreshable objects ");
    QVERIFY(!credentials.refresh());

    MockRefreshableCredentials refreshableCredentials;
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: refresh must be implemented by refreshable derived classes ");
    QVERIFY(!refreshableCredentials.refresh());
}
