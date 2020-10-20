/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testawssignaturev3.h"

#include "core/awsanonymouscredentials.h"
#include "core/awsbasiccredentials.h"
#include "core/awssignaturev3.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awssignaturev3_p.h"
#include "core/awsendpoint_p.h"
#endif

#include <QDebug>
#include <QDir>

Q_DECLARE_METATYPE(QCryptographicHash::Algorithm)
Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
Q_DECLARE_METATYPE(QUrlQuery)
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::algorithmDesignation_data()
{
    QTest::addColumn<QCryptographicHash::Algorithm>("algorithm");
    QTest::addColumn<QByteArray>("expected");

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

void TestAwsSignatureV3::algorithmDesignation()
{
    QFETCH(QCryptographicHash::Algorithm, algorithm);
    QFETCH(QByteArray, expected);

    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    const QByteArray designation = signature.d_func()->algorithmDesignation(algorithm);
    QCOMPARE(QString::fromUtf8(designation), QString::fromUtf8(expected));
    QCOMPARE(designation, expected);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::authorizationHeaderValue_data()
{
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QByteArray>("payload");
    QTest::addColumn<QByteArray>("expected");

    // Amazon provides no valid (ie complete) official examples for testing V3 signatures.

    // The following examples have come from the relevant official aws-sdk-php test class(es).

    // Examples from https://github.com/aws/aws-sdk-php/blob/master/tests/Aws/Tests/Common/Signature/SignatureV3Test.php
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:0")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("AWS3 AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,SignedHeaders=host;x-amz-date,Signature=JYuvj/5tDFCVa6NL6VotEwj6H7FKXieTjzJubf6cMxo=");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        request.setRawHeader("x-amz-test", "foo");
        QTest::newRow("SignatureV3Test.php:1")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::DeleteOperation
            << request
            << QByteArray()
            << QByteArray("AWS3 AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,SignedHeaders=host;x-amz-date;x-amz-test,Signature=BraQr8lRdmItH6kGoqer5GSaQ5iYhY5jnpWsHfAVEPk=");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:2")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray()
            << QByteArray("AWS3 AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,SignedHeaders=host;x-amz-date,Signature=jT4obXRVmgObtLBxqOmddPNW/eiMTFexs7EzudIAq20=");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/./foo/..")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:3")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("AWS3 AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,SignedHeaders=host;x-amz-date,Signature=JYuvj/5tDFCVa6NL6VotEwj6H7FKXieTjzJubf6cMxo=");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/path")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:4")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray("body")
            << QByteArray("AWS3 AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,SignedHeaders=host;x-amz-date,Signature=G5PSou/CPa/UzLKoIjHrxdy1xpxqYQw8TQXmmIXtbuw=");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/path?a=b&c=d&e")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:5")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray("body")
            << QByteArray("AWS3 AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,SignedHeaders=host;x-amz-date,Signature=ie+l5ggZCUqJcCp6PKN9h7RrM5LnCwr8xyMmptaHXL4=");
    }

    // Examples from https://github.com/aws/aws-sdk-php/blob/master/tests/Aws/Tests/Common/Signature/SignatureV3HttpsTest.php
    {
        // SignatureV3HttpsTest.php:0 tests the PHP test's default timestamp. Not applicable here.
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("https://example.com/")));
        request.setRawHeader("Date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3HttpsTest.php:1")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("AWS3-HTTPS AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,Signature=2xkne78+c4e7JzUxDAADvn9vECImgCcEaBDkYw3Wk+w=");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("https://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3HttpsTest.php:2")
            << QString::fromLatin1("AKIDEXAMPLE")
            << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("AWS3-HTTPS AWSAccessKeyId=AKIDEXAMPLE,Algorithm=HmacSHA256,Signature=2xkne78+c4e7JzUxDAADvn9vECImgCcEaBDkYw3Wk+w=");
    }
}

