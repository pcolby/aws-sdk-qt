/*
    Copyright 2013-2020 Paul Colby

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

#include "getbasepathmappingrequest.h"
#include "getbasepathmappingrequest_p.h"
#include "getbasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetBasePathMappingRequest
 * \brief The GetBasePathMappingRequest class provides an interface for APIGateway GetBasePathMapping requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getBasePathMapping
 */

/*!
 * Constructs a copy of \a other.
 */
GetBasePathMappingRequest::GetBasePathMappingRequest(const GetBasePathMappingRequest &other)
    : APIGatewayRequest(new GetBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBasePathMappingRequest object.
 */
GetBasePathMappingRequest::GetBasePathMappingRequest()
    : APIGatewayRequest(new GetBasePathMappingRequestPrivate(APIGatewayRequest::GetBasePathMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetBasePathMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBasePathMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetBasePathMappingResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetBasePathMappingRequestPrivate
 * \brief The GetBasePathMappingRequestPrivate class provides private implementation for GetBasePathMappingRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetBasePathMappingRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetBasePathMappingRequestPrivate::GetBasePathMappingRequestPrivate(
    const APIGatewayRequest::Action action, GetBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBasePathMappingRequest
 * class' copy constructor.
 */
GetBasePathMappingRequestPrivate::GetBasePathMappingRequestPrivate(
    const GetBasePathMappingRequestPrivate &other, GetBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
