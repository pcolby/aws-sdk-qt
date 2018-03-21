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

#include "modifyreplicationtaskrequest.h"
#include "modifyreplicationtaskrequest_p.h"
#include "modifyreplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ModifyReplicationTaskRequest
 *
 * @brief  Implements DatabaseMigrationService ModifyReplicationTask requests.
 *
 * @see    DatabaseMigrationServiceClient::modifyReplicationTask
 */

/**
 * @brief  Constructs a new ModifyReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationTaskResponse::ModifyReplicationTaskResponse(

/**
 * @brief  Constructs a new ModifyReplicationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationTaskRequest::ModifyReplicationTaskRequest(const ModifyReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new ModifyReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyReplicationTaskRequest object.
 */
ModifyReplicationTaskRequest::ModifyReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new ModifyReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::ModifyReplicationTaskAction, this))
{

}

bool ModifyReplicationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyReplicationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * ModifyReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyReplicationTaskRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationTaskRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationTaskRequest instance.
 */
ModifyReplicationTaskRequestPrivate::ModifyReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, ModifyReplicationTaskRequest * const q)
    : ModifyReplicationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReplicationTaskRequest instance.
 */
ModifyReplicationTaskRequestPrivate::ModifyReplicationTaskRequestPrivate(
    const ModifyReplicationTaskRequestPrivate &other, ModifyReplicationTaskRequest * const q)
    : ModifyReplicationTaskPrivate(other, q)
{

}
