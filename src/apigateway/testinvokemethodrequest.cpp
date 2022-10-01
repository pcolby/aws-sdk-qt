/*
    Copyright 2013-2021 Paul Colby

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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testinvokemethodrequest.h"
#include "testinvokemethodrequest_p.h"
#include "testinvokemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::TestInvokeMethodRequest
 * \brief The TestInvokeMethodRequest class provides an interface for ApiGateway TestInvokeMethod requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::testInvokeMethod
 */

/*!
 * Constructs a copy of \a other.
 */
TestInvokeMethodRequest::TestInvokeMethodRequest(const TestInvokeMethodRequest &other)
    : ApiGatewayRequest(new TestInvokeMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestInvokeMethodRequest object.
 */
TestInvokeMethodRequest::TestInvokeMethodRequest()
    : ApiGatewayRequest(new TestInvokeMethodRequestPrivate(ApiGatewayRequest::TestInvokeMethodAction, this))
{

}

/*!
 * \reimp
 */
bool TestInvokeMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestInvokeMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestInvokeMethodRequest::response(QNetworkReply * const reply) const
{
    return new TestInvokeMethodResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::TestInvokeMethodRequestPrivate
 * \brief The TestInvokeMethodRequestPrivate class provides private implementation for TestInvokeMethodRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a TestInvokeMethodRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
TestInvokeMethodRequestPrivate::TestInvokeMethodRequestPrivate(
    const ApiGatewayRequest::Action action, TestInvokeMethodRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestInvokeMethodRequest
 * class' copy constructor.
 */
TestInvokeMethodRequestPrivate::TestInvokeMethodRequestPrivate(
    const TestInvokeMethodRequestPrivate &other, TestInvokeMethodRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
