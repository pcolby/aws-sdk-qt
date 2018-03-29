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

#include "describereplicationinstancesrequest.h"
#include "describereplicationinstancesrequest_p.h"
#include "describereplicationinstancesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationInstancesRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeReplicationInstances requests.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationInstances
 */

/**
 * @brief  Constructs a new DescribeReplicationInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReplicationInstancesRequest::DescribeReplicationInstancesRequest(const DescribeReplicationInstancesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeReplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReplicationInstancesRequest object.
 */
DescribeReplicationInstancesRequest::DescribeReplicationInstancesRequest()
    : DatabaseMigrationServiceRequest(new DescribeReplicationInstancesRequestPrivate(DatabaseMigrationServiceRequest::DescribeReplicationInstancesAction, this))
{

}

bool DescribeReplicationInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReplicationInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReplicationInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReplicationInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeReplicationInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationInstancesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeReplicationInstancesRequest instance.
 */
DescribeReplicationInstancesRequestPrivate::DescribeReplicationInstancesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeReplicationInstancesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReplicationInstancesRequest instance.
 */
DescribeReplicationInstancesRequestPrivate::DescribeReplicationInstancesRequestPrivate(
    const DescribeReplicationInstancesRequestPrivate &other, DescribeReplicationInstancesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
