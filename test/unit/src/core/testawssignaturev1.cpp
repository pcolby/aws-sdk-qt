/*
    Copyright 2013-2019 Paul Colby

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

#include "testawssignaturev1.h"

#include "core/awsbasiccredentials.h"
#include "core/awssignaturev1.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awssignaturev1_p.h"
#endif

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
Q_DECLARE_METATYPE(QUrlQuery)
#endif

void TestAwsSignatureV1::sign_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QByteArray>("data");
    QTest::addColumn<QNetworkRequest>("expected");

    // Example from http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
    // This one will not be signed unless QTAWS_ALLOW_INSECURE_SIGNATURES is defined.
    QTest::newRow("CreateQueue")
        << QNetworkAccessManager::GetOperation
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QString::fromLatin1("0A8BDF2G9KCB3ZNKFA82")
        << QString::fromLatin1("fake-secret-key")
        << QByteArray()
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"
#ifdef QTAWS_ALLOW_INSECURE_SIGNATURES
            "&Signature=wlv84EOcHQk800Yq6QHgX4AdJfk%3D"
#endif
            )));

    // Example from http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
    // This one will be signed since the HTTPS transport is (considered) secure.
    QTest::newRow("CreateQueue")
        << QNetworkAccessManager::GetOperation
        << QNetworkRequest(QUrl(QLatin1String("https://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QString::fromLatin1("0A8BDF2G9KCB3ZNKFA82")
        << QString::fromLatin1("fake-secret-key")
        << QByteArray()
        << QNetworkRequest(QUrl(QLatin1String("https://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"
            "&Signature=wlv84EOcHQk800Yq6QHgX4AdJfk%3D")));

    // Note, the example from the Amazon DevPay developer guiedes, including:
    //   * http://awsdocs.s3.amazonaws.com/DevPay/20071201/devpay-dg-20071201.pdf
    //   * http://awsdocs.s3.amazonaws.com/DevPay/latest/devpay-dg.pdf
    //   * http://docs.aws.amazon.com/AmazonDevPay/latest/DevPayDeveloperGuide/LSAPI_Auth_REST.html
    // is broken.  Clearly that example was copied from the one SQS one above, and the
    // AWSAccessKeyId sanitised to "AKIAIOSFODNN7EXAMPLE", but the generated signature not updated
    // That is, the example in those documents produces the exact same signature as the SQS test,
    // which is clearly not right, since that test uses a differnet AWSAccessKeyId.  Someone should
    // update those old AWS documents, but since Signature version 1 is so old and deprecated,
    // there's not much point.
}

void TestAwsSignatureV1::sign()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QByteArray, data);
    QFETCH(QNetworkRequest, expected);

    const AwsBasicCredentials credentials(accessKeyId, secretKey);

#ifndef QTAWS_ALLOW_INSECURE_SIGNATURES
    if (request.url().scheme() != QLatin1String("https")) {
        QTest::ignoreMessage(QtWarningMsg, "AwsSignatureV1::sign Refusing to sign insecure (non-HTTPS) request");
    }
#endif

    AwsSignatureV1 signature;
    signature.sign(credentials, operation, request, data);
    QCOMPARE(request.url( ), expected.url());
    QCOMPARE(request, expected);

    /*QBENCHMARK {
        QFETCH(QNetworkRequest, request);
        signature.sign(credentials, operation, request, data);
    }*/
}

