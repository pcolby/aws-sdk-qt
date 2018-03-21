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

#include "describereservedcachenodesofferingsrequest.h"
#include "describereservedcachenodesofferingsrequest_p.h"
#include "describereservedcachenodesofferingsresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeReservedCacheNodesOfferingsRequest
 *
 * @brief  Implements ElastiCache DescribeReservedCacheNodesOfferings requests.
 *
 * @see    ElastiCacheClient::describeReservedCacheNodesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedCacheNodesOfferingsRequest::DescribeReservedCacheNodesOfferingsRequest(const DescribeReservedCacheNodesOfferingsRequest &other)
    : ElastiCacheRequest(new DescribeReservedCacheNodesOfferingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequest object.
 */
DescribeReservedCacheNodesOfferingsRequest::DescribeReservedCacheNodesOfferingsRequest()
    : ElastiCacheRequest(new DescribeReservedCacheNodesOfferingsRequestPrivate(ElastiCacheRequest::DescribeReservedCacheNodesOfferingsAction, this))
{

}

bool DescribeReservedCacheNodesOfferingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedCacheNodesOfferingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedCacheNodesOfferingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeReservedCacheNodesOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedCacheNodesOfferingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedCacheNodesOfferingsRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedCacheNodesOfferingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeReservedCacheNodesOfferingsRequest instance.
 */
DescribeReservedCacheNodesOfferingsRequestPrivate::DescribeReservedCacheNodesOfferingsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeReservedCacheNodesOfferingsRequest * const q)
    : DescribeReservedCacheNodesOfferingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesOfferingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedCacheNodesOfferingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedCacheNodesOfferingsRequest instance.
 */
DescribeReservedCacheNodesOfferingsRequestPrivate::DescribeReservedCacheNodesOfferingsRequestPrivate(
    const DescribeReservedCacheNodesOfferingsRequestPrivate &other, DescribeReservedCacheNodesOfferingsRequest * const q)
    : DescribeReservedCacheNodesOfferingsPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
