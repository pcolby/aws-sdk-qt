#include "testawssignaturev2.h"

#include "../../src/core/awsbasiccredentials.h"
#include "../../src/core/awssignaturev2.h"
#include "../../src/core/awssignaturev2_p.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(QUrlQuery)

void TestAwsSignatureV2::sign_data() {
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QByteArray>("data");
    QTest::addColumn<QNetworkRequest>("expected");

    { // Official example from http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
        QTest::newRow("elasticmapreduce")
            << QNetworkAccessManager::GetOperation
            << QNetworkRequest(QUrl(QLatin1String(
                "https://elasticmapreduce.amazonaws.com?Action=DescribeJobFlows"
                "&Version=2009-03-31"
                "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
                "&SignatureVersion=2"
                "&SignatureMethod=HmacSHA256"
                "&Timestamp=2011-10-03T15%3A19%3A30")))
            << QString::fromLatin1("AKIAIOSFODNN7EXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG/bPxRfiCYEXAMPLEKEY")
            << QByteArray()
            << QNetworkRequest(QUrl(QLatin1String(
                "https://elasticmapreduce.amazonaws.com?Action=DescribeJobFlows"
                "&Version=2009-03-31"
                "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
                "&SignatureVersion=2"
                "&SignatureMethod=HmacSHA256"
                "&Timestamp=2011-10-03T15%3A19%3A30"
                "&Signature=i91nKc4PWAt0JJIdXwz9HxZCJDdiy6cf%2FMj6vPxyYIs%3D")));
    }

}

void TestAwsSignatureV2::sign() {
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QByteArray, data);
    QFETCH(QNetworkRequest, expected);

    const AwsBasicCredentials credentials(accessKeyId, secretKey);

    AwsSignatureV2 signature;
    signature.sign(credentials, operation, request, data);
    QCOMPARE(request.url( ), expected.url());
    QCOMPARE(request, expected);

    /*QBENCHMARK {
        QFETCH(QNetworkRequest, request);
        signature.sign(credentials, operation, request, data);
    }*/
}

void TestAwsSignatureV2::canonicalRequest_data() {
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QUrl>("url");
    QTest::addColumn<QByteArray>("expected");

    // Official example from http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
    QTest::newRow("lasticmapreduce")
        << QNetworkAccessManager::GetOperation
        << QUrl(QLatin1String(
            "https://elasticmapreduce.amazonaws.com?Action=DescribeJobFlows"
            "&Version=2009-03-31"
            "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&SignatureVersion=2"
            "&SignatureMethod=HmacSHA256"
            "&Timestamp=2011-10-03T15%3A19%3A30"))
        << QByteArray(
            "GET\n"
            "elasticmapreduce.amazonaws.com\n"
            "/\n"
            "AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&Action=DescribeJobFlows&SignatureMethod=HmacSHA256&SignatureVersion=2&Timestamp=2011-10-03T15%3A19%3A30&Version=2009-03-31");
}

void TestAwsSignatureV2::canonicalRequest() {
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QUrl, url);
    QFETCH(QByteArray, expected);
    AwsSignatureV2Private signature(NULL);
    const QByteArray request = signature.canonicalRequest(operation, url);
    QCOMPARE(QString::fromUtf8(request), QString::fromUtf8(expected));
    QCOMPARE(request, expected);
}
