#include "testawsanonymouscredentials.h"

#include "../../src/core/awsanonymouscredentials.h"

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
    QVERIFY(!credentials.refresh());
}
