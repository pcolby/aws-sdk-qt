/*
    Copyright 2013-2015 Paul Colby

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

#include "testsqsaddpermissionresponse.h"

#include "sqs/sqsaddpermissionresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsaddpermissionresponse_p.h"
#endif

#include <QBuffer>
#include <QDebug>

namespace TestSqsAddPermissionResponse_Mocks {

} using namespace TestSqsAddPermissionResponse_Mocks;

void TestSqsAddPermissionResponse::construct_data()
{
    QTest::addColumn<QString>("queueName");
    QTest::newRow("example") << QString::fromLatin1("example");
}

void TestSqsAddPermissionResponse::construct()
{
    QFETCH(QString, queueName);
    const SqsAddPermissionRequest request(queueName);
    SqsAddPermissionResponse response(request, NULL);
    QCOMPARE(response.isValid(), false);
    QVERIFY(response.request());
    QCOMPARE(*response.request(), request);
}

void TestSqsAddPermissionResponse::isValid_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("valid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << true;

    QTest::newRow("invalid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<NotQueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</NotQueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << false;
}

void TestSqsAddPermissionResponse::isValid()
{
    QFETCH(QByteArray, xml);
    QFETCH(bool, isValid);

    SqsAddPermissionRequest request;
    SqsAddPermissionResponse response(request, NULL);
    QCOMPARE(response.isValid(), false);

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
    QCOMPARE(response.isValid(), isValid);
}

void TestSqsAddPermissionResponse::request()
{
    const QString queueName = QString::fromLatin1("sentinel-queue-name");

    SqsAddPermissionRequest request(queueName);
    //QCOMPARE(request.queueName(), queueName);
    SqsAddPermissionResponse response(request, NULL);

    // Verify that the response took a copy of (not a reference to) the request.
    QVERIFY(response.request());
    QVERIFY(response.request() != &request);
    QCOMPARE(*response.request(), request);
}

void TestSqsAddPermissionResponse::queueUrl_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");

    QTest::newRow("valid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue");

    QTest::newRow("invalid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<NotQueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</NotQueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString();
}

void TestSqsAddPermissionResponse::queueUrl()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);

    SqsAddPermissionRequest request;
    SqsAddPermissionResponse response(request, NULL);
    QCOMPARE(response.queueUrl(), QString());

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
    QCOMPARE(response.queueUrl(), queueUrl);
}

void TestSqsAddPermissionResponse::parseSuccess_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<NotQueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</NotQueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotAddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotAddPermissionResponse>")
        << QString()
        << QString();
}

void TestSqsAddPermissionResponse::parseSuccess()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsAddPermissionRequest request;
    SqsAddPermissionResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());
    QCOMPARE(response.queueUrl(), QString());

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
    QCOMPARE(response.requestId(), requestId);
    QCOMPARE(response.queueUrl(), queueUrl);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsAddPermissionResponse::parseAddPermissionResponse_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<NotQueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</NotQueueUrl>"
                "</AddPermissionResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<AddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</AddPermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotAddPermissionResponse>"
                "<AddPermissionResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</AddPermissionResult>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotAddPermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");
}

void TestSqsAddPermissionResponse::parseAddPermissionResponse()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsAddPermissionRequest request;
    SqsAddPermissionResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());
    QCOMPARE(response.queueUrl(), QString());

    QXmlStreamReader reader(xml);
    reader.readNextStartElement();
    response.d_func()->parseAddPermissionResponse(reader);
    QCOMPARE(response.requestId(), requestId);
    QCOMPARE(response.queueUrl(), queueUrl);
}

void TestSqsAddPermissionResponse::parseAddPermissionResult_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<AddPermissionResult>"
                "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
            "</AddPermissionResult>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue");

    QTest::newRow("invalid")
        << QByteArray(
            "<AddPermissionResult>"
                "<NotQueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</NotQueueUrl>"
            "</AddPermissionResult>")
        << QString();
}

void TestSqsAddPermissionResponse::parseAddPermissionResult()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);

    SqsAddPermissionRequest request;
    SqsAddPermissionResponse response(request, NULL);
    QCOMPARE(response.queueUrl(), QString());

    QXmlStreamReader reader(xml);
    reader.readNextStartElement();
    response.d_func()->parseAddPermissionResult(reader);
    QCOMPARE(response.queueUrl(), queueUrl);
}
#endif
