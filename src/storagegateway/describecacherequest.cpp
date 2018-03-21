/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecacherequest.h"
#include "describecacherequest_p.h"
#include "describecacheresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeCacheRequest
 *
 * @brief  Implements StorageGateway DescribeCache requests.
 *
 * @see    StorageGatewayClient::describeCache
 */

/**
 * @brief  Constructs a new DescribeCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheRequest::DescribeCacheRequest(const DescribeCacheRequest &other)
    : StorageGatewayRequest(new DescribeCacheRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCacheRequest object.
 */
DescribeCacheRequest::DescribeCacheRequest()
    : StorageGatewayRequest(new DescribeCacheRequestPrivate(StorageGatewayRequest::DescribeCacheAction, this))
{

}

bool DescribeCacheRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeCacheRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCacheRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeCacheRequest instance.
 */
DescribeCacheRequestPrivate::DescribeCacheRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeCacheRequest * const q)
    : DescribeCachePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheRequest instance.
 */
DescribeCacheRequestPrivate::DescribeCacheRequestPrivate(
    const DescribeCacheRequestPrivate &other, DescribeCacheRequest * const q)
    : DescribeCachePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
