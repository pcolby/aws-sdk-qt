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

#include "getgatewayresponsesrequest.h"
#include "getgatewayresponsesrequest_p.h"
#include "getgatewayresponsesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetGatewayResponsesRequest
 * \brief The GetGatewayResponsesRequest class provides an interface for APIGateway GetGatewayResponses requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getGatewayResponses
 */

/*!
 * Constructs a copy of \a other.
 */
GetGatewayResponsesRequest::GetGatewayResponsesRequest(const GetGatewayResponsesRequest &other)
    : APIGatewayRequest(new GetGatewayResponsesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGatewayResponsesRequest object.
 */
GetGatewayResponsesRequest::GetGatewayResponsesRequest()
    : APIGatewayRequest(new GetGatewayResponsesRequestPrivate(APIGatewayRequest::GetGatewayResponsesAction, this))
{

}

/*!
 * \reimp
 */
bool GetGatewayResponsesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGatewayResponsesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGatewayResponsesRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponsesResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetGatewayResponsesRequestPrivate
 * \brief The GetGatewayResponsesRequestPrivate class provides private implementation for GetGatewayResponsesRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetGatewayResponsesRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetGatewayResponsesRequestPrivate::GetGatewayResponsesRequestPrivate(
    const APIGatewayRequest::Action action, GetGatewayResponsesRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponsesRequest
 * class' copy constructor.
 */
GetGatewayResponsesRequestPrivate::GetGatewayResponsesRequestPrivate(
    const GetGatewayResponsesRequestPrivate &other, GetGatewayResponsesRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
