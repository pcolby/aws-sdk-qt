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

#include "testawssignaturev0.h"

#include "core/awsbasiccredentials.h"
#include "core/awssignaturev0.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awssignaturev0_p.h"
#endif

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
Q_DECLARE_METATYPE(QUrlQuery)
#endif

void TestAwsSignatureV0::sign_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QByteArray>("data");
    QTest::addColumn<QNetworkRequest>("expected");

    QTest::newRow("CreateQueue:Expires:HTTP")
        << QNetworkAccessManager::GetOperation
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=0"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QString::fromLatin1("0A8BDF2G9KCB3ZNKFA82")
        << QString::fromLatin1("fake-secret-key")
        << QByteArray()
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=0"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"
#ifdef QTAWS_ALLOW_INSECURE_SIGNATURES
            "&Signature=Sb5D7sRtwH0tqwzSaxYgGxh0%2B14%3D"
#endif
            )));

    QTest::newRow("CreateQueue:Expires:HTTPS")
        << QNetworkAccessManager::GetOperation
        << QNetworkRequest(QUrl(QLatin1String("https://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=0"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QString::fromLatin1("0A8BDF2G9KCB3ZNKFA82")
        << QString::fromLatin1("fake-secret-key")
        << QByteArray()
        << QNetworkRequest(QUrl(QLatin1String("https://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=0"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"
            "&Signature=Sb5D7sRtwH0tqwzSaxYgGxh0%2B14%3D"
            )));

    QTest::newRow("CreateQueue:Timestamp:HTTP")
        << QNetworkAccessManager::GetOperation
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&Timestamp=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QString::fromLatin1("0A8BDF2G9KCB3ZNKFA82")
        << QString::fromLatin1("fake-secret-key")
        << QByteArray()
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&Timestamp=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"
#ifdef QTAWS_ALLOW_INSECURE_SIGNATURES
            "&SignatureVersion=0"
            "&Signature=Sb5D7sRtwH0tqwzSaxYgGxh0%2B14%3D"
#endif
            )));

    QTest::newRow("CreateQueue:Timestamp:HTTPS")
        << QNetworkAccessManager::GetOperation
        << QNetworkRequest(QUrl(QLatin1String("https://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&Timestamp=2007-01-12T12:00:00Z"
            "&Version=2006-04-01")))
        << QString::fromLatin1("0A8BDF2G9KCB3ZNKFA82")
        << QString::fromLatin1("fake-secret-key")
        << QByteArray()
        << QNetworkRequest(QUrl(QLatin1String("https://www.example.com/?"
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&Timestamp=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"
            "&SignatureVersion=0"
            "&Signature=Sb5D7sRtwH0tqwzSaxYgGxh0%2B14%3D"
            )));
}

void TestAwsSignatureV0::sign()
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
        QTest::ignoreMessage(QtWarningMsg, "AwsSignatureV0::sign Refusing to sign insecure (non-HTTPS) request");
    }
#endif

    AwsSignatureV0 signature;
    signature.sign(credentials, operation, request, data);
    QCOMPARE(request.url( ), expected.url());
    QCOMPARE(request, expected);

    /*QBENCHMARK {
        QFETCH(QNetworkRequest, request);
        signature.sign(credentials, operation, request, data);
    }*/
}

void TestAwsSignatureV0::version()
{
    AwsSignatureV0 signature;
    QCOMPARE(signature.version(), 0);
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV0::adornRequest_data()
{
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");

    QTest::newRow("empty")
        << QNetworkRequest(QUrl(QLatin1String("http://www.example.com/")))
        << QString::fromLatin1("access-key-1");
}

void TestAwsSignatureV0::adornRequest()
{
    QFETCH(QNetworkRequest, request);
    QFETCH(QString, accessKeyId);

    const AwsBasicCredentials credentials(accessKeyId, QString());

    AwsSignatureV0 signature;
    signature.d_func()->adornRequest(request, credentials);
    const QUrlQuery query(request.url());

    QVERIFY(query.hasQueryItem(QLatin1String("AWSAccessKeyId")));
    QVERIFY(query.hasQueryItem(QLatin1String("SignatureVersion")));
    QVERIFY(query.hasQueryItem(QLatin1String("Timestamp")));

    QCOMPARE(query.queryItemValue(QLatin1String("AWSAccessKeyId")), accessKeyId);
    QCOMPARE(query.queryItemValue(QLatin1String("SignatureVersion")), QString::fromLatin1("0"));
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsSignatureV0::canonicalQuery_data()
{
    QTest::addColumn<QUrlQuery>("query");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("CreateQueue")
        << QUrlQuery(QLatin1String(
            "Action=CreateQueue"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Expires=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"))
        << QByteArray("CreateQueue2007-01-12T12:00:00Z");

    QTest::newRow("CreateQueue")
        << QUrlQuery(QLatin1String(
            "Action=DoSomething"
            "&QueueName=queue2"
            "&AWSAccessKeyId=0A8BDF2G9KCB3ZNKFA82"
            "&SignatureVersion=1"
            "&Timestamp=2007-01-12T12:00:00Z"
            "&Version=2006-04-01"))
        << QByteArray("DoSomething2007-01-12T12:00:00Z");
}

void TestAwsSignatureV0::canonicalQuery()
{
    QFETCH(QUrlQuery, query);
    QFETCH(QByteArray, expected);
    AwsSignatureV0 signature;
    const QByteArray canonica = signature.d_func()->canonicalQuery(query);
    QCOMPARE(QChar::fromLatin1('"')+QString::fromUtf8(canonica)+QChar::fromLatin1('"'), QChar::fromLatin1('"')+QString::fromUtf8(expected)+QChar::fromLatin1('"'));
    QCOMPARE(canonica, expected);
}
#endif
