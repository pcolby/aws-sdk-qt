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

#include "deletereplicationinstancerequest.h"
#include "deletereplicationinstancerequest_p.h"
#include "deletereplicationinstanceresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DeleteReplicationInstanceRequest
 *
 * @brief  Implements DatabaseMigrationService DeleteReplicationInstance requests.
 *
 * @see    DatabaseMigrationServiceClient::deleteReplicationInstance
 */

/**
 * @brief  Constructs a new DeleteReplicationInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest(const DeleteReplicationInstanceRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteReplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReplicationInstanceRequest object.
 */
DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest()
    : DatabaseMigrationServiceRequest(new DeleteReplicationInstanceRequestPrivate(DatabaseMigrationServiceRequest::DeleteReplicationInstanceAction, this))
{

}

bool DeleteReplicationInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReplicationInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReplicationInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DeleteReplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReplicationInstanceRequestPrivate
 *
 * @brief  Private implementation for DeleteReplicationInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationInstanceRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DeleteReplicationInstanceRequest instance.
 */
DeleteReplicationInstanceRequestPrivate::DeleteReplicationInstanceRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteReplicationInstanceRequest * const q)
    : DeleteReplicationInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReplicationInstanceRequest instance.
 */
DeleteReplicationInstanceRequestPrivate::DeleteReplicationInstanceRequestPrivate(
    const DeleteReplicationInstanceRequestPrivate &other, DeleteReplicationInstanceRequest * const q)
    : DeleteReplicationInstancePrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
