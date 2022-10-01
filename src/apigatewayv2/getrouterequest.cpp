// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