void TestAwsSignatureV3::authorizationHeaderValue()
{
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, payload);
    QFETCH(QByteArray, expected);

    const AwsBasicCredentials credentials(accessKeyId, secretKey);
    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    const QByteArray headerValue = signature.d_func()->authorizationHeaderValue(credentials, operation, request, payload);
    QCOMPARE(QString::fromUtf8(headerValue), QString::fromUtf8(expected));
    QCOMPARE(headerValue, expected);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::canonicalHeader_data()
{
    QTest::addColumn<QByteArray>("headerName");
    QTest::addColumn<QByteArray>("headerValue");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("null") << QByteArray() << QByteArray() << QByteArray(":");

    // Examples from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
    QTest::newRow("host")
        << QByteArray("host")
        << QByteArray("iam.amazonaws.com")
        << QByteArray("host:iam.amazonaws.com");

    QTest::newRow("Content-type")
        << QByteArray("Content-type")
        << QByteArray("application/x-www-form-urlencoded; charset=utf-8")
        << QByteArray("content-type:application/x-www-form-urlencoded; charset=utf-8");

    QTest::newRow("My-header1")
        << QByteArray("My-header1")
        << QByteArray("    a   b   c ")
        << QByteArray("my-header1:a b c");

    QTest::newRow("x-amz-date")
        << QByteArray("x-amz-date")
        << QByteArray("20120228T030031Z")
        // Note, this is not the same date as the example; our test is more strict ;)
        << QByteArray("x-amz-date:20120228T030031Z");

    QTest::newRow("My-Header2")
        << QByteArray("My-Header2")
        << QByteArray("    \"a   b   c\"")
        << QByteArray("my-header2:\"a   b   c\"");

    // A few general test cases.
    QTest::newRow("test1")
        << QByteArray("UPPER")
        << QByteArray("   1   2   3   \"    4   5   6   \"   7   8   9   \"   A   B   C   \"   ")
        << QByteArray("upper:1 2 3 \"    4   5   6   \" 7 8 9 \"   A   B   C   \"");
}

