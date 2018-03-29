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

#include "describeorderablereplicationinstancesrequest.h"
#include "describeorderablereplicationinstancesrequest_p.h"
#include "describeorderablereplicationinstancesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeOrderableReplicationInstancesRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeOrderableReplicationInstances requests.
 *
 * @see    DatabaseMigrationServiceClient::describeOrderableReplicationInstances
 */

/**
 * @brief  Constructs a new DescribeOrderableReplicationInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOrderableReplicationInstancesRequest::DescribeOrderableReplicationInstancesRequest(const DescribeOrderableReplicationInstancesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeOrderableReplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOrderableReplicationInstancesRequest object.
 */
DescribeOrderableReplicationInstancesRequest::DescribeOrderableReplicationInstancesRequest()
    : DatabaseMigrationServiceRequest(new DescribeOrderableReplicationInstancesRequestPrivate(DatabaseMigrationServiceRequest::DescribeOrderableReplicationInstancesAction, this))
{

}

bool DescribeOrderableReplicationInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOrderableReplicationInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOrderableReplicationInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrderableReplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableReplicationInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOrderableReplicationInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeOrderableReplicationInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableReplicationInstancesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeOrderableReplicationInstancesRequest instance.
 */
DescribeOrderableReplicationInstancesRequestPrivate::DescribeOrderableReplicationInstancesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeOrderableReplicationInstancesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableReplicationInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableReplicationInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOrderableReplicationInstancesRequest instance.
 */
DescribeOrderableReplicationInstancesRequestPrivate::DescribeOrderableReplicationInstancesRequestPrivate(
    const DescribeOrderableReplicationInstancesRequestPrivate &other, DescribeOrderableReplicationInstancesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
