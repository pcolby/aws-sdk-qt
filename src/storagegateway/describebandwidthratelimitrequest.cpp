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

#include "describebandwidthratelimitrequest.h"
#include "describebandwidthratelimitrequest_p.h"
#include "describebandwidthratelimitresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeBandwidthRateLimitRequest
 *
 * @brief  Implements StorageGateway DescribeBandwidthRateLimit requests.
 *
 * @see    StorageGatewayClient::describeBandwidthRateLimit
 */

/**
 * @brief  Constructs a new DescribeBandwidthRateLimitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBandwidthRateLimitRequest::DescribeBandwidthRateLimitRequest(const DescribeBandwidthRateLimitRequest &other)
    : StorageGatewayRequest(new DescribeBandwidthRateLimitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBandwidthRateLimitRequest object.
 */
DescribeBandwidthRateLimitRequest::DescribeBandwidthRateLimitRequest()
    : StorageGatewayRequest(new DescribeBandwidthRateLimitRequestPrivate(StorageGatewayRequest::DescribeBandwidthRateLimitAction, this))
{

}

bool DescribeBandwidthRateLimitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBandwidthRateLimitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBandwidthRateLimitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeBandwidthRateLimitRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBandwidthRateLimitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBandwidthRateLimitRequestPrivate
 *
 * @brief  Private implementation for DescribeBandwidthRateLimitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBandwidthRateLimitRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeBandwidthRateLimitRequest instance.
 */
DescribeBandwidthRateLimitRequestPrivate::DescribeBandwidthRateLimitRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeBandwidthRateLimitRequest * const q)
    : DescribeBandwidthRateLimitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBandwidthRateLimitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBandwidthRateLimitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBandwidthRateLimitRequest instance.
 */
DescribeBandwidthRateLimitRequestPrivate::DescribeBandwidthRateLimitRequestPrivate(
    const DescribeBandwidthRateLimitRequestPrivate &other, DescribeBandwidthRateLimitRequest * const q)
    : DescribeBandwidthRateLimitPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
