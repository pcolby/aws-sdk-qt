#include "testawsbasiccredentials.h"

#include "../../src/core/awsbasiccredentials.h"

void TestAwsBasicCredentials::construct_data()
{
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QString>("token");

    QTest::newRow("1") << ""  << ""  << "";
    QTest::newRow("2") << "a" << ""  << "";
    QTest::newRow("3") << ""  << "b" << "";
    QTest::newRow("4") << ""  << ""  << "c";
    QTest::newRow("5") << "d" << "e" << "";
    QTest::newRow("6") << ""  << "f" << "g";
    QTest::newRow("7") << "h" << "i" << "j";

    QTest::newRow("leading-spaces")  << " k"  << "  l" << "   m";
    QTest::newRow("trailing-spaces") << "n  " << "o  " << "p ";

    QTest::newRow("uuids") << "2422afd6-089b-11e3-8a83-080027989a56"
                           << "2a2f7f30-089b-11e3-a1ec-080027989a56"
                           << "2f510380-089b-11e3-bd81-080027989a56";
}

void TestAwsBasicCredentials::construct()
{
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);

    {   // Test the constructor overload that accepts a security token.
        const AwsBasicCredentials credentials(accessKeyId, secretKey, token);
        QCOMPARE(credentials.accessKeyId(), accessKeyId);
        QCOMPARE(credentials.secretKey(), secretKey);
        QCOMPARE(credentials.token(), token);
    }

    {   // Test the constructor overload that does not accept a security token.
        const AwsBasicCredentials credentials(accessKeyId, secretKey);
        QCOMPARE(credentials.accessKeyId(), accessKeyId);
        QCOMPARE(credentials.secretKey(), secretKey);
        QVERIFY(credentials.token().isNull());
    }
}

void TestAwsBasicCredentials::expiration()
{
    // Basic credentials never expire.
    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: expiration should not be invoked on non-refreshable objects ");
    QVERIFY(credentials.expiration().isNull());
}

void TestAwsBasicCredentials::isExpired()
{
    // Basic credentials never expire.
    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    QVERIFY(!credentials.isExpired());
}

void TestAwsBasicCredentials::isRefreshable()
{
    // Basic credentials are not refreshable.
    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    QVERIFY(!credentials.isRefreshable());
}

void TestAwsBasicCredentials::refresh()
{
    // Basic credentials are not refreshable.
    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    QTest::ignoreMessage(QtWarningMsg, "AwsAbstractCredentials: refresh should not be invoked on non-refreshable objects ");
    QVERIFY(!credentials.refresh());
}

void TestAwsBasicCredentials::setAccessKeyId_data()
{
    QTest::addColumn<QString>("accessKeyId");

    QTest::newRow("<empty>") << "";
    QTest::newRow("a") << "a";
    QTest::newRow("abc") << "abc";
    QTest::newRow("for bar baz") << "foo bar baz";
    QTest::newRow("ac9315e6-089a-11e3-953d-080027989a56") << "ac9315e6-089a-11e3-953d-080027989a56";
}

void TestAwsBasicCredentials::setAccessKeyId()
{
    QFETCH(QString, accessKeyId);

    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    const QString secretKey = credentials.secretKey();
    const QString token = credentials.token();
    credentials.setAccessKeyId(accessKeyId);

    QCOMPARE(credentials.accessKeyId(), accessKeyId);
    QCOMPARE(credentials.secretKey(), secretKey);
    QCOMPARE(credentials.token(), token);
}

void TestAwsBasicCredentials::setSecretKey_data()
{
    QTest::addColumn<QString>("secretKey");

    QTest::newRow("<empty>") << "";
    QTest::newRow("a") << "a";
    QTest::newRow("abc") << "abc";
    QTest::newRow("for bar baz") << "foo bar baz";
    QTest::newRow("ac9315e6-089a-11e3-953d-080027989a56") << "ac9315e6-089a-11e3-953d-080027989a56";
}

void TestAwsBasicCredentials::setSecretKey()
{
    QFETCH(QString, secretKey);

    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    const QString accessKeyId = credentials.accessKeyId();
    const QString token = credentials.token();
    credentials.setSecretKey(secretKey);

    QCOMPARE(credentials.accessKeyId(), accessKeyId);
    QCOMPARE(credentials.secretKey(), secretKey);
    QCOMPARE(credentials.token(), token);
}

void TestAwsBasicCredentials::setToken_data()
{
    QTest::addColumn<QString>("token");

    QTest::newRow("<empty>") << "";
    QTest::newRow("a") << "a";
    QTest::newRow("abc") << "abc";
    QTest::newRow("for bar baz") << "foo bar baz";
    QTest::newRow("ac9315e6-089a-11e3-953d-080027989a56") << "ac9315e6-089a-11e3-953d-080027989a56";
}

void TestAwsBasicCredentials::setToken()
{
    QFETCH(QString, token);

    AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
    const QString accessKeyId = credentials.accessKeyId();
    const QString secretKey = credentials.secretKey();
    credentials.setToken(token);

    QCOMPARE(credentials.accessKeyId(), accessKeyId);
    QCOMPARE(credentials.secretKey(), secretKey);
    QCOMPARE(credentials.token(), token);
}
