// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
