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

#include "modifyreplicationgroupshardconfigurationrequest.h"
#include "modifyreplicationgroupshardconfigurationrequest_p.h"
#include "modifyreplicationgroupshardconfigurationresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyReplicationGroupShardConfigurationRequest
 *
 * @brief  Implements ElastiCache ModifyReplicationGroupShardConfiguration requests.
 *
 * @see    ElastiCacheClient::modifyReplicationGroupShardConfiguration
 */

/**
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest(const ModifyReplicationGroupShardConfigurationRequest &other)
    : ElastiCacheRequest(new ModifyReplicationGroupShardConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequest object.
 */
ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest()
    : ElastiCacheRequest(new ModifyReplicationGroupShardConfigurationRequestPrivate(ElastiCacheRequest::ModifyReplicationGroupShardConfigurationAction, this))
{

}

bool ModifyReplicationGroupShardConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyReplicationGroupShardConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationGroupShardConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * ModifyReplicationGroupShardConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationGroupShardConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyReplicationGroupShardConfigurationRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationGroupShardConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationGroupShardConfigurationRequest instance.
 */
ModifyReplicationGroupShardConfigurationRequestPrivate::ModifyReplicationGroupShardConfigurationRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyReplicationGroupShardConfigurationRequest * const q)
    : ModifyReplicationGroupShardConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationGroupShardConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReplicationGroupShardConfigurationRequest instance.
 */
ModifyReplicationGroupShardConfigurationRequestPrivate::ModifyReplicationGroupShardConfigurationRequestPrivate(
    const ModifyReplicationGroupShardConfigurationRequestPrivate &other, ModifyReplicationGroupShardConfigurationRequest * const q)
    : ModifyReplicationGroupShardConfigurationPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
