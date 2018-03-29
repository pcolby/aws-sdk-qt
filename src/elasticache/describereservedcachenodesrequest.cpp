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

#include "describereservedcachenodesrequest.h"
#include "describereservedcachenodesrequest_p.h"
#include "describereservedcachenodesresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DescribeReservedCacheNodesRequest
 *
 * @brief  Implements ElastiCache DescribeReservedCacheNodes requests.
 *
 * @see    ElastiCacheClient::describeReservedCacheNodes
 */

/**
 * @brief  Constructs a new DescribeReservedCacheNodesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedCacheNodesRequest::DescribeReservedCacheNodesRequest(const DescribeReservedCacheNodesRequest &other)
    : ElastiCacheRequest(new DescribeReservedCacheNodesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedCacheNodesRequest object.
 */
DescribeReservedCacheNodesRequest::DescribeReservedCacheNodesRequest()
    : ElastiCacheRequest(new DescribeReservedCacheNodesRequestPrivate(ElastiCacheRequest::DescribeReservedCacheNodesAction, this))
{

}

bool DescribeReservedCacheNodesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedCacheNodesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedCacheNodesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeReservedCacheNodesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedCacheNodesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedCacheNodesRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedCacheNodesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeReservedCacheNodesRequest instance.
 */
DescribeReservedCacheNodesRequestPrivate::DescribeReservedCacheNodesRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeReservedCacheNodesRequest * const q)
    : DescribeReservedCacheNodesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedCacheNodesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedCacheNodesRequest instance.
 */
DescribeReservedCacheNodesRequestPrivate::DescribeReservedCacheNodesRequestPrivate(
    const DescribeReservedCacheNodesRequestPrivate &other, DescribeReservedCacheNodesRequest * const q)
    : DescribeReservedCacheNodesPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
