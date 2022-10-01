// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqschangemessagevisibilityrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqschangemessagevisibilityrequest.h"
#include "sqs/sqschangemessagevisibilityresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqschangemessagevisibilityrequest_p.h"
#endif

#include <QDebug>

namespace TestSqsChangeMessageVisibilityRequest_Mocks {

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

} using namespace TestSqsChangeMessageVisibilityRequest_Mocks;

void TestSqsChangeMessageVisibilityRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("receiptHandle");
    QTest::addColumn<int>("visibilityTimeout");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QString()
        << QString()
        << 0
        << false;

    QTest::newRow("example")
        << QString::fromLatin1("http://example.com/queue")
        << QString::fromLatin1("abc123")
        << 123
        << true;
}

void TestSqsChangeMessageVisibilityRequest::construct_params()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);
    QFETCH(int, visibilityTimeout);

    const SqsChangeMessageVisibilityRequest request(
        queueUrl, receiptHandle, visibilityTimeout);

    QCOMPARE(request.action(), SqsRequest::ChangeMessageVisibilityAction);
    QCOMPARE(request.queueUrl(), queueUrl);
    QCOMPARE(request.receiptHandle(), receiptHandle);
    QCOMPARE(request.visibilityTimeout(), visibilityTimeout);
}

void TestSqsChangeMessageVisibilityRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsChangeMessageVisibilityRequest::construct_copy()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);
    QFETCH(int, visibilityTimeout);

    const SqsChangeMessageVisibilityRequest request1(
        queueUrl, receiptHandle, visibilityTimeout);
    QCOMPARE(request1.queueUrl(), queueUrl);
    QCOMPARE(request1.receiptHandle(), receiptHandle);
    QCOMPARE(request1.visibilityTimeout(), visibilityTimeout);

    const SqsChangeMessageVisibilityRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);
    QCOMPARE(request2.receiptHandle(), receiptHandle);
    QCOMPARE(request2.visibilityTimeout(), visibilityTimeout);

    QCOMPARE(request1, request2);
}

void TestSqsChangeMessageVisibilityRequest::construct_default()
{
    SqsChangeMessageVisibilityRequest request;
    QCOMPARE(request.action(), SqsRequest::ChangeMessageVisibilityAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
    QCOMPARE(request.receiptHandle(), QString());
    QCOMPARE(request.visibilityTimeout(), -1);
}

void TestSqsChangeMessageVisibilityRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsChangeMessageVisibilityRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);
    QFETCH(int, visibilityTimeout);
    QFETCH(bool, isValid);

    const SqsChangeMessageVisibilityRequest request(
        queueUrl, receiptHandle, visibilityTimeout);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsChangeMessageVisibilityRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsChangeMessageVisibilityRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsChangeMessageVisibilityRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsChangeMessageVisibilityRequest::receiptHandle_data()
{
    isValid_data();
}

void TestSqsChangeMessageVisibilityRequest::receiptHandle()
{
    QFETCH(QString, receiptHandle);
    SqsChangeMessageVisibilityRequest request;
    QCOMPARE(request.receiptHandle(), QString());
    request.setReceiptHandle(receiptHandle);
    QCOMPARE(request.receiptHandle(), receiptHandle);
}

void TestSqsChangeMessageVisibilityRequest::visibilityTimeout_data()
{
    isValid_data();
}

void TestSqsChangeMessageVisibilityRequest::visibilityTimeout()
{
    QFETCH(int, visibilityTimeout);
    SqsChangeMessageVisibilityRequest request;
    QCOMPARE(request.visibilityTimeout(), -1);
    request.setVisibilityTimeout(visibilityTimeout);
    QCOMPARE(request.visibilityTimeout(), visibilityTimeout);
}

void TestSqsChangeMessageVisibilityRequest::response()
{
    const SqsChangeMessageVisibilityRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsChangeMessageVisibilityResponse"));
    const SqsChangeMessageVisibilityResponse * const sqsResponse =
        qobject_cast<const SqsChangeMessageVisibilityResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
