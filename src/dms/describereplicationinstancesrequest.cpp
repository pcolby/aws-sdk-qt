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

#include "describereplicationinstancesrequest.h"
#include "describereplicationinstancesrequest_p.h"
#include "describereplicationinstancesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationInstancesRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeReplicationInstances requests.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationInstances
 */

/**
 * @brief  Constructs a new DescribeReplicationInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationInstancesResponse::DescribeReplicationInstancesResponse(

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
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeReplicationInstancesRequest::response(QNetworkReply * const reply) const
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
    : DescribeReplicationInstancesPrivate(action, q)
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
    : DescribeReplicationInstancesPrivate(other, q)
{

}
