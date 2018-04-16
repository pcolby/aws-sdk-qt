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

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationRequest
 *
 * \brief The ModifyReplicationGroupShardConfigurationRequest class provides an interface for ElastiCache ModifyReplicationGroupShardConfiguration requests.
 *
 * \ingroup ElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::modifyReplicationGroupShardConfiguration
 */

/*!
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest(const ModifyReplicationGroupShardConfigurationRequest &other)
    : ElastiCacheRequest(new ModifyReplicationGroupShardConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequest object.
 */
ModifyReplicationGroupShardConfigurationRequest::ModifyReplicationGroupShardConfigurationRequest()
    : ElastiCacheRequest(new ModifyReplicationGroupShardConfigurationRequestPrivate(ElastiCacheRequest::ModifyReplicationGroupShardConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationGroupShardConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ModifyReplicationGroupShardConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationGroupShardConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationGroupShardConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationGroupShardConfigurationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ModifyReplicationGroupShardConfigurationRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationGroupShardConfigurationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupShardConfigurationRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationGroupShardConfigurationRequest instance.
 */
ModifyReplicationGroupShardConfigurationRequestPrivate::ModifyReplicationGroupShardConfigurationRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyReplicationGroupShardConfigurationRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
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
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
