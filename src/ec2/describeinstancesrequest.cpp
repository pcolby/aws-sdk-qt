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

#include "describeinstancesrequest.h"
#include "describeinstancesrequest_p.h"
#include "describeinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeInstancesRequest
 *
 * @brief  Implements EC2 DescribeInstances requests.
 *
 * @see    EC2Client::describeInstances
 */

/**
 * @brief  Constructs a new DescribeInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstancesRequest::DescribeInstancesRequest(const DescribeInstancesRequest &other)
    : EC2Request(new DescribeInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstancesRequest object.
 */
DescribeInstancesRequest::DescribeInstancesRequest()
    : EC2Request(new DescribeInstancesRequestPrivate(EC2Request::DescribeInstancesAction, this))
{

}

bool DescribeInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeInstancesRequest instance.
 */
DescribeInstancesRequestPrivate::DescribeInstancesRequestPrivate(
    const EC2Request::Action action, DescribeInstancesRequest * const q)
    : DescribeInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstancesRequest instance.
 */
DescribeInstancesRequestPrivate::DescribeInstancesRequestPrivate(
    const DescribeInstancesRequestPrivate &other, DescribeInstancesRequest * const q)
    : DescribeInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
