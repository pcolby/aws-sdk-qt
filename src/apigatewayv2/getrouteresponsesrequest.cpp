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

#include "getrouteresponsesrequest.h"
#include "getrouteresponsesrequest_p.h"
#include "getrouteresponsesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsesRequest
 * \brief The GetRouteResponsesRequest class provides an interface for ApiGatewayV2 GetRouteResponses requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRouteResponses
 */

/*!
 * Constructs a copy of \a other.
 */
GetRouteResponsesRequest::GetRouteResponsesRequest(const GetRouteResponsesRequest &other)
    : ApiGatewayV2Request(new GetRouteResponsesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRouteResponsesRequest object.
 */
GetRouteResponsesRequest::GetRouteResponsesRequest()
    : ApiGatewayV2Request(new GetRouteResponsesRequestPrivate(ApiGatewayV2Request::GetRouteResponsesAction, this))
{

}

/*!
 * \reimp
 */
bool GetRouteResponsesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRouteResponsesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRouteResponsesRequest::response(QNetworkReply * const reply) const
{
    return new GetRouteResponsesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsesRequestPrivate
 * \brief The GetRouteResponsesRequestPrivate class provides private implementation for GetRouteResponsesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponsesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetRouteResponsesRequestPrivate::GetRouteResponsesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetRouteResponsesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRouteResponsesRequest
 * class' copy constructor.
 */
GetRouteResponsesRequestPrivate::GetRouteResponsesRequestPrivate(
    const GetRouteResponsesRequestPrivate &other, GetRouteResponsesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
