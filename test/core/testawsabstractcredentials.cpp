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
    QVERIFY(credentials.expiration().isNull());

    MockRefreshableCredentials refreshableCredentials;
    QVERIFY(refreshableCredentials.expiration().isNull());
}

void TestAwsAbstractCredentials::isExpired() {
    MockCredentials credentials;
    QVERIFY(!credentials.isExpired());

    MockRefreshableCredentials refreshableCredentials;
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
    QVERIFY(!credentials.refresh());

    MockRefreshableCredentials refreshableCredentials;
    QVERIFY(!refreshableCredentials.refresh());
}