void TestAwsSignatureV1::version()
{
    AwsSignatureV1 signature;
    QCOMPARE(signature.version(), 1);
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV1::adornRequest_data()
{
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");

    QTest::newRow("empty")
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/")))
        << QString::fromLatin1("access-key-1");
}

void TestAwsSignatureV1::adornRequest()
{
    QFETCH(QNetworkRequest, request);
    QFETCH(QString, accessKeyId);

    const AwsBasicCredentials credentials(accessKeyId, QString());

    AwsSignatureV1 signature;
    signature.d_func()->adornRequest(request, credentials);
    const QUrlQuery query(request.url());

    QVERIFY(query.hasQueryItem(QLatin1String("AWSAccessKeyId")));
    QVERIFY(query.hasQueryItem(QLatin1String("SignatureVersion")));
    QVERIFY(query.hasQueryItem(QLatin1String("Timestamp")));

    QCOMPARE(query.queryItemValue(QLatin1String("AWSAccessKeyId")), accessKeyId);
    QCOMPARE(query.queryItemValue(QLatin1String("SignatureVersion")), QString::fromLatin1("1"));
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV1::canonicalQuery_data()
{
    QTest::addColumn<QUrlQuery>("query");
    QTest::addColumn<QByteArray>("expected");

    // Example from http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
    QTest::newRow("CreateQueue")
        << QUrlQuery(QLatin1String(
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"))
        << QByteArray("ActionCreateQueueAWSAccessKeyId0A8BDF2G9KCB3ZNKFA82Expires2007-01-12T12:00:00ZQueueNamequeue2SignatureVersion1Version2006-04-01");

    // A small extension of the above test.
    QTest::newRow("CreateQueue")
        << QUrlQuery(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QByteArray("ActionCreateQueueAWSAccessKeyId0A8BDF2G9KCB3ZNKFA82Expires2007-01-12T12:00:00ZQueueNamequeue2SignatureVersion1Version2006-04-01");

    // Example from:
    //   * http://awsdocs.s3.amazonaws.com/DevPay/20071201/devpay-dg-20071201.pdf
    //   * http://awsdocs.s3.amazonaws.com/DevPay/latest/devpay-dg.pdf
    //   * http://docs.aws.amazon.com/AmazonDevPay/latest/DevPayDeveloperGuide/LSAPI_Auth_REST.html
    // Although this example's signature is broken (see sign_data() above), the string-to-sign
    // (as tested by this function) is still valid for testing.
    QTest::newRow("CreateQueue")
        << QUrlQuery(QLatin1String(
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"))
        << QByteArray("ActionCreateQueueAWSAccessKeyIdAKIAIOSFODNN7EXAMPLEExpires2007-01-12T12:00:00ZQueueNamequeue2SignatureVersion1Version2006-04-01");

    // A small extension of the above test.
    QTest::newRow("CreateQueue2")
        << QUrlQuery(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")).query())
        << QByteArray("ActionCreateQueueAWSAccessKeyIdAKIAIOSFODNN7EXAMPLEExpires2007-01-12T12:00:00ZQueueNamequeue2SignatureVersion1Version2006-04-01");
}

void TestAwsSignatureV1::canonicalQuery()
{
    QFETCH(QUrlQuery, query);
    QFETCH(QByteArray, expected);
    AwsSignatureV1 signature;
    const QByteArray canonica = signature.d_func()->canonicalQuery(query);
    QCOMPARE(QChar::fromLatin1('"')+QString::fromUtf8(canonica)+QChar::fromLatin1('"'), QChar::fromLatin1('"')+QString::fromUtf8(expected)+QChar::fromLatin1('"'));
    QCOMPARE(canonica, expected);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV1::caseInsensitiveLessThan_data()
{
    QTest::addColumn<AwsSignatureV1Private::QStringPair>("first");
    QTest::addColumn<AwsSignatureV1Private::QStringPair>("second");
    QTest::addColumn<bool>("lessThan");

    #define ADD_ROW(a1,a2,b1,b2,lessThan) \
    QTest::newRow(QString::fromLatin1("{%1:%2}:{%3:%4}:%5") \
                 .arg(QLatin1String(a1)).arg(QLatin1String(a2)) \
                 .arg(QLatin1String(b1)).arg(QLatin1String(b2)) \
                 .arg(lessThan).toLatin1()) \
        << AwsSignatureV1Private::QStringPair(QLatin1String(a1), QLatin1String(a2)) \
        << AwsSignatureV1Private::QStringPair(QLatin1String(b1), QLatin1String(b2)) \
        << lessThan

    ADD_ROW("", "", "", "", false);
    ADD_ROW("1", "", "", "", false);
    ADD_ROW("", "1", "", "", false);
    ADD_ROW("", "", "1", "", true);
    ADD_ROW("", "", "", "1", true);
    ADD_ROW("abc","abc","abc","abcd", true);
    ADD_ROW("ABC","abc","abc","abcd", true);
    ADD_ROW("abc","ABC","abc","abcd", true);
    ADD_ROW("A","Z","B","B", true);
    ADD_ROW("B","B","A","Z", false);
    ADD_ROW("B","Z","A","Z", false);

    #undef ADD_ROW
}

void TestAwsSignatureV1::caseInsensitiveLessThan()
{
    QFETCH(AwsSignatureV1Private::QStringPair, first);
    QFETCH(AwsSignatureV1Private::QStringPair, second);
    QFETCH(bool, lessThan);
    QCOMPARE(AwsSignatureV1Private::caseInsensitiveLessThan(first, second), lessThan);
}
#endif
