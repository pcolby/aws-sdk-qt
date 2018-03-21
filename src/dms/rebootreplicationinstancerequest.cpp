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

#include "rebootreplicationinstancerequest.h"
#include "rebootreplicationinstancerequest_p.h"
#include "rebootreplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  RebootReplicationInstanceRequest
 *
 * @brief  Implements DatabaseMigrationService RebootReplicationInstance requests.
 *
 * @see    DatabaseMigrationServiceClient::rebootReplicationInstance
 */

/**
 * @brief  Constructs a new RebootReplicationInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootReplicationInstanceRequest::RebootReplicationInstanceRequest(const RebootReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new RebootReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootReplicationInstanceRequest object.
 */
RebootReplicationInstanceRequest::RebootReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new RebootReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::RebootReplicationInstanceAction, this))
{

}

bool RebootReplicationInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootReplicationInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootReplicationInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * RebootReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RebootReplicationInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootReplicationInstanceRequestPrivate
 *
 * @brief  Private implementation for RebootReplicationInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootReplicationInstanceRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public RebootReplicationInstanceRequest instance.
 */
RebootReplicationInstanceRequestPrivate::RebootReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, RebootReplicationInstanceRequest * const q)
    : RebootReplicationInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootReplicationInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootReplicationInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootReplicationInstanceRequest instance.
 */
RebootReplicationInstanceRequestPrivate::RebootReplicationInstanceRequestPrivate(
    const RebootReplicationInstanceRequestPrivate &other, RebootReplicationInstanceRequest * const q)
    : RebootReplicationInstancePrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
