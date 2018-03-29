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

#include "deletecachesecuritygrouprequest.h"
#include "deletecachesecuritygrouprequest_p.h"
#include "deletecachesecuritygroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DeleteCacheSecurityGroupRequest
 *
 * @brief  Implements ElastiCache DeleteCacheSecurityGroup requests.
 *
 * @see    ElastiCacheClient::deleteCacheSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteCacheSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCacheSecurityGroupRequest::DeleteCacheSecurityGroupRequest(const DeleteCacheSecurityGroupRequest &other)
    : ElastiCacheRequest(new DeleteCacheSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCacheSecurityGroupRequest object.
 */
DeleteCacheSecurityGroupRequest::DeleteCacheSecurityGroupRequest()
    : ElastiCacheRequest(new DeleteCacheSecurityGroupRequestPrivate(ElastiCacheRequest::DeleteCacheSecurityGroupAction, this))
{

}

bool DeleteCacheSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCacheSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCacheSecurityGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCacheSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCacheSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteCacheSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheSecurityGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DeleteCacheSecurityGroupRequest instance.
 */
DeleteCacheSecurityGroupRequestPrivate::DeleteCacheSecurityGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheSecurityGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCacheSecurityGroupRequest instance.
 */
DeleteCacheSecurityGroupRequestPrivate::DeleteCacheSecurityGroupRequestPrivate(
    const DeleteCacheSecurityGroupRequestPrivate &other, DeleteCacheSecurityGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
