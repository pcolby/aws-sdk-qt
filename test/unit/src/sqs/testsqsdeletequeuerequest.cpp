// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqsdeletequeuerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsdeletequeuerequest.h"
#include "sqs/sqsdeletequeueresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsdeletequeuerequest_p.h"
#endif

#include <QDebug>

namespace TestSqsDeleteQueueRequest_Mocks {

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

} using namespace TestSqsDeleteQueueRequest_Mocks;

void TestSqsDeleteQueueRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QString()
        << false;

    QTest::newRow("example")
        << QString::fromLatin1("http://example.com/queue")
        << true;
}

void TestSqsDeleteQueueRequest::construct_params()
{
    QFETCH(QString, queueUrl);

    const SqsDeleteQueueRequest request(queueUrl);

    QCOMPARE(request.action(), SqsRequest::DeleteQueueAction);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsDeleteQueueRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsDeleteQueueRequest::construct_copy()
{
    QFETCH(QString, queueUrl);

    const SqsDeleteQueueRequest request1(queueUrl);
    QCOMPARE(request1.queueUrl(), queueUrl);

    const SqsDeleteQueueRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);

    QCOMPARE(request1, request2);
}

void TestSqsDeleteQueueRequest::construct_default()
{
    SqsDeleteQueueRequest request;
    QCOMPARE(request.action(), SqsRequest::DeleteQueueAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
}

void TestSqsDeleteQueueRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsDeleteQueueRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(bool, isValid);

    const SqsDeleteQueueRequest request(queueUrl);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsDeleteQueueRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsDeleteQueueRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsDeleteQueueRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsDeleteQueueRequest::response()
{
    const SqsDeleteQueueRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsDeleteQueueResponse"));
    const SqsDeleteQueueResponse * const sqsResponse =
        qobject_cast<const SqsDeleteQueueResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
