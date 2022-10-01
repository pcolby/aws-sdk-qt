// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqsremovepermissionresponse.h"

#include "sqs/sqsremovepermissionresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsremovepermissionresponse_p.h"
#endif

#include <QBuffer>
#include <QDebug>

namespace TestSqsRemovePermissionResponse_Mocks {

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(QObject * const parent = 0)
        : QNetworkReply(parent) { }
protected:
    virtual void abort() { }
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
};

} using namespace TestSqsRemovePermissionResponse_Mocks;

void TestSqsRemovePermissionResponse::construct()
{
    MockNetworkReply reply;
    const SqsRemovePermissionRequest request(QLatin1String("foo"), QLatin1String("bar"));
    const SqsRemovePermissionResponse response(request, &reply, this);
    QVERIFY(response.request());
    QCOMPARE(*response.request(), request);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(response.d_func()->reply, &reply);
#endif
    QCOMPARE(response.parent(), this);
    QCOMPARE(response.isValid(), true);
}

void TestSqsRemovePermissionResponse::request()
{
    const SqsRemovePermissionRequest request(QLatin1String("foo"), QLatin1String("bar"));
    const SqsRemovePermissionResponse response(request, NULL);

    // Verify that the response took a copy of (not a reference to) the request.
    QVERIFY(response.request());
    QVERIFY(response.request() != &request);
    QCOMPARE(*response.request(), request);
}

void TestSqsRemovePermissionResponse::parseSuccess_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<RemovePermissionResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</RemovePermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<RemovePermissionResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</RemovePermissionResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<RemovePermissionResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</RemovePermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotRemovePermissionResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotRemovePermissionResponse>")
        << QString()
        << QString();
}

void TestSqsRemovePermissionResponse::parseSuccess()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsRemovePermissionRequest request;
    SqsRemovePermissionResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());

    QBuffer buffer(&xml);
    buffer.open(QBuffer::ReadOnly);
    response.parseSuccess(buffer);
    QCOMPARE(response.requestId(), requestId);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsRemovePermissionResponse::parseRemovePermissionResponse_data()
{
    QTest::addColumn<QByteArray>("xml");
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("requestId");

    QTest::newRow("valid")
        << QByteArray(
            "<RemovePermissionResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</RemovePermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("invalid")
        << QByteArray(
            "<RemovePermissionResponse>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</RemovePermissionResponse>")
        << QString()
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-sub")
        << QByteArray(
            "<RemovePermissionResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</RemovePermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");

    QTest::newRow("unrecognized-top")
        << QByteArray(
            "<NotRemovePermissionResponse>"
                "<IgnoreMe>This element should be ignored</IgnoreMe>"
                "<ResponseMetadata>"
                    "<RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>"
                "</ResponseMetadata>"
            "</NotRemovePermissionResponse>")
        << QString::fromLatin1("http://sqs.us-east-1.amazonaws.com/123456789012/testQueue")
        << QString::fromLatin1("7a62c49f-347e-4fc4-9331-6e8e7a96aa73");
}

void TestSqsRemovePermissionResponse::parseRemovePermissionResponse()
{
    QFETCH(QByteArray, xml);
    QFETCH(QString, queueUrl);
    QFETCH(QString, requestId);

    SqsRemovePermissionRequest request;
    SqsRemovePermissionResponse response(request, NULL);
    QCOMPARE(response.requestId(), QString());

    QXmlStreamReader reader(xml);
    reader.readNextStartElement();
    response.d_func()->parseRemovePermissionResponse(reader);
    QCOMPARE(response.requestId(), requestId);
}

#endif
