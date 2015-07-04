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

#include "testsqsrequest.h"

#include "sqs/sqsrequest.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsrequest_p.h"
#endif

#include <QDebug>

Q_DECLARE_METATYPE(SqsRequest::Action)

#define SQS_API_VERSION QLatin1String("2012-11-05")

namespace TestSqsRequest_Mocks {

class MockSqsRequest : public SqsRequest {
public:
    MockSqsRequest(const Action action) : SqsRequest(action) { }
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    MockSqsRequest(SqsRequestPrivate *d) : SqsRequest(d) { }
#endif
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply);
        return NULL;
    }
};

} using namespace TestSqsRequest_Mocks;

void TestSqsRequest::construct_action_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    #define NEW_ROW(action) QTest::newRow(#action) << SqsRequest::action##Action
    NEW_ROW(AddPermissionSqs);
    NEW_ROW(ChangeMessageVisibilitySqs);
    NEW_ROW(ChangeMessageVisibilityBatchSqs);
    NEW_ROW(CreateQueueSqs);
    NEW_ROW(DreateQueueSqs);
    NEW_ROW(DeleteMessageSqs);
    NEW_ROW(DeleteMessageBatchSqs);
    NEW_ROW(DeleteQueueSqs);
    NEW_ROW(GetQueueAttributesSqs);
    NEW_ROW(GetQueueUrlSqs);
    NEW_ROW(ListDeadLetterSourceQueuesSqs);
    NEW_ROW(ListQueuesSqs);
    NEW_ROW(PurgeQueueSqs);
    NEW_ROW(ReceiveMessageSqs);
    NEW_ROW(RemovePermissionSqs);
    NEW_ROW(SendMessageSqs);
    NEW_ROW(SendMessageBatchSqs);
    NEW_ROW(SetQueueAttributesSqs);
    #undef NEW_ROW
}

void TestSqsRequest::construct_action()
{
    QFETCH(SqsRequest::Action, action);

    MockSqsRequest request(action);
    QCOMPARE(request.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request.d_func()->parameters, QVariantMap());
#endif
}

void TestSqsRequest::construct_copy_data()
{
    QTest::addColumn<SqsRequest::Action>("action");
    QTest::addColumn<QVariantMap>("parameters");

    #define NEW_ROW(action) QTest::newRow(#action) << SqsRequest::action##Action << QVariantMap();
    NEW_ROW(AddPermissionSqs);
    NEW_ROW(ChangeMessageVisibilitySqs);
    NEW_ROW(ChangeMessageVisibilityBatchSqs);
    NEW_ROW(CreateQueueSqs);
    NEW_ROW(DreateQueueSqs);
    NEW_ROW(DeleteMessageSqs);
    NEW_ROW(DeleteMessageBatchSqs);
    NEW_ROW(DeleteQueueSqs);
    NEW_ROW(GetQueueAttributesSqs);
    NEW_ROW(GetQueueUrlSqs);
    NEW_ROW(ListDeadLetterSourceQueuesSqs);
    NEW_ROW(ListQueuesSqs);
    NEW_ROW(PurgeQueueSqs);
    NEW_ROW(ReceiveMessageSqs);
    NEW_ROW(RemovePermissionSqs);
    NEW_ROW(SendMessageSqs);
    NEW_ROW(SendMessageBatchSqs);
    NEW_ROW(SetQueueAttributesSqs);
    #undef NEW_ROW

    QVariantMap parameters;
    parameters.insert(QLatin1String("foo"), 1);
    parameters.insert(QLatin1String("bar"), QLatin1String("2"));
    parameters.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("parameters") << SqsRequest::ListQueuesSqsAction << parameters;
}

void TestSqsRequest::construct_copy()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request1(action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    request1.d_func()->parameters = parameters;
#endif
    QCOMPARE(request1.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request1.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request1.d_func()->parameters, parameters);
#endif

    MockSqsRequest request2(request1);
    QCOMPARE(request2.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request2.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request2.d_func()->parameters, parameters);
#endif
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsRequest::construct_d_ptr()
{
    MockSqsRequest temporaryRequest(SqsRequest::ListQueuesSqsAction);
    SqsRequestPrivate * const requestPrivate =
        new SqsRequestPrivate(temporaryRequest.action(), &temporaryRequest);
    MockSqsRequest request(requestPrivate);
    QCOMPARE(request.d_func(), requestPrivate);
}
#endif

void TestSqsRequest::assignment_data()
{
    construct_copy_data();
}

void TestSqsRequest::assignment()
{
    QFETCH(SqsRequest::Action, action);
    QFETCH(QVariantMap, parameters);

    MockSqsRequest request1(action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    request1.d_func()->parameters = parameters;
#endif
    QCOMPARE(request1.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request1.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request1.d_func()->parameters, parameters);
#endif

    MockSqsRequest request2(SqsRequest::ListQueuesSqsAction);
    request2 = request1;
    QCOMPARE(request2.apiVersion(), SQS_API_VERSION);
    QCOMPARE(request2.action(), action);
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QCOMPARE(request2.d_func()->parameters, parameters);
#endif
}

void TestSqsRequest::action_data()
{
    construct_action_data();
}

void TestSqsRequest::action()
{
    QFETCH(SqsRequest::Action, action);

    // Setup a mock request that has an action other than the test data action.
    MockSqsRequest request((action == SqsRequest::ListQueuesSqsAction)
        ? SqsRequest::CreateQueueSqsAction : SqsRequest::ListQueuesSqsAction);
    QVERIFY(request.action() != action);

    request.setAction(action);
    QCOMPARE(request.action(), action);
}

void TestSqsRequest::actionString_data()
{
    /// @todo
}

void TestSqsRequest::actionString()
{
    /// @todo
}

void TestSqsRequest::apiVersion_data()
{
    /// @todo
}

void TestSqsRequest::apiVersion()
{
    /// @todo
}

void TestSqsRequest::clearParameter_data()
{
    /// @todo
}

void TestSqsRequest::clearParameter()
{
    /// @todo
}

void TestSqsRequest::parameter_data()
{
    /// @todo
}

void TestSqsRequest::parameter()
{
    /// @todo
}

void TestSqsRequest::setParameter_data()
{
    /// @todo
}

void TestSqsRequest::setParameter()
{
    /// @todo
}

void TestSqsRequest::unsignedRequest_data()
{
    /// @todo
}

void TestSqsRequest::unsignedRequest()
{
    /// @todo
}
