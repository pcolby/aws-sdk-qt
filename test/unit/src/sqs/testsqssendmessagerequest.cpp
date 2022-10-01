// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
