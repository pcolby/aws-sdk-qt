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

#include "createreplicationtaskrequest.h"
#include "createreplicationtaskrequest_p.h"
#include "createreplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  CreateReplicationTaskRequest
 *
 * @brief  Implements DatabaseMigrationService CreateReplicationTask requests.
 *
 * @see    DatabaseMigrationServiceClient::createReplicationTask
 */

/**
 * @brief  Constructs a new CreateReplicationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReplicationTaskRequest::CreateReplicationTaskRequest(const CreateReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new CreateReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReplicationTaskRequest object.
 */
CreateReplicationTaskRequest::CreateReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new CreateReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::CreateReplicationTaskAction, this))
{

}

bool CreateReplicationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReplicationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReplicationTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * CreateReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReplicationTaskRequestPrivate
 *
 * @brief  Private implementation for CreateReplicationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationTaskRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public CreateReplicationTaskRequest instance.
 */
CreateReplicationTaskRequestPrivate::CreateReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, CreateReplicationTaskRequest * const q)
    : CreateReplicationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReplicationTaskRequest instance.
 */
CreateReplicationTaskRequestPrivate::CreateReplicationTaskRequestPrivate(
    const CreateReplicationTaskRequestPrivate &other, CreateReplicationTaskRequest * const q)
    : CreateReplicationTaskPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
