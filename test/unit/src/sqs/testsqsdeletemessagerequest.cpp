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

#include "testsqsdeletemessagerequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsdeletemessagerequest.h"
#include "sqs/sqsdeletemessageresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsdeletemessagerequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsDeleteMessageRequest_Mocks {

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

} using namespace TestSqsDeleteMessageRequest_Mocks;

void TestSqsDeleteMessageRequest::construct_params_data()
{
    /// @todo
}

void TestSqsDeleteMessageRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsDeleteMessageRequest request(label, permissions, queueUrl);

    //QCOMPARE( @todo );
}

void TestSqsDeleteMessageRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsDeleteMessageRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsDeleteMessageRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsDeleteMessageRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsDeleteMessageRequest::construct_default()
{
    SqsDeleteMessageRequest request;
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsDeleteMessageRequest::isValid_data()
{
    /// @todo
}

void TestSqsDeleteMessageRequest::isValid()
{
    //QFETCH( @todo );

    const SqsDeleteMessageRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsDeleteMessageRequest::response()
{
    const SqsDeleteMessageRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsDeleteMessageResponse"));
    const SqsDeleteMessageResponse * const sqsResponse =
        qobject_cast<const SqsDeleteMessageResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
