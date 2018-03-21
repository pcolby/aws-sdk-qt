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

#include "createcachesecuritygrouprequest.h"
#include "createcachesecuritygrouprequest_p.h"
#include "createcachesecuritygroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  CreateCacheSecurityGroupRequest
 *
 * @brief  Implements ElastiCache CreateCacheSecurityGroup requests.
 *
 * @see    ElastiCacheClient::createCacheSecurityGroup
 */

/**
 * @brief  Constructs a new CreateCacheSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCacheSecurityGroupResponse::CreateCacheSecurityGroupResponse(

/**
 * @brief  Constructs a new CreateCacheSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCacheSecurityGroupRequest::CreateCacheSecurityGroupRequest(const CreateCacheSecurityGroupRequest &other)
    : ElastiCacheRequest(new CreateCacheSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCacheSecurityGroupRequest object.
 */
CreateCacheSecurityGroupRequest::CreateCacheSecurityGroupRequest()
    : ElastiCacheRequest(new CreateCacheSecurityGroupRequestPrivate(ElastiCacheRequest::CreateCacheSecurityGroupAction, this))
{

}

bool CreateCacheSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCacheSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCacheSecurityGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * CreateCacheSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateCacheSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCacheSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for CreateCacheSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheSecurityGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public CreateCacheSecurityGroupRequest instance.
 */
CreateCacheSecurityGroupRequestPrivate::CreateCacheSecurityGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateCacheSecurityGroupRequest * const q)
    : CreateCacheSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCacheSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCacheSecurityGroupRequest instance.
 */
CreateCacheSecurityGroupRequestPrivate::CreateCacheSecurityGroupRequestPrivate(
    const CreateCacheSecurityGroupRequestPrivate &other, CreateCacheSecurityGroupRequest * const q)
    : CreateCacheSecurityGroupPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
