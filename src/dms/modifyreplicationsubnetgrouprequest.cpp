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

#include "modifyreplicationsubnetgrouprequest.h"
#include "modifyreplicationsubnetgrouprequest_p.h"
#include "modifyreplicationsubnetgroupresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ModifyReplicationSubnetGroupRequest
 *
 * @brief  Implements DatabaseMigrationService ModifyReplicationSubnetGroup requests.
 *
 * @see    DatabaseMigrationServiceClient::modifyReplicationSubnetGroup
 */

/**
 * @brief  Constructs a new ModifyReplicationSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationSubnetGroupResponse::ModifyReplicationSubnetGroupResponse(

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
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * ModifyReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
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
    : ModifyReplicationSubnetGroupPrivate(action, q)
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
    : ModifyReplicationSubnetGroupPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
