/*
    Copyright 2013-2018 Paul Colby

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

#include "flushstagecacherequest.h"
#include "flushstagecacherequest_p.h"
#include "flushstagecacheresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::FlushStageCacheRequest
 * \brief The FlushStageCacheRequest class provides an interface for APIGateway FlushStageCache requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::flushStageCache
 */

/*!
 * Constructs a copy of \a other.
 */
FlushStageCacheRequest::FlushStageCacheRequest(const FlushStageCacheRequest &other)
    : APIGatewayRequest(new FlushStageCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FlushStageCacheRequest object.
 */
FlushStageCacheRequest::FlushStageCacheRequest()
    : APIGatewayRequest(new FlushStageCacheRequestPrivate(APIGatewayRequest::FlushStageCacheAction, this))
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
 * \class QtAws::APIGateway::FlushStageCacheRequestPrivate
 * \brief The FlushStageCacheRequestPrivate class provides private implementation for FlushStageCacheRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a FlushStageCacheRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
FlushStageCacheRequestPrivate::FlushStageCacheRequestPrivate(
    const APIGatewayRequest::Action action, FlushStageCacheRequest * const q)
    : APIGatewayRequestPrivate(action, q)
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
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