void TestAwsSignatureV3::canonicalHeader()
{
    QFETCH(QByteArray, headerName);
    QFETCH(QByteArray, headerValue);
    QFETCH(QByteArray, expected);

    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    const QByteArray header = signature.d_func()->canonicalHeader(headerName, headerValue);
    QCOMPARE(QString::fromUtf8(header), QString::fromUtf8(expected));
    QCOMPARE(header, expected);

    /*QBENCHMARK {
        signature.canonicalHeader(headerName, headerValue);
    }*/
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::canonicalHeaders_data()
{
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QByteArray>("expectedHeaders");
    QTest::addColumn<QByteArray>("expectedSignedHeaders");

    QTest::newRow("null") << QNetworkRequest() << QByteArray("host:\n") << QByteArray("host");

    // Amazon provides no valid (ie complete) official examples for testing V3 signatures.

    // The following examples have come from the relevant official aws-sdk-php test class(es).

    // Examples from https://github.com/aws/aws-sdk-php/blob/master/tests/Aws/Tests/Common/Signature/SignatureV3Test.php
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:0")
            << request
            << QByteArray("host:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        request.setRawHeader("x-amz-test", "foo");
        QTest::newRow("SignatureV3Test.php:1")
            << request
            << QByteArray("host:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\nx-amz-test:foo\n")
            << QByteArray("host;x-amz-date;x-amz-test");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:2")
            << request
            << QByteArray("host:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/./foo/..")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:3")
            << request
            << QByteArray("host:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/path")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:4")
            << request
            << QByteArray("host:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/path?a=b&c=d&e")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:5")
            << request
            << QByteArray("host:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n")
            << QByteArray("host;x-amz-date");
    }

    // AWS3-HTTPS does not sign headers, so examples from SignatureV3HttpsTest.php are not applicable here.
}

void TestAwsSignatureV3::canonicalHeaders()
{
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, expectedHeaders);
    QFETCH(QByteArray, expectedSignedHeaders);

    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    QByteArray signedHeaders;
    const QByteArray headers = signature.d_func()->canonicalHeaders(request, &signedHeaders);
    QCOMPARE(QString::fromUtf8(headers), QString::fromUtf8(expectedHeaders));
    QCOMPARE(headers, expectedHeaders);
    QCOMPARE(QString::fromUtf8(signedHeaders), QString::fromUtf8(expectedSignedHeaders));
    QCOMPARE(signedHeaders, expectedSignedHeaders);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::canonicalRequest_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation> ("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QByteArray>("payload");
    QTest::addColumn<QByteArray>("expectedRequest");
    QTest::addColumn<QByteArray>("expectedSignedHeaders");

    // Amazon provides no valid (ie complete) official examples for testing V3 signatures.

    // The following examples have come from the relevant official aws-sdk-php test class(es).

    // Examples from https://github.com/aws/aws-sdk-php/blob/master/tests/Aws/Tests/Common/Signature/SignatureV3Test.php
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:0")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("GET\n/\n\nhost:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        request.setRawHeader("x-amz-test", "foo");
        QTest::newRow("SignatureV3Test.php:1")
            << QNetworkAccessManager::DeleteOperation
            << request
            << QByteArray()
            << QByteArray("DELETE\n/\n\nhost:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\nx-amz-test:foo\n\n")
            << QByteArray("host;x-amz-date;x-amz-test");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:2")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray()
            << QByteArray("POST\n/\n\nhost:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/./foo/..")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:3")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("GET\n/\n\nhost:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n\n")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/path")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:4")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray("body")
            << QByteArray("POST\n/path\n\nhost:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n\nbody")
            << QByteArray("host;x-amz-date");
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("http://example.com/path?a=b&c=d&e")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3Test.php:5")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray("body")
            << QByteArray("POST\n/path\na=b&c=d&e=\nhost:example.com\nx-amz-date:Fri, 09 Sep 2011 23:36:00 GMT\n\nbody")
            << QByteArray("host;x-amz-date");
    }

    // Examples from https://github.com/aws/aws-sdk-php/blob/master/tests/Aws/Tests/Common/Signature/SignatureV3HttpsTest.php
    {
        // SignatureV3HttpsTest.php:0 tests the PHP test's default timestamp. Not applicable here.
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("https://example.com/")));
        request.setRawHeader("Date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3HttpsTest.php:1")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("Fri, 09 Sep 2011 23:36:00 GMT")
            << QByteArray(); // AWS3-HTTPS has no concept of signed headers.
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("https://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        QTest::newRow("SignatureV3HttpsTest.php:2")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("Fri, 09 Sep 2011 23:36:00 GMT")
            << QByteArray(); // AWS3-HTTPS has no concept of signed headers.
    }

    // Examples from https://github.com/aws/aws-sdk-php/blob/master/tests/Aws/Tests/Common/Signature/SignatureV3HttpsTest.php
    // but with additional nonce.
    {
        // SignatureV3HttpsTest.php:0 tests the PHP test's default timestamp. Not applicable here.
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("https://example.com/")));
        request.setRawHeader("Date", "Fri, 09 Sep 2011 23:36:00 GMT");
        request.setRawHeader("x-amz-nonce", "7f7d4264-48ed-11e3-bb77-080027989a56");
        QTest::newRow("SignatureV3HttpsTest.php:1")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("Fri, 09 Sep 2011 23:36:00 GMT7f7d4264-48ed-11e3-bb77-080027989a56")
            << QByteArray(); // AWS3-HTTPS has no concept of signed headers.
    }
    {
        QNetworkRequest request(QUrl(QLatin1String("https://example.com/")));
        request.setRawHeader("x-amz-date", "Fri, 09 Sep 2011 23:36:00 GMT");
        request.setRawHeader("x-amz-nonce", "9b094320-48ed-11e3-8fb9-080027989a56");
        QTest::newRow("SignatureV3HttpsTest.php:2")
            << QNetworkAccessManager::GetOperation
            << request
            << QByteArray()
            << QByteArray("Fri, 09 Sep 2011 23:36:00 GMT9b094320-48ed-11e3-8fb9-080027989a56")
            << QByteArray(); // AWS3-HTTPS has no concept of signed headers.
    }

}

