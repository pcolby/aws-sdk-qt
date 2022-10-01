// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqssetqueueattributesrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqssetqueueattributesrequest.h"
#include "sqs/sqssetqueueattributesresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqssetqueueattributesrequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsSetQueueAttributesRequest_Mocks {

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

} using namespace TestSqsSetQueueAttributesRequest_Mocks;

void TestSqsSetQueueAttributesRequest::construct_params_data()
{
    /// @todo
}

void TestSqsSetQueueAttributesRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsSetQueueAttributesRequest request(label, permissions, queueUrl);

    //QCOMPARE(request.action(), SqsRequest::SetQueueAttributesAction);
    //QCOMPARE( @todo );
}

void TestSqsSetQueueAttributesRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsSetQueueAttributesRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsSetQueueAttributesRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsSetQueueAttributesRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsSetQueueAttributesRequest::construct_default()
{
    SqsSetQueueAttributesRequest request;
    QCOMPARE(request.action(), SqsRequest::SetQueueAttributesAction);
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsSetQueueAttributesRequest::isValid_data()
{
    /// @todo
}

void TestSqsSetQueueAttributesRequest::isValid()
{
    //QFETCH( @todo );

    const SqsSetQueueAttributesRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsSetQueueAttributesRequest::response()
{
    const SqsSetQueueAttributesRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsSetQueueAttributesResponse"));
    const SqsSetQueueAttributesResponse * const sqsResponse =
        qobject_cast<const SqsSetQueueAttributesResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
