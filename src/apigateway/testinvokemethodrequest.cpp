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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testinvokemethodrequest.h"
#include "testinvokemethodrequest_p.h"
#include "testinvokemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::TestInvokeMethodRequest
 * \brief The TestInvokeMethodRequest class provides an interface for APIGateway TestInvokeMethod requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::testInvokeMethod
 */

/*!
 * Constructs a copy of \a other.
 */
TestInvokeMethodRequest::TestInvokeMethodRequest(const TestInvokeMethodRequest &other)
    : APIGatewayRequest(new TestInvokeMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestInvokeMethodRequest object.
 */
TestInvokeMethodRequest::TestInvokeMethodRequest()
    : APIGatewayRequest(new TestInvokeMethodRequestPrivate(APIGatewayRequest::TestInvokeMethodAction, this))
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
 * \class QtAws::APIGateway::TestInvokeMethodRequestPrivate
 * \brief The TestInvokeMethodRequestPrivate class provides private implementation for TestInvokeMethodRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a TestInvokeMethodRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
TestInvokeMethodRequestPrivate::TestInvokeMethodRequestPrivate(
    const APIGatewayRequest::Action action, TestInvokeMethodRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
