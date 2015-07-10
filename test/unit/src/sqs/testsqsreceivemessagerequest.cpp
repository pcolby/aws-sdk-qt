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

#include "testsqsreceivemessagerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsreceivemessagerequest.h"
#include "sqs/sqsreceivemessageresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsreceivemessagerequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsReceiveMessageRequest_Mocks {

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

} using namespace TestSqsReceiveMessageRequest_Mocks;

void TestSqsReceiveMessageRequest::construct_params_data()
{
    /// @todo
}

void TestSqsReceiveMessageRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsReceiveMessageRequest request(label, permissions, queueUrl);

    //QCOMPARE( @todo );
}

void TestSqsReceiveMessageRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsReceiveMessageRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsReceiveMessageRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsReceiveMessageRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsReceiveMessageRequest::construct_default()
{
    SqsReceiveMessageRequest request;
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsReceiveMessageRequest::isValid_data()
{
    /// @todo
}

void TestSqsReceiveMessageRequest::isValid()
{
    //QFETCH( @todo );

    const SqsReceiveMessageRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsReceiveMessageRequest::response()
{
    const SqsReceiveMessageRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsReceiveMessageResponse"));
    const SqsReceiveMessageResponse * const sqsResponse =
        qobject_cast<const SqsReceiveMessageResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
