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

#include "refreshcacherequest.h"
#include "refreshcacherequest_p.h"
#include "refreshcacheresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  RefreshCacheRequest
 *
 * @brief  Implements StorageGateway RefreshCache requests.
 *
 * @see    StorageGatewayClient::refreshCache
 */

/**
 * @brief  Constructs a new RefreshCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RefreshCacheRequest::RefreshCacheRequest(const RefreshCacheRequest &other)
    : StorageGatewayRequest(new RefreshCacheRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RefreshCacheRequest object.
 */
RefreshCacheRequest::RefreshCacheRequest()
    : StorageGatewayRequest(new RefreshCacheRequestPrivate(StorageGatewayRequest::RefreshCacheAction, this))
{

}

bool RefreshCacheRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RefreshCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RefreshCacheResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * RefreshCacheRequest::response(QNetworkReply * const reply) const
{
    return new RefreshCacheResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RefreshCacheRequestPrivate
 *
 * @brief  Private implementation for RefreshCacheRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RefreshCacheRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public RefreshCacheRequest instance.
 */
RefreshCacheRequestPrivate::RefreshCacheRequestPrivate(
    const StorageGatewayRequest::Action action, RefreshCacheRequest * const q)
    : RefreshCachePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RefreshCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RefreshCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RefreshCacheRequest instance.
 */
RefreshCacheRequestPrivate::RefreshCacheRequestPrivate(
    const RefreshCacheRequestPrivate &other, RefreshCacheRequest * const q)
    : RefreshCachePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
