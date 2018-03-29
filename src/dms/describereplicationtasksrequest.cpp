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

#include "describereplicationtasksrequest.h"
#include "describereplicationtasksrequest_p.h"
#include "describereplicationtasksresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationTasksRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeReplicationTasks requests.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationTasks
 */

/**
 * @brief  Constructs a new DescribeReplicationTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReplicationTasksRequest::DescribeReplicationTasksRequest(const DescribeReplicationTasksRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeReplicationTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReplicationTasksRequest object.
 */
DescribeReplicationTasksRequest::DescribeReplicationTasksRequest()
    : DatabaseMigrationServiceRequest(new DescribeReplicationTasksRequestPrivate(DatabaseMigrationServiceRequest::DescribeReplicationTasksAction, this))
{

}

bool DescribeReplicationTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReplicationTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReplicationTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeReplicationTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReplicationTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeReplicationTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTasksRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeReplicationTasksRequest instance.
 */
DescribeReplicationTasksRequestPrivate::DescribeReplicationTasksRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeReplicationTasksRequest * const q)
    : DescribeReplicationTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReplicationTasksRequest instance.
 */
DescribeReplicationTasksRequestPrivate::DescribeReplicationTasksRequestPrivate(
    const DescribeReplicationTasksRequestPrivate &other, DescribeReplicationTasksRequest * const q)
    : DescribeReplicationTasksPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
