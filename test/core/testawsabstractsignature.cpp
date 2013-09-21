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
    //QBENCHMARK {
        MockSignature signature;
    //}
}

void TestAwsAbstractSignature::canonicalPath_data() {
    QTest::addColumn<QUrl>("url");
    QTest::addColumn<QString>("path");

    QTest::newRow("invalid"     ) << QUrl() << QString::fromLatin1("/");
    QTest::newRow("none"        ) << QUrl(QLatin1String("http://example.com"))             << QString::fromLatin1("/");
    QTest::newRow("/"           ) << QUrl(QLatin1String("http://example.com/"))            << QString::fromLatin1("/");
    QTest::newRow("/123"        ) << QUrl(QLatin1String("http://example.com/123"))         << QString::fromLatin1("/123");
    QTest::newRow("/123/"       ) << QUrl(QLatin1String("http://example.com/123/"))        << QString::fromLatin1("/123/");
    QTest::newRow("/foo/bar/baz") << QUrl(QLatin1String("http://example.com/foo/bar/baz")) << QString::fromLatin1("/foo/bar/baz");
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
    // Amazon is ambiguous on this, but it seems that V4 used the same canonical query format as V2.
    QTest::newRow("lasticmapreduce")
        << QUrlQuery(QLatin1String(
            "Action=DescribeJobFlows"
            "&Version=2009-03-31"
            "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&SignatureVersion=2"
            "&SignatureMethod=HmacSHA256"
            "&Timestamp=2011-10-03T15%3A19%3A30"))
        << QByteArray(
            "AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&Action=DescribeJobFlows"
            "&SignatureMethod=HmacSHA256"
            "&SignatureVersion=2"
            "&Timestamp=2011-10-03T15%3A19%3A30"
            "&Version=2009-03-31");
}

void TestAwsAbstractSignature::canonicalQuery() {
    QFETCH(QUrlQuery, query);
    QFETCH(QByteArray, expected);
    const MockSignature signature;
    QCOMPARE(QString::fromUtf8(signature.canonicalQuery(query)), QString::fromUtf8(expected));
    QCOMPARE(signature.canonicalQuery(query), expected);
}

void TestAwsAbstractSignature::httpMethod_data() {
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QString>("expected");
    QTest::newRow("custom") << QNetworkAccessManager::CustomOperation << QString();
    #define NEW_ROW(op) QTest::newRow(#op) << QNetworkAccessManager::op##Operation << QString::fromLatin1(#op).toUpper()
    NEW_ROW(Delete);
    NEW_ROW(Head);
    NEW_ROW(Get);
    NEW_ROW(Post);
    NEW_ROW(Put);
    #undef NEW_ROW
}

void TestAwsAbstractSignature::httpMethod() {
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QString, expected);
    const MockSignature signature;
    QCOMPARE(signature.httpMethod(operation), expected);
}
