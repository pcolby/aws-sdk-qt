/*
    Copyright 2013-2021 Paul Colby

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

#include "flushstageauthorizerscacherequest.h"
#include "flushstageauthorizerscacherequest_p.h"
#include "flushstageauthorizerscacheresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::FlushStageAuthorizersCacheRequest
 * \brief The FlushStageAuthorizersCacheRequest class provides an interface for ApiGateway FlushStageAuthorizersCache requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::flushStageAuthorizersCache
 */

/*!
 * Constructs a copy of \a other.
 */
FlushStageAuthorizersCacheRequest::FlushStageAuthorizersCacheRequest(const FlushStageAuthorizersCacheRequest &other)
    : ApiGatewayRequest(new FlushStageAuthorizersCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FlushStageAuthorizersCacheRequest object.
 */
FlushStageAuthorizersCacheRequest::FlushStageAuthorizersCacheRequest()
    : ApiGatewayRequest(new FlushStageAuthorizersCacheRequestPrivate(ApiGatewayRequest::FlushStageAuthorizersCacheAction, this))
{

}

/*!
 * \reimp
 */
bool FlushStageAuthorizersCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FlushStageAuthorizersCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FlushStageAuthorizersCacheRequest::response(QNetworkReply * const reply) const
{
    return new FlushStageAuthorizersCacheResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::FlushStageAuthorizersCacheRequestPrivate
 * \brief The FlushStageAuthorizersCacheRequestPrivate class provides private implementation for FlushStageAuthorizersCacheRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a FlushStageAuthorizersCacheRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
FlushStageAuthorizersCacheRequestPrivate::FlushStageAuthorizersCacheRequestPrivate(
    const ApiGatewayRequest::Action action, FlushStageAuthorizersCacheRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FlushStageAuthorizersCacheRequest
 * class' copy constructor.
 */
FlushStageAuthorizersCacheRequestPrivate::FlushStageAuthorizersCacheRequestPrivate(
    const FlushStageAuthorizersCacheRequestPrivate &other, FlushStageAuthorizersCacheRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
