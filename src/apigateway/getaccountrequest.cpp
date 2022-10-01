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

#include "getaccountrequest.h"
#include "getaccountrequest_p.h"
#include "getaccountresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetAccountRequest
 * \brief The GetAccountRequest class provides an interface for ApiGateway GetAccount requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountRequest::GetAccountRequest(const GetAccountRequest &other)
    : ApiGatewayRequest(new GetAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountRequest object.
 */
GetAccountRequest::GetAccountRequest()
    : ApiGatewayRequest(new GetAccountRequestPrivate(ApiGatewayRequest::GetAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetAccountRequestPrivate
 * \brief The GetAccountRequestPrivate class provides private implementation for GetAccountRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetAccountRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const ApiGatewayRequest::Action action, GetAccountRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountRequest
 * class' copy constructor.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const GetAccountRequestPrivate &other, GetAccountRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
