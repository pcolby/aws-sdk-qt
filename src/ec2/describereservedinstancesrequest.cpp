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

#include "describereservedinstancesrequest.h"
#include "describereservedinstancesrequest_p.h"
#include "describereservedinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesRequest
 *
 * @brief  Implements EC2 DescribeReservedInstances requests.
 *
 * @see    EC2Client::describeReservedInstances
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedInstancesResponse::DescribeReservedInstancesResponse(

/**
 * @brief  Constructs a new DescribeReservedInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReservedInstancesRequest::DescribeReservedInstancesRequest(const DescribeReservedInstancesRequest &other)
    : EC2Request(new DescribeReservedInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReservedInstancesRequest object.
 */
DescribeReservedInstancesRequest::DescribeReservedInstancesRequest()
    : EC2Request(new DescribeReservedInstancesRequestPrivate(EC2Request::DescribeReservedInstancesAction, this))
{

}

bool DescribeReservedInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReservedInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReservedInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeReservedInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeReservedInstancesRequest instance.
 */
DescribeReservedInstancesRequestPrivate::DescribeReservedInstancesRequestPrivate(
    const EC2Request::Action action, DescribeReservedInstancesRequest * const q)
    : DescribeReservedInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReservedInstancesRequest instance.
 */
DescribeReservedInstancesRequestPrivate::DescribeReservedInstancesRequestPrivate(
    const DescribeReservedInstancesRequestPrivate &other, DescribeReservedInstancesRequest * const q)
    : DescribeReservedInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
