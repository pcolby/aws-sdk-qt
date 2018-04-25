/*
    Copyright 2013-2018 Paul Colby

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
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetAccountRequest
 * \brief The GetAccountRequest class provides an interface for APIGateway GetAccount requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountRequest::GetAccountRequest(const GetAccountRequest &other)
    : APIGatewayRequest(new GetAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountRequest object.
 */
GetAccountRequest::GetAccountRequest()
    : APIGatewayRequest(new GetAccountRequestPrivate(APIGatewayRequest::GetAccountAction, this))
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
 * \class QtAws::APIGateway::GetAccountRequestPrivate
 * \brief The GetAccountRequestPrivate class provides private implementation for GetAccountRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetAccountRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const APIGatewayRequest::Action action, GetAccountRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
