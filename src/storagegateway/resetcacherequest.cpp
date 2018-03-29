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

#include "resetcacherequest.h"
#include "resetcacherequest_p.h"
#include "resetcacheresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ResetCacheRequest
 *
 * @brief  Implements StorageGateway ResetCache requests.
 *
 * @see    StorageGatewayClient::resetCache
 */

/**
 * @brief  Constructs a new ResetCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetCacheRequest::ResetCacheRequest(const ResetCacheRequest &other)
    : StorageGatewayRequest(new ResetCacheRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetCacheRequest object.
 */
ResetCacheRequest::ResetCacheRequest()
    : StorageGatewayRequest(new ResetCacheRequestPrivate(StorageGatewayRequest::ResetCacheAction, this))
{

}

bool ResetCacheRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetCacheResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetCacheRequest::response(QNetworkReply * const reply) const
{
    return new ResetCacheResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetCacheRequestPrivate
 *
 * @brief  Private implementation for ResetCacheRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetCacheRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ResetCacheRequest instance.
 */
ResetCacheRequestPrivate::ResetCacheRequestPrivate(
    const StorageGatewayRequest::Action action, ResetCacheRequest * const q)
    : ResetCachePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetCacheRequest instance.
 */
ResetCacheRequestPrivate::ResetCacheRequestPrivate(
    const ResetCacheRequestPrivate &other, ResetCacheRequest * const q)
    : ResetCachePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
