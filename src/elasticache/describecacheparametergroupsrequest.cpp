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

#include "describecacheparametergroupsrequest.h"
#include "describecacheparametergroupsrequest_p.h"
#include "describecacheparametergroupsresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheParameterGroupsRequest
 *
 * @brief  Implements ElastiCache DescribeCacheParameterGroups requests.
 *
 * @see    ElastiCacheClient::describeCacheParameterGroups
 */

/**
 * @brief  Constructs a new DescribeCacheParameterGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheParameterGroupsResponse::DescribeCacheParameterGroupsResponse(

/**
 * @brief  Constructs a new DescribeCacheParameterGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCacheParameterGroupsRequest::DescribeCacheParameterGroupsRequest(const DescribeCacheParameterGroupsRequest &other)
    : ElastiCacheRequest(new DescribeCacheParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCacheParameterGroupsRequest object.
 */
DescribeCacheParameterGroupsRequest::DescribeCacheParameterGroupsRequest()
    : ElastiCacheRequest(new DescribeCacheParameterGroupsRequestPrivate(ElastiCacheRequest::DescribeCacheParameterGroupsAction, this))
{

}

bool DescribeCacheParameterGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCacheParameterGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCacheParameterGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DescribeCacheParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheParameterGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCacheParameterGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeCacheParameterGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParameterGroupsRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DescribeCacheParameterGroupsRequest instance.
 */
DescribeCacheParameterGroupsRequestPrivate::DescribeCacheParameterGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheParameterGroupsRequest * const q)
    : DescribeCacheParameterGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParameterGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheParameterGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCacheParameterGroupsRequest instance.
 */
DescribeCacheParameterGroupsRequestPrivate::DescribeCacheParameterGroupsRequestPrivate(
    const DescribeCacheParameterGroupsRequestPrivate &other, DescribeCacheParameterGroupsRequest * const q)
    : DescribeCacheParameterGroupsPrivate(other, q)
{

}
