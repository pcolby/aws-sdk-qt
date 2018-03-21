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

#include "createcachesubnetgrouprequest.h"
#include "createcachesubnetgrouprequest_p.h"
#include "createcachesubnetgroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  CreateCacheSubnetGroupRequest
 *
 * @brief  Implements ElastiCache CreateCacheSubnetGroup requests.
 *
 * @see    ElastiCacheClient::createCacheSubnetGroup
 */

/**
 * @brief  Constructs a new CreateCacheSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCacheSubnetGroupResponse::CreateCacheSubnetGroupResponse(

/**
 * @brief  Constructs a new CreateCacheSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCacheSubnetGroupRequest::CreateCacheSubnetGroupRequest(const CreateCacheSubnetGroupRequest &other)
    : ElastiCacheRequest(new CreateCacheSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCacheSubnetGroupRequest object.
 */
CreateCacheSubnetGroupRequest::CreateCacheSubnetGroupRequest()
    : ElastiCacheRequest(new CreateCacheSubnetGroupRequestPrivate(ElastiCacheRequest::CreateCacheSubnetGroupAction, this))
{

}

bool CreateCacheSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCacheSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCacheSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * CreateCacheSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateCacheSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCacheSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for CreateCacheSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheSubnetGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public CreateCacheSubnetGroupRequest instance.
 */
CreateCacheSubnetGroupRequestPrivate::CreateCacheSubnetGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateCacheSubnetGroupRequest * const q)
    : CreateCacheSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCacheSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCacheSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCacheSubnetGroupRequest instance.
 */
CreateCacheSubnetGroupRequestPrivate::CreateCacheSubnetGroupRequestPrivate(
    const CreateCacheSubnetGroupRequestPrivate &other, CreateCacheSubnetGroupRequest * const q)
    : CreateCacheSubnetGroupPrivate(other, q)
{

}
