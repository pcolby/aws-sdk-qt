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

#include "getauthorizersrequest.h"
#include "getauthorizersrequest_p.h"
#include "getauthorizersresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetAuthorizersRequest
 * \brief The GetAuthorizersRequest class provides an interface for APIGateway GetAuthorizers requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getAuthorizers
 */

/*!
 * Constructs a copy of \a other.
 */
GetAuthorizersRequest::GetAuthorizersRequest(const GetAuthorizersRequest &other)
    : APIGatewayRequest(new GetAuthorizersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAuthorizersRequest object.
 */
GetAuthorizersRequest::GetAuthorizersRequest()
    : APIGatewayRequest(new GetAuthorizersRequestPrivate(APIGatewayRequest::GetAuthorizersAction, this))
{

}

/*!
 * \reimp
 */
bool GetAuthorizersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAuthorizersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAuthorizersRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizersResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetAuthorizersRequestPrivate
 * \brief The GetAuthorizersRequestPrivate class provides private implementation for GetAuthorizersRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetAuthorizersRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetAuthorizersRequestPrivate::GetAuthorizersRequestPrivate(
    const APIGatewayRequest::Action action, GetAuthorizersRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizersRequest
 * class' copy constructor.
 */
GetAuthorizersRequestPrivate::GetAuthorizersRequestPrivate(
    const GetAuthorizersRequestPrivate &other, GetAuthorizersRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
