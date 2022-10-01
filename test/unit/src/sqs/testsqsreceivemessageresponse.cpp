// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqsreceivemessageresponse.h"

#include "sqs/sqsreceivemessageresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsreceivemessageresponse_p.h"
#endif

#include <QBuffer>
#include <QDebug>

namespace TestSqsReceiveMessageResponse_Mocks {

} using namespace TestSqsReceiveMessageResponse_Mocks;

void TestSqsReceiveMessageResponse::construct_data()
{
    //QTest::addColumn<QString>("queueName");
    //QTest::newRow("example") << QString::fromLatin1("example");
}

void TestSqsReceiveMessageResponse::construct()
{
    //QFETCH(QString, queueName);
    const SqsReceiveMessageRequest request/**( @todo )*/;
    SqsReceiveMessageResponse response(request, NULL);
   //QCOMPARE(response.isValid(), true); ///< @todo
    QVERIFY(response.request());
    QCOMPARE(*response.request(), request);
}

void TestSqsReceiveMessageResponse::isValid_data()
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

void TestSqsReceiveMessageResponse::isValid()
{
    QFETCH(QByteArray, xml);
    QFETCH(bool, isValid);
    Q_UNUSED(isValid) ///< @todo Remove this.

    SqsReceiveMessageRequest request;
    SqsReceiveMessageResponse response(request, NULL);
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

void TestSqsReceiveMessageResponse::request()
{
    //const QString queueName = QString::fromLatin1("sentinel-queue-name");

    SqsReceiveMessageRequest request/**( @todo )*/;
    //QCOMPARE(request.queueName(), queueName);
    SqsReceiveMessageResponse response(request, NULL);

    // Verify that the response took a copy of (not a reference to) the request.
    QVERIFY(response.request());
    QVERIFY(response.request() != &request);
    QCOMPARE(*response.request(), request);
}

void TestSqsReceiveMessageResponse::parseSuccess_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<ReceiveMessageResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</ReceiveMessageResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<ReceiveMessageResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</ReceiveMessageResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<ReceiveMessageResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</ReceiveMessageResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotReceiveMessageResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotReceiveMessageResponse>")
        << QString()
        << QString();
}

void TestSqsReceiveMessageResponse::parseSuccess()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsReceiveMessageRequest request;
    SqsReceiveMessageResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
    QCOMPARE(response.requestId(), requestId);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsReceiveMessageResponse::parseReceiveMessageResponse_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<ReceiveMessageResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</ReceiveMessageResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<ReceiveMessageResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</ReceiveMessageResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<ReceiveMessageResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</ReceiveMessageResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotReceiveMessageResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotReceiveMessageResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");
}

void TestSqsReceiveMessageResponse::parseReceiveMessageResponse()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsReceiveMessageRequest request;
    SqsReceiveMessageResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());

    QXmlStreamReader reader(xml);
    reader.readNextStartElement();
    response.d_func()->parseReceiveMessageResponse(reader);
    QCOMPARE(response.requestId(), requestId);
}

#endif
