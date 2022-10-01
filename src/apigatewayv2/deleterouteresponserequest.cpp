// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouteresponserequest.h"
#include "deleterouteresponserequest_p.h"
#include "deleterouteresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteResponseRequest
 * \brief The DeleteRouteResponseRequest class provides an interface for ApiGatewayV2 DeleteRouteResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteResponseRequest::DeleteRouteResponseRequest(const DeleteRouteResponseRequest &other)
    : ApiGatewayV2Request(new DeleteRouteResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteResponseRequest object.
 */
DeleteRouteResponseRequest::DeleteRouteResponseRequest()
    : ApiGatewayV2Request(new DeleteRouteResponseRequestPrivate(ApiGatewayV2Request::DeleteRouteResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteResponseRequestPrivate
 * \brief The DeleteRouteResponseRequestPrivate class provides private implementation for DeleteRouteResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
DeleteRouteResponseRequestPrivate::DeleteRouteResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, DeleteRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteResponseRequest
 * class' copy constructor.
 */
DeleteRouteResponseRequestPrivate::DeleteRouteResponseRequestPrivate(
    const DeleteRouteResponseRequestPrivate &other, DeleteRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
