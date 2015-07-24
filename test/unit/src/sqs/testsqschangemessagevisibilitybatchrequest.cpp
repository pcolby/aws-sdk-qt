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

#include "testsqschangemessagevisibilitybatchrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqschangemessagevisibilitybatchrequest.h"
#include "sqs/sqschangemessagevisibilitybatchresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqschangemessagevisibilitybatchrequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsChangeMessageVisibilityBatchRequest_Mocks {

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

} using namespace TestSqsChangeMessageVisibilityBatchRequest_Mocks;

void TestSqsChangeMessageVisibilityBatchRequest::construct_params_data()
{
    /// @todo
}

void TestSqsChangeMessageVisibilityBatchRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsChangeMessageVisibilityBatchRequest request(label, permissions, queueUrl);

    //QCOMPARE(request.action(), SqsRequest::ChangeMessageVisibilityBatchAction);
    //QCOMPARE( @todo );
}

void TestSqsChangeMessageVisibilityBatchRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsChangeMessageVisibilityBatchRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsChangeMessageVisibilityBatchRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsChangeMessageVisibilityBatchRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsChangeMessageVisibilityBatchRequest::construct_default()
{
    SqsChangeMessageVisibilityBatchRequest request;
    QCOMPARE(request.action(), SqsRequest::ChangeMessageVisibilityBatchAction);
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsChangeMessageVisibilityBatchRequest::isValid_data()
{
    /// @todo
}

void TestSqsChangeMessageVisibilityBatchRequest::isValid()
{
    //QFETCH( @todo );

    const SqsChangeMessageVisibilityBatchRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsChangeMessageVisibilityBatchRequest::response()
{
    const SqsChangeMessageVisibilityBatchRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsChangeMessageVisibilityBatchResponse"));
    const SqsChangeMessageVisibilityBatchResponse * const sqsResponse =
        qobject_cast<const SqsChangeMessageVisibilityBatchResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
