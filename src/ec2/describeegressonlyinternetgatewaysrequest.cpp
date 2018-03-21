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

#include "describeegressonlyinternetgatewaysrequest.h"
#include "describeegressonlyinternetgatewaysrequest_p.h"
#include "describeegressonlyinternetgatewaysresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeEgressOnlyInternetGatewaysRequest
 *
 * @brief  Implements EC2 DescribeEgressOnlyInternetGateways requests.
 *
 * @see    EC2Client::describeEgressOnlyInternetGateways
 */

/**
 * @brief  Constructs a new DescribeEgressOnlyInternetGatewaysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEgressOnlyInternetGatewaysRequest::DescribeEgressOnlyInternetGatewaysRequest(const DescribeEgressOnlyInternetGatewaysRequest &other)
    : EC2Request(new DescribeEgressOnlyInternetGatewaysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEgressOnlyInternetGatewaysRequest object.
 */
DescribeEgressOnlyInternetGatewaysRequest::DescribeEgressOnlyInternetGatewaysRequest()
    : EC2Request(new DescribeEgressOnlyInternetGatewaysRequestPrivate(EC2Request::DescribeEgressOnlyInternetGatewaysAction, this))
{

}

bool DescribeEgressOnlyInternetGatewaysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEgressOnlyInternetGatewaysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEgressOnlyInternetGatewaysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeEgressOnlyInternetGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEgressOnlyInternetGatewaysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEgressOnlyInternetGatewaysRequestPrivate
 *
 * @brief  Private implementation for DescribeEgressOnlyInternetGatewaysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEgressOnlyInternetGatewaysRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeEgressOnlyInternetGatewaysRequest instance.
 */
DescribeEgressOnlyInternetGatewaysRequestPrivate::DescribeEgressOnlyInternetGatewaysRequestPrivate(
    const EC2Request::Action action, DescribeEgressOnlyInternetGatewaysRequest * const q)
    : DescribeEgressOnlyInternetGatewaysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEgressOnlyInternetGatewaysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEgressOnlyInternetGatewaysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEgressOnlyInternetGatewaysRequest instance.
 */
DescribeEgressOnlyInternetGatewaysRequestPrivate::DescribeEgressOnlyInternetGatewaysRequestPrivate(
    const DescribeEgressOnlyInternetGatewaysRequestPrivate &other, DescribeEgressOnlyInternetGatewaysRequest * const q)
    : DescribeEgressOnlyInternetGatewaysPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
