// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqsdeletemessagerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsdeletemessagerequest.h"
#include "sqs/sqsdeletemessageresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsdeletemessagerequest_p.h"
#endif

#include <QDebug>

namespace TestSqsDeleteMessageRequest_Mocks {

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

} using namespace TestSqsDeleteMessageRequest_Mocks;

void TestSqsDeleteMessageRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("receiptHandle");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QString()
        << QString()
        << false;

    QTest::newRow("example")
        << QString::fromLatin1("http://example.com/queue")
        << QString::fromLatin1("abc123")
        << true;
}

void TestSqsDeleteMessageRequest::construct_params()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);

    const SqsDeleteMessageRequest request(queueUrl, receiptHandle);

    QCOMPARE(request.action(), SqsRequest::DeleteMessageAction);
    QCOMPARE(request.queueUrl(), queueUrl);
    QCOMPARE(request.receiptHandle(), receiptHandle);
}

void TestSqsDeleteMessageRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsDeleteMessageRequest::construct_copy()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);

    const SqsDeleteMessageRequest request1(queueUrl, receiptHandle);
    QCOMPARE(request1.queueUrl(), queueUrl);
    QCOMPARE(request1.receiptHandle(), receiptHandle);

    const SqsDeleteMessageRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);
    QCOMPARE(request2.receiptHandle(), receiptHandle);

    QCOMPARE(request1, request2);
}

void TestSqsDeleteMessageRequest::construct_default()
{
    SqsDeleteMessageRequest request;
    QCOMPARE(request.action(), SqsRequest::DeleteMessageAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
    QCOMPARE(request.receiptHandle(), QString());
}

void TestSqsDeleteMessageRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsDeleteMessageRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);
    QFETCH(bool, isValid);

    const SqsDeleteMessageRequest request(queueUrl, receiptHandle);

    QCOMPARE(request.isValid(), isValid);
}

void TestSqsDeleteMessageRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsDeleteMessageRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsDeleteMessageRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsDeleteMessageRequest::receiptHandle_data()
{
    isValid_data();
}

void TestSqsDeleteMessageRequest::receiptHandle()
{
    QFETCH(QString, receiptHandle);
    SqsDeleteMessageRequest request;
    QCOMPARE(request.receiptHandle(), QString());
    request.setReceiptHandle(receiptHandle);
    QCOMPARE(request.receiptHandle(), receiptHandle);
}

void TestSqsDeleteMessageRequest::response()
{
    const SqsDeleteMessageRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsDeleteMessageResponse"));
    const SqsDeleteMessageResponse * const sqsResponse =
        qobject_cast<const SqsDeleteMessageResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
