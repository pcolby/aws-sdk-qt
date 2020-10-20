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

#include "updaterouterequest.h"
#include "updaterouterequest_p.h"
#include "updaterouteresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteRequest
 * \brief The UpdateRouteRequest class provides an interface for ApiGatewayV2 UpdateRoute requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateRoute
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRouteRequest::UpdateRouteRequest(const UpdateRouteRequest &other)
    : ApiGatewayV2Request(new UpdateRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRouteRequest object.
 */
UpdateRouteRequest::UpdateRouteRequest()
    : ApiGatewayV2Request(new UpdateRouteRequestPrivate(ApiGatewayV2Request::UpdateRouteAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRouteRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRouteResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteRequestPrivate
 * \brief The UpdateRouteRequestPrivate class provides private implementation for UpdateRouteRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateRouteRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateRouteRequestPrivate::UpdateRouteRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRouteRequest
 * class' copy constructor.
 */
UpdateRouteRequestPrivate::UpdateRouteRequestPrivate(
    const UpdateRouteRequestPrivate &other, UpdateRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
