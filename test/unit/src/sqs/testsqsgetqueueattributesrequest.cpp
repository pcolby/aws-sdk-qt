/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
