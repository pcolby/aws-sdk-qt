// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetauthorizerscacherequest.h"
#include "resetauthorizerscacherequest_p.h"
#include "resetauthorizerscacheresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ResetAuthorizersCacheRequest
 * \brief The ResetAuthorizersCacheRequest class provides an interface for ApiGatewayV2 ResetAuthorizersCache requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::resetAuthorizersCache
 */

/*!
 * Constructs a copy of \a other.
 */
ResetAuthorizersCacheRequest::ResetAuthorizersCacheRequest(const ResetAuthorizersCacheRequest &other)
    : ApiGatewayV2Request(new ResetAuthorizersCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetAuthorizersCacheRequest object.
 */
ResetAuthorizersCacheRequest::ResetAuthorizersCacheRequest()
    : ApiGatewayV2Request(new ResetAuthorizersCacheRequestPrivate(ApiGatewayV2Request::ResetAuthorizersCacheAction, this))
{

}

/*!
 * \reimp
 */
bool ResetAuthorizersCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetAuthorizersCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetAuthorizersCacheRequest::response(QNetworkReply * const reply) const
{
    return new ResetAuthorizersCacheResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::ResetAuthorizersCacheRequestPrivate
 * \brief The ResetAuthorizersCacheRequestPrivate class provides private implementation for ResetAuthorizersCacheRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ResetAuthorizersCacheRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
ResetAuthorizersCacheRequestPrivate::ResetAuthorizersCacheRequestPrivate(
    const ApiGatewayV2Request::Action action, ResetAuthorizersCacheRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetAuthorizersCacheRequest
 * class' copy constructor.
 */
ResetAuthorizersCacheRequestPrivate::ResetAuthorizersCacheRequestPrivate(
    const ResetAuthorizersCacheRequestPrivate &other, ResetAuthorizersCacheRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
