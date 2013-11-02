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

#include "testawssignaturev2.h"

#include "../../src/core/awsbasiccredentials.h"
#include "../../src/core/awssignaturev2.h"
#include "../../src/core/awssignaturev2_p.h"

#include <QCryptographicHash>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrlQuery>

Q_DECLARE_METATYPE(QCryptographicHash::Algorithm)
Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(QUrlQuery)

void TestAwsSignatureV2::sign_data()
{
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

void TestAwsSignatureV2::sign()
{
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

void TestAwsSignatureV2::version()
{
    AwsSignatureV2 signature;
    QCOMPARE(signature.version(), 2);
}

void TestAwsSignatureV2::adornRequest_data()
{
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QCryptographicHash::Algorithm>("algorithm");
    QTest::addColumn<QString>("signatureMethod");

    QTest::newRow("empty:sha1")
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/")))
        << QString::fromLatin1("access-key-1")
        << QCryptographicHash::Sha1
        << QString::fromLatin1("HmacSHA1");

    QTest::newRow("empty:sha256")
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/")))
        << QString::fromLatin1("access-key-2")
        << QCryptographicHash::Sha256
        << QString::fromLatin1("HmacSHA256");
}

void TestAwsSignatureV2::adornRequest()
{
    QFETCH(QNetworkRequest, request);
    QFETCH(QString, accessKeyId);
    QFETCH(QCryptographicHash::Algorithm, algorithm);
    QFETCH(QString, signatureMethod);

    const AwsBasicCredentials credentials(accessKeyId, QString());

    AwsSignatureV2 signature(algorithm);
    signature.d_func()->adornRequest(request, credentials);
    const QUrlQuery query(request.url());

    QVERIFY(query.hasQueryItem(QLatin1String("AWSAccessKeyId")));
    QVERIFY(query.hasQueryItem(QLatin1String("SignatureMethod")));
    QVERIFY(query.hasQueryItem(QLatin1String("SignatureVersion")));
    QVERIFY(query.hasQueryItem(QLatin1String("Timestamp")));

    QCOMPARE(query.queryItemValue(QLatin1String("AWSAccessKeyId")), accessKeyId);
    QCOMPARE(query.queryItemValue(QLatin1String("SignatureMethod")), signatureMethod);
    QCOMPARE(query.queryItemValue(QLatin1String("SignatureVersion")), QString::fromLatin1("2"));
}

void TestAwsSignatureV2::canonicalRequest_data()
{
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

void TestAwsSignatureV2::canonicalRequest()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QUrl, url);
    QFETCH(QByteArray, expected);
    AwsSignatureV2 signature;
    const QByteArray request = signature.d_func()->canonicalRequest(operation, url);
    QCOMPARE(QString::fromUtf8(request), QString::fromUtf8(expected));
    QCOMPARE(request, expected);
}

void TestAwsSignatureV2::signatureMethod_data()
{
    QTest::addColumn<QCryptographicHash::Algorithm>("algorithm");
    QTest::addColumn<QByteArray>("signatureMethod");

    // Valid algorithms.
    QTest::newRow("empty:sha1")   << QCryptographicHash::Sha1   << QByteArray("HmacSHA1");
    QTest::newRow("empty:sha256") << QCryptographicHash::Sha256 << QByteArray("HmacSHA256");

    QTest::newRow("MD4")    << QCryptographicHash::Md4    << QByteArray("invalid-algorithm");
    QTest::newRow("MD5")    << QCryptographicHash::Md5    << QByteArray("invalid-algorithm");
    QTest::newRow("SHA1")   << QCryptographicHash::Sha1   << QByteArray("HmacSHA1");
    QTest::newRow("SHA224") << QCryptographicHash::Sha224 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA256") << QCryptographicHash::Sha256 << QByteArray("HmacSHA256");
    QTest::newRow("SHA384") << QCryptographicHash::Sha384 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA512") << QCryptographicHash::Sha512 << QByteArray("invalid-algorithm");

    // The following enum values were added in Qt5.1.
#if QT_VERSION >= QT_VERSION_CHECK(5, 1, 0)
    QTest::newRow("SHA3_224") << QCryptographicHash::Sha3_224 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA3_256") << QCryptographicHash::Sha3_256 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA3_384") << QCryptographicHash::Sha3_384 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA3_512") << QCryptographicHash::Sha3_512 << QByteArray("invalid-algorithm");
#endif

}

void TestAwsSignatureV2::signatureMethod()
{
    QFETCH(QCryptographicHash::Algorithm, algorithm);
    QFETCH(QByteArray, signatureMethod);

    AwsSignatureV2 signature(algorithm);

    QCOMPARE(signature.d_func()->signatureMethod(algorithm), signatureMethod);
}
