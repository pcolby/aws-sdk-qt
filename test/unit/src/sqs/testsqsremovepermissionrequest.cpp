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

#include "testsqsremovepermissionrequest.h"

#include "core/awsabstractresponse.h"
#include "sqs/sqsremovepermissionrequest.h"
#include "sqs/sqsremovepermissionresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsremovepermissionrequest_p.h"
#endif

#include <QDebug>

/// @todo Q_DECLARE_METATYPE(...)

namespace TestSqsRemovePermissionRequest_Mocks {

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

} using namespace TestSqsRemovePermissionRequest_Mocks;

void TestSqsRemovePermissionRequest::construct_params_data()
{
    /// @todo
}

void TestSqsRemovePermissionRequest::construct_params()
{
    //QFETCH( @todo );

    //const SqsRemovePermissionRequest request(label, permissions, queueUrl);

    //QCOMPARE( @todo );
}

void TestSqsRemovePermissionRequest::construct_copy_data()
{
    construct_params_data();
}

void TestSqsRemovePermissionRequest::construct_copy()
{
    //QFETCH( @todo );

    const SqsRemovePermissionRequest request1/*( @todo )*/;
    //QCOMPARE(request1...);

    const SqsRemovePermissionRequest request2(request1);
    //QCOMPARE(request2...);

    QCOMPARE(request1, request2);
}

void TestSqsRemovePermissionRequest::construct_default()
{
    SqsRemovePermissionRequest request;
    QCOMPARE(request.isValid(), false);
    //QCOMPARE( @todo );
}

void TestSqsRemovePermissionRequest::isValid_data()
{
    /// @todo
}

void TestSqsRemovePermissionRequest::isValid()
{
    //QFETCH( @todo );

    const SqsRemovePermissionRequest request/*( @todo )*/;
    //QCOMPARE(request.isValid(), isValid);
}

void TestSqsRemovePermissionRequest::response()
{
    const SqsRemovePermissionRequest request;
    MockNetworkReply reply;
    const AwsAbstractResponse * const abstractResponse = request.response(&reply);
    QVERIFY(abstractResponse);
    QVERIFY(abstractResponse->inherits("SqsRemovePermissionResponse"));
    const SqsRemovePermissionResponse * const sqsResponse =
        qobject_cast<const SqsRemovePermissionResponse *>(abstractResponse);
    QVERIFY(sqsResponse);
}

// AwsAbstractResponsePrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
/// @todo
#endif
