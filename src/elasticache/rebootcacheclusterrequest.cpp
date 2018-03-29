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

#include "rebootcacheclusterrequest.h"
#include "rebootcacheclusterrequest_p.h"
#include "rebootcacheclusterresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  RebootCacheClusterRequest
 *
 * @brief  Implements ElastiCache RebootCacheCluster requests.
 *
 * @see    ElastiCacheClient::rebootCacheCluster
 */

/**
 * @brief  Constructs a new RebootCacheClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootCacheClusterRequest::RebootCacheClusterRequest(const RebootCacheClusterRequest &other)
    : ElastiCacheRequest(new RebootCacheClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootCacheClusterRequest object.
 */
RebootCacheClusterRequest::RebootCacheClusterRequest()
    : ElastiCacheRequest(new RebootCacheClusterRequestPrivate(ElastiCacheRequest::RebootCacheClusterAction, this))
{

}

bool RebootCacheClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootCacheClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootCacheClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * RebootCacheClusterRequest::response(QNetworkReply * const reply) const
{
    return new RebootCacheClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootCacheClusterRequestPrivate
 *
 * @brief  Private implementation for RebootCacheClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootCacheClusterRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public RebootCacheClusterRequest instance.
 */
RebootCacheClusterRequestPrivate::RebootCacheClusterRequestPrivate(
    const ElastiCacheRequest::Action action, RebootCacheClusterRequest * const q)
    : RebootCacheClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootCacheClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootCacheClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootCacheClusterRequest instance.
 */
RebootCacheClusterRequestPrivate::RebootCacheClusterRequestPrivate(
    const RebootCacheClusterRequestPrivate &other, RebootCacheClusterRequest * const q)
    : RebootCacheClusterPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
