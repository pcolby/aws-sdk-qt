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

#include "describenatgatewaysrequest.h"
#include "describenatgatewaysrequest_p.h"
#include "describenatgatewaysresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeNatGatewaysRequest
 *
 * @brief  Implements EC2 DescribeNatGateways requests.
 *
 * @see    EC2Client::describeNatGateways
 */

/**
 * @brief  Constructs a new DescribeNatGatewaysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNatGatewaysRequest::DescribeNatGatewaysRequest(const DescribeNatGatewaysRequest &other)
    : EC2Request(new DescribeNatGatewaysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNatGatewaysRequest object.
 */
DescribeNatGatewaysRequest::DescribeNatGatewaysRequest()
    : EC2Request(new DescribeNatGatewaysRequestPrivate(EC2Request::DescribeNatGatewaysAction, this))
{

}

bool DescribeNatGatewaysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNatGatewaysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNatGatewaysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeNatGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNatGatewaysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNatGatewaysRequestPrivate
 *
 * @brief  Private implementation for DescribeNatGatewaysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNatGatewaysRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeNatGatewaysRequest instance.
 */
DescribeNatGatewaysRequestPrivate::DescribeNatGatewaysRequestPrivate(
    const EC2Request::Action action, DescribeNatGatewaysRequest * const q)
    : DescribeNatGatewaysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNatGatewaysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNatGatewaysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNatGatewaysRequest instance.
 */
DescribeNatGatewaysRequestPrivate::DescribeNatGatewaysRequestPrivate(
    const DescribeNatGatewaysRequestPrivate &other, DescribeNatGatewaysRequest * const q)
    : DescribeNatGatewaysPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
