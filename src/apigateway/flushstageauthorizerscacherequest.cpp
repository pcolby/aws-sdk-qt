/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "flushstageauthorizerscacherequest.h"
#include "flushstageauthorizerscacherequest_p.h"
#include "flushstageauthorizerscacheresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::FlushStageAuthorizersCacheRequest
 *
 * \brief The FlushStageAuthorizersCacheRequest class provides an interface for APIGateway FlushStageAuthorizersCache requests.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::flushStageAuthorizersCache
 */

/*!
 * @brief  Constructs a new FlushStageAuthorizersCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
FlushStageAuthorizersCacheRequest::FlushStageAuthorizersCacheRequest(const FlushStageAuthorizersCacheRequest &other)
    : APIGatewayRequest(new FlushStageAuthorizersCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new FlushStageAuthorizersCacheRequest object.
 */
FlushStageAuthorizersCacheRequest::FlushStageAuthorizersCacheRequest()
    : APIGatewayRequest(new FlushStageAuthorizersCacheRequestPrivate(APIGatewayRequest::FlushStageAuthorizersCacheAction, this))
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
 * @brief  Construct an FlushStageAuthorizersCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An FlushStageAuthorizersCacheResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * FlushStageAuthorizersCacheRequest::response(QNetworkReply * const reply) const
{
    return new FlushStageAuthorizersCacheResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  FlushStageAuthorizersCacheRequestPrivate
 *
 * @brief  Private implementation for FlushStageAuthorizersCacheRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new FlushStageAuthorizersCacheRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public FlushStageAuthorizersCacheRequest instance.
 */
FlushStageAuthorizersCacheRequestPrivate::FlushStageAuthorizersCacheRequestPrivate(
    const APIGatewayRequest::Action action, FlushStageAuthorizersCacheRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new FlushStageAuthorizersCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the FlushStageAuthorizersCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public FlushStageAuthorizersCacheRequest instance.
 */
FlushStageAuthorizersCacheRequestPrivate::FlushStageAuthorizersCacheRequestPrivate(
    const FlushStageAuthorizersCacheRequestPrivate &other, FlushStageAuthorizersCacheRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
