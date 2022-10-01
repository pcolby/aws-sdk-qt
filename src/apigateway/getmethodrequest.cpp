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

#include "getmethodrequest.h"
#include "getmethodrequest_p.h"
#include "getmethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetMethodRequest
 * \brief The GetMethodRequest class provides an interface for ApiGateway GetMethod requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getMethod
 */

/*!
 * Constructs a copy of \a other.
 */
GetMethodRequest::GetMethodRequest(const GetMethodRequest &other)
    : ApiGatewayRequest(new GetMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMethodRequest object.
 */
GetMethodRequest::GetMethodRequest()
    : ApiGatewayRequest(new GetMethodRequestPrivate(ApiGatewayRequest::GetMethodAction, this))
{

}

/*!
 * \reimp
 */
bool GetMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMethodRequest::response(QNetworkReply * const reply) const
{
    return new GetMethodResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetMethodRequestPrivate
 * \brief The GetMethodRequestPrivate class provides private implementation for GetMethodRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetMethodRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetMethodRequestPrivate::GetMethodRequestPrivate(
    const ApiGatewayRequest::Action action, GetMethodRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMethodRequest
 * class' copy constructor.
 */
GetMethodRequestPrivate::GetMethodRequestPrivate(
    const GetMethodRequestPrivate &other, GetMethodRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
