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

#include "describevpcendpointsrequest.h"
#include "describevpcendpointsrequest_p.h"
#include "describevpcendpointsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointsRequest
 *
 * @brief  Implements EC2 DescribeVpcEndpoints requests.
 *
 * @see    EC2Client::describeVpcEndpoints
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcEndpointsRequest::DescribeVpcEndpointsRequest(const DescribeVpcEndpointsRequest &other)
    : EC2Request(new DescribeVpcEndpointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcEndpointsRequest object.
 */
DescribeVpcEndpointsRequest::DescribeVpcEndpointsRequest()
    : EC2Request(new DescribeVpcEndpointsRequestPrivate(EC2Request::DescribeVpcEndpointsAction, this))
{

}

bool DescribeVpcEndpointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcEndpointsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcEndpointsRequest instance.
 */
DescribeVpcEndpointsRequestPrivate::DescribeVpcEndpointsRequestPrivate(
    const EC2Request::Action action, DescribeVpcEndpointsRequest * const q)
    : DescribeVpcEndpointsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcEndpointsRequest instance.
 */
DescribeVpcEndpointsRequestPrivate::DescribeVpcEndpointsRequestPrivate(
    const DescribeVpcEndpointsRequestPrivate &other, DescribeVpcEndpointsRequest * const q)
    : DescribeVpcEndpointsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
