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

#include "testsqsresponse.h"

#include "sqs/sqsrequest.h"
#include "sqs/sqsresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsresponse_p.h"
#endif

#include <QDebug>

namespace TestSqsResponse_Mocks {

class MockSqsResponse : public SqsResponse {
public:
    int parseCount, parseFailureCount, parseSuccessCount;
    MockSqsResponse() : SqsResponse(), parseCount(0), parseFailureCount(0),
        parseSuccessCount(0) { }
    MockSqsResponse(QObject * const parent) : SqsResponse(parent),
        parseCount(0), parseFailureCount(0), parseSuccessCount(0) { }
    MockSqsResponse(SqsResponsePrivate * const d, QObject * const parent)
        : SqsResponse(d, parent) { }
    virtual const SqsRequest * request() const {
     //   #ifdef QTAWS_ENABLE_PRIVATE_TESTS
   //     return d_ptr->request;
       // #else
        return NULL;
        //#endif
    }
protected:
    virtual void parseSuccess(QIODevice &response) {
        Q_UNUSED(response);
        parseSuccessCount++;
    }
};

} using namespace TestSqsResponse_Mocks;

void TestSqsResponse::construct()
{
    {   // Verify the default parent argument is NULL.
        MockSqsResponse response;
        QCOMPARE(response.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockSqsResponse response(this);
        QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestSqsResponse::construct_d_ptr()
{
    MockSqsResponse temporaryResponse;
    SqsResponsePrivate * const responsePrivate =
        new SqsResponsePrivate(&temporaryResponse);
    MockSqsResponse response(responsePrivate, this);
    QCOMPARE(response.d_func(), responsePrivate);
    QCOMPARE(response.parent(), this);
}
#endif

void TestSqsResponse::errorString_data()
{

}

void TestSqsResponse::errorString()
{

}

void TestSqsResponse::hasError_data()
{

}

void TestSqsResponse::hasError()
{

}

void TestSqsResponse::isValid_data()
{

}

void TestSqsResponse::isValid()
{

}

void TestSqsResponse::requestId_data()
{

}

void TestSqsResponse::requestId()
{

}

void TestSqsResponse::serviceErrors_data()
{

}

void TestSqsResponse::serviceErrors()
{

}

void TestSqsResponse::parseFailure_data()
{

}

void TestSqsResponse::parseFailure()
{

}
