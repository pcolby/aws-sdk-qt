// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouterequest.h"
#include "deleterouterequest_p.h"
#include "deleterouteresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequest
 * \brief The DeleteRouteRequest class provides an interface for ApiGatewayV2 DeleteRoute requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRoute
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteRequest::DeleteRouteRequest(const DeleteRouteRequest &other)
    : ApiGatewayV2Request(new DeleteRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteRequest object.
 */
DeleteRouteRequest::DeleteRouteRequest()
    : ApiGatewayV2Request(new DeleteRouteRequestPrivate(ApiGatewayV2Request::DeleteRouteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestPrivate
 * \brief The DeleteRouteRequestPrivate class provides private implementation for DeleteRouteRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteRouteRequestPrivate::DeleteRouteRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteRequest
 * class' copy constructor.
 */
DeleteRouteRequestPrivate::DeleteRouteRequestPrivate(
    const DeleteRouteRequestPrivate &other, DeleteRouteRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
