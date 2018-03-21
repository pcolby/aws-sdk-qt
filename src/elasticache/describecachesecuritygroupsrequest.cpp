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

#include "describecachesecuritygroupsrequest.h"
#include "describecachesecuritygroupsrequest_p.h"
#include "describecachesecuritygroupsresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheSecurityGroupsRequest
 *
 * @brief  Implements ElastiCache DescribeCacheSecurityGroups requests.
 *
 * @see    ElastiCacheClient::describeCacheSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeCacheSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheSecurityGroupsResponse::DescribeCacheSecurityGroupsResponse(

/**
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheSecurityGroupsRequest::DescribeCacheSecurityGroupsRequest(const DescribeCacheSecurityGroupsRequest &other)
    : ElastiCacheRequest(new DescribeCacheSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequest object.
 */
DescribeCacheSecurityGroupsRequest::DescribeCacheSecurityGroupsRequest()
    : ElastiCacheRequest(new DescribeCacheSecurityGroupsRequestPrivate(ElastiCacheRequest::DescribeCacheSecurityGroupsAction, this))
{

}

bool DescribeCacheSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCacheSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheSecurityGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeCacheSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCacheSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheSecurityGroupsRequest instance.
 */
DescribeCacheSecurityGroupsRequestPrivate::DescribeCacheSecurityGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheSecurityGroupsRequest * const q)
    : DescribeCacheSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheSecurityGroupsRequest instance.
 */
DescribeCacheSecurityGroupsRequestPrivate::DescribeCacheSecurityGroupsRequestPrivate(
    const DescribeCacheSecurityGroupsRequestPrivate &other, DescribeCacheSecurityGroupsRequest * const q)
    : DescribeCacheSecurityGroupsPrivate(other, q)
{

}
