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

#include "describereplicationgroupsrequest.h"
#include "describereplicationgroupsrequest_p.h"
#include "describereplicationgroupsresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeReplicationGroupsRequest
 *
 * @brief  Implements ElastiCache DescribeReplicationGroups requests.
 *
 * @see    ElastiCacheClient::describeReplicationGroups
 */

/**
 * @brief  Constructs a new DescribeReplicationGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReplicationGroupsRequest::DescribeReplicationGroupsRequest(const DescribeReplicationGroupsRequest &other)
    : ElastiCacheRequest(new DescribeReplicationGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReplicationGroupsRequest object.
 */
DescribeReplicationGroupsRequest::DescribeReplicationGroupsRequest()
    : ElastiCacheRequest(new DescribeReplicationGroupsRequestPrivate(ElastiCacheRequest::DescribeReplicationGroupsAction, this))
{

}

bool DescribeReplicationGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReplicationGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReplicationGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeReplicationGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReplicationGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeReplicationGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationGroupsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeReplicationGroupsRequest instance.
 */
DescribeReplicationGroupsRequestPrivate::DescribeReplicationGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeReplicationGroupsRequest * const q)
    : DescribeReplicationGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReplicationGroupsRequest instance.
 */
DescribeReplicationGroupsRequestPrivate::DescribeReplicationGroupsRequestPrivate(
    const DescribeReplicationGroupsRequestPrivate &other, DescribeReplicationGroupsRequest * const q)
    : DescribeReplicationGroupsPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
