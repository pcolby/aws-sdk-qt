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

#include "flushstagecacherequest.h"
#include "flushstagecacherequest_p.h"
#include "flushstagecacheresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  FlushStageCacheRequest
 *
 * @brief  Implements APIGateway FlushStageCache requests.
 *
 * @see    APIGatewayClient::flushStageCache
 */

/**
 * @brief  Constructs a new FlushStageCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
FlushStageCacheRequest::FlushStageCacheRequest(const FlushStageCacheRequest &other)
    : APIGatewayRequest(new FlushStageCacheRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new FlushStageCacheRequest object.
 */
FlushStageCacheRequest::FlushStageCacheRequest()
    : APIGatewayRequest(new FlushStageCacheRequestPrivate(APIGatewayRequest::FlushStageCacheAction, this))
{

}

bool FlushStageCacheRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an FlushStageCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An FlushStageCacheResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * FlushStageCacheRequest::response(QNetworkReply * const reply) const
{
    return new FlushStageCacheResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  FlushStageCacheRequestPrivate
 *
 * @brief  Private implementation for FlushStageCacheRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FlushStageCacheRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public FlushStageCacheRequest instance.
 */
FlushStageCacheRequestPrivate::FlushStageCacheRequestPrivate(
    const APIGatewayRequest::Action action, FlushStageCacheRequest * const q)
    : FlushStageCachePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new FlushStageCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the FlushStageCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public FlushStageCacheRequest instance.
 */
FlushStageCacheRequestPrivate::FlushStageCacheRequestPrivate(
    const FlushStageCacheRequestPrivate &other, FlushStageCacheRequest * const q)
    : FlushStageCachePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
