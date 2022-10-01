// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "flushstagecacherequest.h"
#include "flushstagecacherequest_p.h"
#include "flushstagecacheresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::FlushStageCacheRequest
 * \brief The FlushStageCacheRequest class provides an interface for ApiGateway FlushStageCache requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::flushStageCache
 */

/*!
 * Constructs a copy of \a other.
 */
FlushStageCacheRequest::FlushStageCacheRequest(const FlushStageCacheRequest &other)
    : ApiGatewayRequest(new FlushStageCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FlushStageCacheRequest object.
 */
FlushStageCacheRequest::FlushStageCacheRequest()
    : ApiGatewayRequest(new FlushStageCacheRequestPrivate(ApiGatewayRequest::FlushStageCacheAction, this))
{

}

/*!
 * \reimp
 */
bool FlushStageCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FlushStageCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FlushStageCacheRequest::response(QNetworkReply * const reply) const
{
    return new FlushStageCacheResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::FlushStageCacheRequestPrivate
 * \brief The FlushStageCacheRequestPrivate class provides private implementation for FlushStageCacheRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a FlushStageCacheRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
FlushStageCacheRequestPrivate::FlushStageCacheRequestPrivate(
    const ApiGatewayRequest::Action action, FlushStageCacheRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FlushStageCacheRequest
 * class' copy constructor.
 */
FlushStageCacheRequestPrivate::FlushStageCacheRequestPrivate(
    const FlushStageCacheRequestPrivate &other, FlushStageCacheRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
