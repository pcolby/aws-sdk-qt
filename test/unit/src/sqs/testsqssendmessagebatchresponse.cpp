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

#include "testsqssendmessagebatchresponse.h"

#include "sqs/sqssendmessagebatchresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqssendmessagebatchresponse_p.h"
#endif

#include <QBuffer>
#include <QDebug>

namespace TestSqsSendMessageBatchResponse_Mocks {

} using namespace TestSqsSendMessageBatchResponse_Mocks;

void TestSqsSendMessageBatchResponse::construct_data()
{
    //QTest::addColumn<QString>("queueName");
    //QTest::newRow("example") << QString::fromLatin1("example");
}

void TestSqsSendMessageBatchResponse::construct()
{
    //QFETCH(QString, queueName);
    const SqsSendMessageBatchRequest request/**( @todo )*/;
    SqsSendMessageBatchResponse response(request, NULL);
   //QCOMPARE(response.isValid(), true); ///< @todo
    QVERIFY(response.request());
    QCOMPARE(*response.request(), request);
}

void TestSqsSendMessageBatchResponse::isValid_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<bool>("isValid");

    /// @todo

    QTest::newRow("valid")
        << QByteArray(
            "<CreateQueueResponse>"
                "<CreateQueueResult>"
                    "<QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>"
                "</CreateQueueResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</CreateQueueResponse>")
        << true;

    QTest::newRow("invalid")
        << QByteArray(
            "<CreateQueueResponse>"
                "<CreateQueueResult>"
                    "<NotQueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</NotQueueUrl>"
                "</CreateQueueResult>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</CreateQueueResponse>")
        << false;
}

void TestSqsSendMessageBatchResponse::isValid()
{
    QFETCH(QByteArray, xml);
    QFETCH(bool, isValid);
    Q_UNUSED(isValid) ///< @todo Remove this.

    SqsSendMessageBatchRequest request;
    SqsSendMessageBatchResponse response(request, NULL);
    QCOMPARE(response.isValid(), false);

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
  //QCOMPARE(response.isValid(), isValid); ///< @todo

    // Verify the fallback to the parent (SqsResponse::isValid) implementation.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    if (isValid) {
        response.d_func()->xmlError = QXmlStreamReader::UnexpectedElementError;
        QCOMPARE(response.isValid(), false);
    }
    #endif
}

void TestSqsSendMessageBatchResponse::request()
{
    //const QString queueName = QString::fromLatin1("sentinel-queue-name");

    SqsSendMessageBatchRequest request/**( @todo )*/;
    //QCOMPARE(request.queueName(), queueName);
    SqsSendMessageBatchResponse response(request, NULL);

    // Verify that the response took a copy of (not a reference to) the request.
    QVERIFY(response.request());
    QVERIFY(response.request() != &request);
    QCOMPARE(*response.request(), request);
}

void TestSqsSendMessageBatchResponse::parseSuccess_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<SendMessageBatchResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</SendMessageBatchResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<SendMessageBatchResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</SendMessageBatchResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<SendMessageBatchResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</SendMessageBatchResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotSendMessageBatchResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotSendMessageBatchResponse>")
        << QString()
        << QString();
}

void TestSqsSendMessageBatchResponse::parseSuccess()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsSendMessageBatchRequest request;
    SqsSendMessageBatchResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
    QCOMPARE(response.requestId(), requestId);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsSendMessageBatchResponse::parseSendMessageBatchResponse_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<SendMessageBatchResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</SendMessageBatchResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<SendMessageBatchResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</SendMessageBatchResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<SendMessageBatchResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</SendMessageBatchResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotSendMessageBatchResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotSendMessageBatchResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");
}

void TestSqsSendMessageBatchResponse::parseSendMessageBatchResponse()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsSendMessageBatchRequest request;
    SqsSendMessageBatchResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());

    QXmlStreamReader reader(xml);
    reader.readNextStartElement();
    response.d_func()->parseSendMessageBatchResponse(reader);
    QCOMPARE(response.requestId(), requestId);
}

#endif
