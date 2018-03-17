/*
    Copyright 2013-2018 Paul Colby

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

#include "testsqslistqueuesrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqslistqueuesrequest.h"
#include "sqs/sqslistqueuesresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqslistqueuesrequest_p.h"
#endif

#include <QDebug>

namespace TestSqsListQueuesRequest_Mocks {

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

} using namespace TestSqsListQueuesRequest_Mocks;

void TestSqsListQueuesRequest::construct_params_data()
{
    QTest::addColumn<QString>("queueNamePrefix");

    QTest::newRow("null") << QString();

    QTest::newRow("foo") << QString::fromLatin1("foo");
}

void TestSqsListQueuesRequest::construct_params()
{
    QFETCH(QString, queueNamePrefix);

    const SqsListQueuesRequest request(queueNamePrefix);

    QCOMPARE(request.action(), SqsRequest::ListQueuesAction);
    QCOMPARE(request.queueNamePrefix(), queueNamePrefix);
}

void TestSqsListQueuesRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsListQueuesRequest::construct_copy()
{
    QFETCH(QString, queueNamePrefix);

    const SqsListQueuesRequest request1(queueNamePrefix);
    QCOMPARE(request1.queueNamePrefix(), queueNamePrefix);

    const SqsListQueuesRequest request2(request1);
    QCOMPARE(request2.queueNamePrefix(), queueNamePrefix);

    QCOMPARE(request1, request2);
}

void TestSqsListQueuesRequest::construct_default()
{
    SqsListQueuesRequest request;
    QCOMPARE(request.action(), SqsRequest::ListQueuesAction);
    QCOMPARE(request.isValid(), true);
    QCOMPARE(request.queueNamePrefix(), QString());
}

void TestSqsListQueuesRequest::isValid_data()
{
    construct_params_data();
}

void TestSqsListQueuesRequest::isValid()
{
    QFETCH(QString, queueNamePrefix);
    const SqsListQueuesRequest request(queueNamePrefix);
    QCOMPARE(request.isValid(), true);
}

void TestSqsListQueuesRequest::queueNamePrefix_data()
{
    construct_params_data();
}

void TestSqsListQueuesRequest::queueNamePrefix()
{
    QFETCH(QString, queueNamePrefix);

    SqsListQueuesRequest request;
    QCOMPARE(request.queueNamePrefix(), QString());

    request.setQueueNamePrefix(queueNamePrefix);
    QCOMPARE(request.queueNamePrefix(), queueNamePrefix);
}

void TestSqsListQueuesRequest::response()
{
    const SqsListQueuesRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsListQueuesResponse"));
    const SqsListQueuesResponse * const sqsResponse =
        qobject_cast<const SqsListQueuesResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}
