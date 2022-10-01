// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getroutesrequest.h"
#include "getroutesrequest_p.h"
#include "getroutesresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRoutesRequest
 * \brief The GetRoutesRequest class provides an interface for ApiGatewayV2 GetRoutes requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRoutes
 */

/*!
 * Constructs a copy of \a other.
 */
GetRoutesRequest::GetRoutesRequest(const GetRoutesRequest &other)
    : ApiGatewayV2Request(new GetRoutesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRoutesRequest object.
 */
GetRoutesRequest::GetRoutesRequest()
    : ApiGatewayV2Request(new GetRoutesRequestPrivate(ApiGatewayV2Request::GetRoutesAction, this))
{

}

/*!
 * \reimp
 */
bool GetRoutesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRoutesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoutesRequest::response(QNetworkReply * const reply) const
{
    return new GetRoutesResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::GetRoutesRequestPrivate
 * \brief The GetRoutesRequestPrivate class provides private implementation for GetRoutesRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRoutesRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
GetRoutesRequestPrivate::GetRoutesRequestPrivate(
    const ApiGatewayV2Request::Action action, GetRoutesRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRoutesRequest
 * class' copy constructor.
 */
GetRoutesRequestPrivate::GetRoutesRequestPrivate(
    const GetRoutesRequestPrivate &other, GetRoutesRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
