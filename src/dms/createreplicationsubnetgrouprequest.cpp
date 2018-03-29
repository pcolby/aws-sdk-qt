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

#include "createreplicationsubnetgrouprequest.h"
#include "createreplicationsubnetgrouprequest_p.h"
#include "createreplicationsubnetgroupresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  CreateReplicationSubnetGroupRequest
 *
 * @brief  Implements DatabaseMigrationService CreateReplicationSubnetGroup requests.
 *
 * @see    DatabaseMigrationServiceClient::createReplicationSubnetGroup
 */

/**
 * @brief  Constructs a new CreateReplicationSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReplicationSubnetGroupRequest::CreateReplicationSubnetGroupRequest(const CreateReplicationSubnetGroupRequest &other)
    : DatabaseMigrationServiceRequest(new CreateReplicationSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReplicationSubnetGroupRequest object.
 */
CreateReplicationSubnetGroupRequest::CreateReplicationSubnetGroupRequest()
    : DatabaseMigrationServiceRequest(new CreateReplicationSubnetGroupRequestPrivate(DatabaseMigrationServiceRequest::CreateReplicationSubnetGroupAction, this))
{

}

bool CreateReplicationSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReplicationSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReplicationSubnetGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReplicationSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for CreateReplicationSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationSubnetGroupRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public CreateReplicationSubnetGroupRequest instance.
 */
CreateReplicationSubnetGroupRequestPrivate::CreateReplicationSubnetGroupRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, CreateReplicationSubnetGroupRequest * const q)
    : CreateReplicationSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReplicationSubnetGroupRequest instance.
 */
CreateReplicationSubnetGroupRequestPrivate::CreateReplicationSubnetGroupRequestPrivate(
    const CreateReplicationSubnetGroupRequestPrivate &other, CreateReplicationSubnetGroupRequest * const q)
    : CreateReplicationSubnetGroupPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
