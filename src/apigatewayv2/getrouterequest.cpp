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

#include "getrouterequest.h"
#include "getrouterequest_p.h"
#include "getrouteresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteRequest
 * \brief The GetRouteRequest class provides an interface for ApiGatewayV2 GetRoute requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRoute
 */

/*!
 * Constructs a copy of \a other.
 */
GetRouteRequest::GetRouteRequest(const GetRouteRequest &other)
    : ApiGatewayV2Request(new GetRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRouteRequest object.
 */
GetRouteRequest::GetRouteRequest()
    : ApiGatewayV2Request(new GetRouteRequestPrivate(ApiGatewayV2Request::GetRouteAction, this))
{

}

/*!
 * \reimp
 */
bool GetRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRouteRequest::response(QNetworkReply * const reply) const
{
    return new GetRouteResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteRequestPrivate
 * \brief The GetRouteRequestPrivate class provides private implementation for GetRouteRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetRouteRequestPrivate::GetRouteRequestPrivate(
    const ApiGatewayV2Request::Action action, GetRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRouteRequest
 * class' copy constructor.
 */
GetRouteRequestPrivate::GetRouteRequestPrivate(
    const GetRouteRequestPrivate &other, GetRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