void TestAwsSignatureV3::canonicalRequest()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, payload);
    QFETCH(QByteArray, expectedRequest);
    QFETCH(QByteArray, expectedSignedHeaders);

    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    QByteArray signedHeaders;
    const QByteArray canonicalRequest = signature.d_func()->canonicalRequest(operation, request, payload, &signedHeaders);
    QCOMPARE(QString::fromUtf8(canonicalRequest), QString::fromUtf8(expectedRequest));
    QCOMPARE(canonicalRequest, expectedRequest);
    QCOMPARE(QString::fromUtf8(signedHeaders), QString::fromUtf8(expectedSignedHeaders));
    QCOMPARE(signedHeaders, expectedSignedHeaders);

}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::setAuthorizationHeader_data()
{
    // Use the same data provider as the authorizationHeaderValue tests.
    authorizationHeaderValue_data();
}

void TestAwsSignatureV3::setAuthorizationHeader()
{
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, payload);
    QFETCH(QByteArray, expected);

    const AwsBasicCredentials credentials(accessKeyId, secretKey);
    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    signature.d_func()->setAuthorizationHeader(credentials, operation, request, payload);
    QCOMPARE(QString::fromUtf8(request.rawHeader("Authorization")), QString::fromUtf8(expected));
    QCOMPARE(request.rawHeader("Authorization"), expected);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV3::setDateHeader_data()
{
    QTest::addColumn<QDateTime>("dateTime");

    QTest::newRow("null") << QDateTime();
    QTest::newRow("now")  << QDateTime::currentDateTime();
    QTest::newRow("utc")  << QDateTime::currentDateTimeUtc();
}

void TestAwsSignatureV3::setDateHeader()
{
    QFETCH(QDateTime, dateTime);

    AwsSignatureV3 signature(QCryptographicHash::Sha256);
    QNetworkRequest request;
    signature.d_func()->setDateHeader(request, dateTime);

    const QLatin1String dateFormat("ddd, dd MMM yyyy hh:mm:ss 'GMT'");
    QCOMPARE(QString::fromUtf8(request.rawHeader("x-amz-date")), dateTime.toString(dateFormat));
    QCOMPARE(request.rawHeader("x-amz-date"), dateTime.toString(dateFormat).toUtf8());
}
#endif

void TestAwsSignatureV3::sign()
{
    const AwsAnonymousCredentials credentials;

    {   // Check that the AwsAbstractSignature::sign function has been correctly overridden
        QNetworkRequest request;
        AwsAbstractSignature * const signature = new AwsSignatureV3;
        signature->sign(credentials, QNetworkAccessManager::GetOperation, request);
        QVERIFY(request.hasRawHeader("Authorization"));
        QCOMPARE(request.rawHeader("Authorization").left(4), QByteArray("AWS3"));
        QVERIFY(request.hasRawHeader("x-amz-date"));
        delete signature;
    }

    {   // Check that the AwsSignatureV3::sign adds a nonce for HTTPS requests.
        QNetworkRequest request(QUrl(QLatin1String("https://example.com")));
        AwsSignatureV3 signature;
        signature.sign(credentials, QNetworkAccessManager::PostOperation, request);
        QVERIFY(request.hasRawHeader("Authorization"));
        QCOMPARE(request.rawHeader("Authorization").left(4), QByteArray("AWS3"));
        QVERIFY(request.hasRawHeader("x-amz-date"));
        QVERIFY(request.hasRawHeader("x-amz-nonce"));
    }
    {   // But not for non-HTTPS requests.
        QNetworkRequest request(QUrl(QLatin1String("http://example.com")));
        AwsSignatureV3 signature;
        signature.sign(credentials, QNetworkAccessManager::PostOperation, request);
        QVERIFY(request.hasRawHeader("Authorization"));
        QCOMPARE(request.rawHeader("Authorization").left(4), QByteArray("AWS3"));
        QVERIFY(request.hasRawHeader("x-amz-date"));
        QVERIFY(!request.hasRawHeader("x-amz-nonce"));
    }
}

void TestAwsSignatureV3::version()
{
    AwsSignatureV3 signature;
    QCOMPARE(signature.version(), 3);
}
