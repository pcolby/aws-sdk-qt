// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqspurgequeuerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqspurgequeuerequest.h"
#include "sqs/sqspurgequeueresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqspurgequeuerequest_p.h"
#endif

#include <QDebug>

namespace TestSqsPurgeQueueRequest_Mocks {

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

} using namespace TestSqsPurgeQueueRequest_Mocks;

void TestSqsPurgeQueueRequest::construct_params_data()
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

void TestSqsPurgeQueueRequest::construct_params()
{
    QFETCH(QString, queueUrl);

    const SqsPurgeQueueRequest request(queueUrl);

    QCOMPARE(request.action(), SqsRequest::PurgeQueueAction);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsPurgeQueueRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsPurgeQueueRequest::construct_copy()
{
    QFETCH(QString, queueUrl);

    const SqsPurgeQueueRequest request1(queueUrl);
    QCOMPARE(request1.queueUrl(), queueUrl);

    const SqsPurgeQueueRequest request2(request1);
    QCOMPARE(request2.queueUrl(), queueUrl);

    QCOMPARE(request1, request2);
}

void TestSqsPurgeQueueRequest::construct_default()
{
    SqsPurgeQueueRequest request;
    QCOMPARE(request.action(), SqsRequest::PurgeQueueAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueUrl(), QString());
}

void TestSqsPurgeQueueRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsPurgeQueueRequest::isValid()
{
    QFETCH(QString, queueUrl);
    QFETCH(bool, isValid);

    const SqsPurgeQueueRequest request(queueUrl);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsPurgeQueueRequest::queueUrl_data()
{
    isValid_data();
}

void TestSqsPurgeQueueRequest::queueUrl()
{
    QFETCH(QString, queueUrl);
    SqsPurgeQueueRequest request;
    QCOMPARE(request.queueUrl(), QString());
    request.setQueueUrl(queueUrl);
    QCOMPARE(request.queueUrl(), queueUrl);
}

void TestSqsPurgeQueueRequest::response()
{
    const SqsPurgeQueueRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsPurgeQueueResponse"));
    const SqsPurgeQueueResponse * const sqsResponse =
        qobject_cast<const SqsPurgeQueueResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
