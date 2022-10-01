// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrouteresponserequest.h"
#include "getrouteresponserequest_p.h"
#include "getrouteresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponseRequest
 * \brief The GetRouteResponseRequest class provides an interface for ApiGatewayV2 GetRouteResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRouteResponse
 */

/*!
 * Constructs a copy of \a other.
 */
GetRouteResponseRequest::GetRouteResponseRequest(const GetRouteResponseRequest &other)
    : ApiGatewayV2Request(new GetRouteResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRouteResponseRequest object.
 */
GetRouteResponseRequest::GetRouteResponseRequest()
    : ApiGatewayV2Request(new GetRouteResponseRequestPrivate(ApiGatewayV2Request::GetRouteResponseAction, this))
{

}

/*!
 * \reimp
 */
bool GetRouteResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRouteResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRouteResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetRouteResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponseRequestPrivate
 * \brief The GetRouteResponseRequestPrivate class provides private implementation for GetRouteResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetRouteResponseRequestPrivate::GetRouteResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, GetRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRouteResponseRequest
 * class' copy constructor.
 */
GetRouteResponseRequestPrivate::GetRouteResponseRequestPrivate(
    const GetRouteResponseRequestPrivate &other, GetRouteResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
