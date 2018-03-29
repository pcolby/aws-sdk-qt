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

#include "describereserveddbinstancesrequest.h"
#include "describereserveddbinstancesrequest_p.h"
#include "describereserveddbinstancesresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeReservedDBInstancesRequest
 *
 * @brief  Implements RDS DescribeReservedDBInstances requests.
 *
 * @see    RDSClient::describeReservedDBInstances
 */

/**
 * @brief  Constructs a new DescribeReservedDBInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedDBInstancesRequest::DescribeReservedDBInstancesRequest(const DescribeReservedDBInstancesRequest &other)
    : RDSRequest(new DescribeReservedDBInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedDBInstancesRequest object.
 */
DescribeReservedDBInstancesRequest::DescribeReservedDBInstancesRequest()
    : RDSRequest(new DescribeReservedDBInstancesRequestPrivate(RDSRequest::DescribeReservedDBInstancesAction, this))
{

}

bool DescribeReservedDBInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedDBInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedDBInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeReservedDBInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedDBInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedDBInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedDBInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedDBInstancesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeReservedDBInstancesRequest instance.
 */
DescribeReservedDBInstancesRequestPrivate::DescribeReservedDBInstancesRequestPrivate(
    const RDSRequest::Action action, DescribeReservedDBInstancesRequest * const q)
    : DescribeReservedDBInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedDBInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedDBInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedDBInstancesRequest instance.
 */
DescribeReservedDBInstancesRequestPrivate::DescribeReservedDBInstancesRequestPrivate(
    const DescribeReservedDBInstancesRequestPrivate &other, DescribeReservedDBInstancesRequest * const q)
    : DescribeReservedDBInstancesPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
