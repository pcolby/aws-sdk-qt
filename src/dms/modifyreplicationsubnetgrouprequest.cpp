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

#include "modifyreplicationsubnetgrouprequest.h"
#include "modifyreplicationsubnetgrouprequest_p.h"
#include "modifyreplicationsubnetgroupresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  ModifyReplicationSubnetGroupRequest
 *
 * @brief  Implements DatabaseMigrationService ModifyReplicationSubnetGroup requests.
 *
 * @see    DatabaseMigrationServiceClient::modifyReplicationSubnetGroup
 */

/**
 * @brief  Constructs a new ModifyReplicationSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationSubnetGroupRequest::ModifyReplicationSubnetGroupRequest(const ModifyReplicationSubnetGroupRequest &other)
    : DatabaseMigrationServiceRequest(new ModifyReplicationSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyReplicationSubnetGroupRequest object.
 */
ModifyReplicationSubnetGroupRequest::ModifyReplicationSubnetGroupRequest()
    : DatabaseMigrationServiceRequest(new ModifyReplicationSubnetGroupRequestPrivate(DatabaseMigrationServiceRequest::ModifyReplicationSubnetGroupAction, this))
{

}

bool ModifyReplicationSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyReplicationSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationSubnetGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyReplicationSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationSubnetGroupRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationSubnetGroupRequest instance.
 */
ModifyReplicationSubnetGroupRequestPrivate::ModifyReplicationSubnetGroupRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ModifyReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReplicationSubnetGroupRequest instance.
 */
ModifyReplicationSubnetGroupRequestPrivate::ModifyReplicationSubnetGroupRequestPrivate(
    const ModifyReplicationSubnetGroupRequestPrivate &other, ModifyReplicationSubnetGroupRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
