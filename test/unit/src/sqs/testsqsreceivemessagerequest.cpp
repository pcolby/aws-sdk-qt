// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

    //QCOMPARE(request.action(), SqsRequest::ReceiveMessageAction);
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
    QCOMPARE(request.action(), SqsRequest::ReceiveMessageAction);
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
