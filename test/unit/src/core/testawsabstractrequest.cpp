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

#include "testawsabstractrequest.h"

#include "core/awsabstractrequest.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractrequest_p.h"
#endif

// Bare minimum concrete mock class.
class MockRequest : public AwsAbstractRequest {
public:
    MockRequest() : AwsAbstractRequest() { }
    MockRequest(QObject * const parent) : AwsAbstractRequest(parent) { }
    MockRequest(AwsAbstractRequestPrivate * const d, QObject * const parent)
        : AwsAbstractRequest(d, parent) { }
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply)
        return NULL;
    }
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const {
        return QNetworkRequest(endpoint);
    }
};

void TestAwsAbstractRequest::construct()
{
    {   // Verify the default parent argument is NULL.
        MockRequest request;
        QCOMPARE(request.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockRequest request(this);
        QCOMPARE(request.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::construct_d_ptr()
{
    MockRequest temporaryRequest;
    AwsAbstractRequestPrivate * const requestPrivate =
        new AwsAbstractRequestPrivate(&temporaryRequest);
    MockRequest request(requestPrivate, this);
    QCOMPARE(request.d_func(), requestPrivate);
    QCOMPARE(request.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractRequest::data_data()
{

}

void TestAwsAbstractRequest::data()
{

}

void TestAwsAbstractRequest::isValid_data()
{

}

void TestAwsAbstractRequest::isValid()
{

}

void TestAwsAbstractRequest::networkRequest_data()
{

}

void TestAwsAbstractRequest::networkRequest()
{

}

void TestAwsAbstractRequest::operation_data()
{

}

void TestAwsAbstractRequest::operation()
{

}

void TestAwsAbstractRequest::send_data()
{

}

void TestAwsAbstractRequest::send()
{

}

void TestAwsAbstractRequest::response_data()
{

}

void TestAwsAbstractRequest::response()
{

}

void TestAwsAbstractRequest::unsignedRequest_data()
{

}

void TestAwsAbstractRequest::unsignedRequest()
{

}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::post()
{

}

void TestAwsAbstractRequest::put()
{

}
#endif
