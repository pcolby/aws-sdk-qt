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

#include "updaterouteresponserequest.h"
#include "updaterouteresponserequest_p.h"
#include "updaterouteresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponseRequest
 * \brief The UpdateRouteResponseRequest class provides an interface for ApiGatewayV2 UpdateRouteResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateRouteResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRouteResponseRequest::UpdateRouteResponseRequest(const UpdateRouteResponseRequest &other)
    : ApiGatewayV2Request(new UpdateRouteResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRouteResponseRequest object.
 */
UpdateRouteResponseRequest::UpdateRouteResponseRequest()
    : ApiGatewayV2Request(new UpdateRouteResponseRequestPrivate(ApiGatewayV2Request::UpdateRouteResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRouteResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRouteResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRouteResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRouteResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponseRequestPrivate
 * \brief The UpdateRouteResponseRequestPrivate class provides private implementation for UpdateRouteResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateRouteResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateRouteResponseRequestPrivate::UpdateRouteResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRouteResponseRequest
 * class' copy constructor.
 */
UpdateRouteResponseRequestPrivate::UpdateRouteResponseRequestPrivate(
    const UpdateRouteResponseRequestPrivate &other, UpdateRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
