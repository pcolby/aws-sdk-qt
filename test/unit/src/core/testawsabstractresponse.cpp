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

#include "testawsabstractresponse.h"

#include "core/awsabstractresponse.h"
#include "core/awsabstractresponse_p.h"

// Bare minimum concrete mock class.
class MockResponse : public AwsAbstractResponse {
public:
    MockResponse() : AwsAbstractResponse() { }
    MockResponse(QObject * const parent) : AwsAbstractResponse(parent) { }
    MockResponse(AwsAbstractResponsePrivate * const d, QObject * const parent)
        : AwsAbstractResponse(d, parent) { }
    virtual bool isValid() const { return false; }
protected:
    virtual void parseFailure(QIODevice &response) { Q_UNUSED(response); }
    virtual void parseSuccess(QIODevice &response) { Q_UNUSED(response); }
};

void TestAwsAbstractResponse::construct()
{
    {   // Verify the default parent argument is NULL.
        MockResponse response;
        QCOMPARE(response.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockResponse response(this);
        QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractResponse::construct_d_ptr()
{
    MockResponse temporaryResponse;
    AwsAbstractResponsePrivate * const responsePrivate =
        new AwsAbstractResponsePrivate(&temporaryResponse);
    MockResponse response(responsePrivate, this);
    QCOMPARE(response.d_func(), responsePrivate);
    QCOMPARE(response.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractResponse::errorString_data()
{

}

void TestAwsAbstractResponse::errorString()
{

}

void TestAwsAbstractResponse::hasError_data()
{

}

void TestAwsAbstractResponse::hasError()
{

}

void TestAwsAbstractResponse::isValid_data()
{

}

void TestAwsAbstractResponse::isValid()
{

}

void TestAwsAbstractResponse::networkError_data()
{

}

void TestAwsAbstractResponse::networkError()
{

}

void TestAwsAbstractResponse::xmlParseError_data()
{

}

void TestAwsAbstractResponse::xmlParseError()
{

}

void TestAwsAbstractResponse::xmlParseErrorString_data()
{

}

void TestAwsAbstractResponse::xmlParseErrorString()
{

}

void TestAwsAbstractResponse::toVariant_data()
{

}

void TestAwsAbstractResponse::toVariant()
{

}

void TestAwsAbstractResponse::isSuccess_data()
{

}

void TestAwsAbstractResponse::isSuccess()
{

}

void TestAwsAbstractResponse::setReply_data()
{

}

void TestAwsAbstractResponse::setReply()
{

}

void TestAwsAbstractResponse::setXmlError_data()
{

}

void TestAwsAbstractResponse::setXmlError()
{

}

void TestAwsAbstractResponse::parse_data()
{

}

void TestAwsAbstractResponse::parse()
{

}

void TestAwsAbstractResponse::replyFinished_data()
{

}

void TestAwsAbstractResponse::replyFinished()
{

}
