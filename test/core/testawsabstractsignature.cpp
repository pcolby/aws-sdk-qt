#include "testawsabstractsignature.h"

#include "../../src/core/awsabstractsignature.h"
#include "../../src/core/awsbasiccredentials.h"

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(QUrlQuery)

// Bare minimum concrete mock class.
class MockSignature : public AwsAbstractSignature {

public:
    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data) const
    {
        Q_UNUSED(operation)
        Q_UNUSED(request)
        Q_UNUSED(credentials)
        Q_UNUSED(data)
    }

};

void TestAwsAbstractSignature::construct() {
    QBENCHMARK {
        MockSignature signature;
    }
}

void TestAwsAbstractSignature::canonicalPath_data() {
    QTest::addColumn<QUrl>("url");
    QTest::addColumn<QString>("path");

    QTest::newRow("invalid"     ) << QUrl() << QString("/");
    QTest::newRow("none"        ) << QUrl("http://example.com")             << QString("/");
    QTest::newRow("/"           ) << QUrl("http://example.com/")            << QString("/");
    QTest::newRow("/123"        ) << QUrl("http://example.com/123")         << QString("/123");
    QTest::newRow("/123/"       ) << QUrl("http://example.com/123/")        << QString("/123/");
    QTest::newRow("/foo/bar/baz") << QUrl("http://example.com/foo/bar/baz") << QString("/foo/bar/baz");
}

void TestAwsAbstractSignature::canonicalPath() {
    QFETCH(QUrl, url);
    QFETCH(QString, path);
    const MockSignature signature;
    QCOMPARE(signature.canonicalPath(url), path);
}

void TestAwsAbstractSignature::canonicalQuery_data() {
    QTest::addColumn<QUrlQuery>("query");
    QTest::addColumn<QByteArray>("expected");

    // Official example from http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
    QTest::newRow("lasticmapreduce")
        << QUrlQuery(
            "Action=DescribeJobFlows"
            "&Version=2009-03-31"
            "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&SignatureVersion=2"
            "&SignatureMethod=HmacSHA256"
            "&Timestamp=2011-10-03T15%3A19%3A30")
        << QByteArray(
            "AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&Action=DescribeJobFlows"
            "&SignatureMethod=HmacSHA256"
            "&SignatureVersion=2"
            "&Timestamp=2011-10-03T15%3A19%3A30"
            "&Version=2009-03-31");

    /// @todo Add V4 example?
}

void TestAwsAbstractSignature::canonicalQuery() {
    QFETCH(QUrlQuery, query);
    QFETCH(QByteArray, expected);
    const MockSignature signature;
    QCOMPARE(QString::fromUtf8(signature.canonicalQuery(query)), QString::fromUtf8(expected));
    QCOMPARE(signature.canonicalQuery(query), expected);
}
