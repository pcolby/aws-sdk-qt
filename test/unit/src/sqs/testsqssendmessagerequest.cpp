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

#include "testsqssendmessagerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqssendmessagerequest.h"
#include "sqs/sqssendmessageresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqssendmessagerequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsSendMessageRequest_Mocks {

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

} using namespace TestSqsSendMessageRequest_Mocks;

void TestSqsSendMessageRequest::construct_params_data()
{
    /// @todo
}

void TestSqsSendMessageRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsSendMessageRequest request(label, permissions, queueUrl);

    //QCOMPARE(request.action(), SqsRequest::SendMessageAction);
    //QCOMPARE( @todo );
}

void TestSqsSendMessageRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsSendMessageRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsSendMessageRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsSendMessageRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsSendMessageRequest::construct_default()
{
    SqsSendMessageRequest request;
    QCOMPARE(request.action(), SqsRequest::SendMessageAction);
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsSendMessageRequest::isValid_data()
{
    /// @todo
}

void TestSqsSendMessageRequest::isValid()
{
    //QFETCH( @todo );

    const SqsSendMessageRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsSendMessageRequest::response()
{
    const SqsSendMessageRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsSendMessageResponse"));
    const SqsSendMessageResponse * const sqsResponse =
        qobject_cast<const SqsSendMessageResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
