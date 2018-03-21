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

#include "startreplicationtaskrequest.h"
#include "startreplicationtaskrequest_p.h"
#include "startreplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  StartReplicationTaskRequest
 *
 * @brief  Implements DatabaseMigrationService StartReplicationTask requests.
 *
 * @see    DatabaseMigrationServiceClient::startReplicationTask
 */

/**
 * @brief  Constructs a new StartReplicationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartReplicationTaskRequest::StartReplicationTaskRequest(const StartReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new StartReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartReplicationTaskRequest object.
 */
StartReplicationTaskRequest::StartReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new StartReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::StartReplicationTaskAction, this))
{

}

bool StartReplicationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartReplicationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartReplicationTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * StartReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartReplicationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartReplicationTaskRequestPrivate
 *
 * @brief  Private implementation for StartReplicationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public StartReplicationTaskRequest instance.
 */
StartReplicationTaskRequestPrivate::StartReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, StartReplicationTaskRequest * const q)
    : StartReplicationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartReplicationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartReplicationTaskRequest instance.
 */
StartReplicationTaskRequestPrivate::StartReplicationTaskRequestPrivate(
    const StartReplicationTaskRequestPrivate &other, StartReplicationTaskRequest * const q)
    : StartReplicationTaskPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
