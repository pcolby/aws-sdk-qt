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

#include "deletereplicationsubnetgrouprequest.h"
#include "deletereplicationsubnetgrouprequest_p.h"
#include "deletereplicationsubnetgroupresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DeleteReplicationSubnetGroupRequest
 *
 * @brief  Implements DatabaseMigrationService DeleteReplicationSubnetGroup requests.
 *
 * @see    DatabaseMigrationServiceClient::deleteReplicationSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteReplicationSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReplicationSubnetGroupRequest::DeleteReplicationSubnetGroupRequest(const DeleteReplicationSubnetGroupRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteReplicationSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReplicationSubnetGroupRequest object.
 */
DeleteReplicationSubnetGroupRequest::DeleteReplicationSubnetGroupRequest()
    : DatabaseMigrationServiceRequest(new DeleteReplicationSubnetGroupRequestPrivate(DatabaseMigrationServiceRequest::DeleteReplicationSubnetGroupAction, this))
{

}

bool DeleteReplicationSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReplicationSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReplicationSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DeleteReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReplicationSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteReplicationSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationSubnetGroupRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DeleteReplicationSubnetGroupRequest instance.
 */
DeleteReplicationSubnetGroupRequestPrivate::DeleteReplicationSubnetGroupRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteReplicationSubnetGroupRequest * const q)
    : DeleteReplicationSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReplicationSubnetGroupRequest instance.
 */
DeleteReplicationSubnetGroupRequestPrivate::DeleteReplicationSubnetGroupRequestPrivate(
    const DeleteReplicationSubnetGroupRequestPrivate &other, DeleteReplicationSubnetGroupRequest * const q)
    : DeleteReplicationSubnetGroupPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
