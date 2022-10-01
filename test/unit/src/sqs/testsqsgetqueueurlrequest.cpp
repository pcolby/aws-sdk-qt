// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqsgetqueueurlrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsgetqueueurlrequest.h"
#include "sqs/sqsgetqueueurlresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsgetqueueurlrequest_p.h"
#endif

#include <QDebug>

namespace TestSqsGetQueueUrlRequest_Mocks {

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

} using namespace TestSqsGetQueueUrlRequest_Mocks;

void TestSqsGetQueueUrlRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueName");
    QTest::addColumn<QString>("queueOwnerAWSAccountId");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null") << QString() << QString() << false;

    QTest::newRow("name")
        << QString::fromLatin1("example-queue")
        << QString()
        << true;

    QTest::newRow("url+account")
        << QString::fromLatin1("example-queue")
        << QString::fromLatin1("account-123")
        << true;

    QTest::newRow("no-name")
        << QString()
        << QString::fromLatin1("account-123")
        << false;
}

void TestSqsGetQueueUrlRequest::construct_params()
{
    QFETCH(QString, queueName);
    QFETCH(QString, queueOwnerAWSAccountId);

    const SqsGetQueueUrlRequest request(queueName, queueOwnerAWSAccountId);

    QCOMPARE(request.action(), SqsRequest::GetQueueUrlAction);
    QCOMPARE(request.queueName(), queueName);
    QCOMPARE(request.queueOwnerAWSAccountId(), queueOwnerAWSAccountId);
}

void TestSqsGetQueueUrlRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsGetQueueUrlRequest::construct_copy()
{
    QFETCH(QString, queueName);
    QFETCH(QString, queueOwnerAWSAccountId);

    const SqsGetQueueUrlRequest request1(queueName, queueOwnerAWSAccountId);
    QCOMPARE(request1.queueName(), queueName);
    QCOMPARE(request1.queueOwnerAWSAccountId(), queueOwnerAWSAccountId);

    const SqsGetQueueUrlRequest request2(request1);
    QCOMPARE(request2.queueName(), queueName);
    QCOMPARE(request2.queueOwnerAWSAccountId(), queueOwnerAWSAccountId);

    QCOMPARE(request1, request2);
}

void TestSqsGetQueueUrlRequest::construct_default()
{
    SqsGetQueueUrlRequest request;
    QCOMPARE(request.action(), SqsRequest::GetQueueUrlAction);
    QCOMPARE(request.isValid(), false);
    QCOMPARE(request.queueName(), QString());
    QCOMPARE(request.queueOwnerAWSAccountId(), QString());
}

void TestSqsGetQueueUrlRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsGetQueueUrlRequest::isValid()
{
    QFETCH(QString, queueName);
    QFETCH(QString, queueOwnerAWSAccountId);
    QFETCH(bool, isValid);

    const SqsGetQueueUrlRequest request(queueName, queueOwnerAWSAccountId);
    QCOMPARE(request.isValid(), isValid);
}

void TestSqsGetQueueUrlRequest::queueName_data()
{
    construct_params_data();
}

void TestSqsGetQueueUrlRequest::queueName()
{
    QFETCH(QString, queueName);

    SqsGetQueueUrlRequest request;
    QCOMPARE(request.queueName(), QString());

    request.setQueueName(queueName);
    QCOMPARE(request.queueName(), queueName);
}

void TestSqsGetQueueUrlRequest::queueOwnerAWSAccountId_data()
{
    construct_params_data();
}

void TestSqsGetQueueUrlRequest::queueOwnerAWSAccountId()
{
    QFETCH(QString, queueOwnerAWSAccountId);

    SqsGetQueueUrlRequest request;
    QCOMPARE(request.queueOwnerAWSAccountId(), QString());

    request.setQueueOwnerAWSAccountId(queueOwnerAWSAccountId);
    QCOMPARE(request.queueOwnerAWSAccountId(), queueOwnerAWSAccountId);
}

void TestSqsGetQueueUrlRequest::response()
{
    const SqsGetQueueUrlRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsGetQueueUrlResponse"));
    const SqsGetQueueUrlResponse * const sqsResponse =
        qobject_cast<const SqsGetQueueUrlResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
