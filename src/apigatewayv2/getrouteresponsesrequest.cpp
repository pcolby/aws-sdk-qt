// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
