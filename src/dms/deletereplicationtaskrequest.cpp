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

#include "deletereplicationtaskrequest.h"
#include "deletereplicationtaskrequest_p.h"
#include "deletereplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DeleteReplicationTaskRequest
 *
 * @brief  Implements DatabaseMigrationService DeleteReplicationTask requests.
 *
 * @see    DatabaseMigrationServiceClient::deleteReplicationTask
 */

/**
 * @brief  Constructs a new DeleteReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReplicationTaskResponse::DeleteReplicationTaskResponse(

/**
 * @brief  Constructs a new DeleteReplicationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReplicationTaskRequest::DeleteReplicationTaskRequest(const DeleteReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReplicationTaskRequest object.
 */
DeleteReplicationTaskRequest::DeleteReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new DeleteReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::DeleteReplicationTaskAction, this))
{

}

bool DeleteReplicationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReplicationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReplicationTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DeleteReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReplicationTaskRequestPrivate
 *
 * @brief  Private implementation for DeleteReplicationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationTaskRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DeleteReplicationTaskRequest instance.
 */
DeleteReplicationTaskRequestPrivate::DeleteReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteReplicationTaskRequest * const q)
    : DeleteReplicationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReplicationTaskRequest instance.
 */
DeleteReplicationTaskRequestPrivate::DeleteReplicationTaskRequestPrivate(
    const DeleteReplicationTaskRequestPrivate &other, DeleteReplicationTaskRequest * const q)
    : DeleteReplicationTaskPrivate(other, q)
{

}
