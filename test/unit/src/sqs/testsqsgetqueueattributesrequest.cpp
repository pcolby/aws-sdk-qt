// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsqsgetqueueattributesrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsgetqueueattributesrequest.h"
#include "sqs/sqsgetqueueattributesresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsgetqueueattributesrequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsGetQueueAttributesRequest_Mocks {

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

} using namespace TestSqsGetQueueAttributesRequest_Mocks;

void TestSqsGetQueueAttributesRequest::construct_params_data()
{
    /// @todo
}

void TestSqsGetQueueAttributesRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsGetQueueAttributesRequest request(label, permissions, queueUrl);

    //QCOMPARE(request.action(), SqsRequest::GetQueueAttributesAction);
    //QCOMPARE( @todo );
}

void TestSqsGetQueueAttributesRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsGetQueueAttributesRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsGetQueueAttributesRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsGetQueueAttributesRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsGetQueueAttributesRequest::construct_default()
{
    SqsGetQueueAttributesRequest request;
    QCOMPARE(request.action(), SqsRequest::GetQueueAttributesAction);
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsGetQueueAttributesRequest::isValid_data()
{
    /// @todo
}

void TestSqsGetQueueAttributesRequest::isValid()
{
    //QFETCH( @todo );

    const SqsGetQueueAttributesRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsGetQueueAttributesRequest::response()
{
    const SqsGetQueueAttributesRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsGetQueueAttributesResponse"));
    const SqsGetQueueAttributesResponse * const sqsResponse =
        qobject_cast<const SqsGetQueueAttributesResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
