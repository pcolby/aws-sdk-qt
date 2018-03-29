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

#include "describecustomergatewaysrequest.h"
#include "describecustomergatewaysrequest_p.h"
#include "describecustomergatewaysresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeCustomerGatewaysRequest
 *
 * @brief  Implements EC2 DescribeCustomerGateways requests.
 *
 * @see    EC2Client::describeCustomerGateways
 */

/**
 * @brief  Constructs a new DescribeCustomerGatewaysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCustomerGatewaysRequest::DescribeCustomerGatewaysRequest(const DescribeCustomerGatewaysRequest &other)
    : EC2Request(new DescribeCustomerGatewaysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCustomerGatewaysRequest object.
 */
DescribeCustomerGatewaysRequest::DescribeCustomerGatewaysRequest()
    : EC2Request(new DescribeCustomerGatewaysRequestPrivate(EC2Request::DescribeCustomerGatewaysAction, this))
{

}

bool DescribeCustomerGatewaysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCustomerGatewaysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCustomerGatewaysResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCustomerGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCustomerGatewaysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCustomerGatewaysRequestPrivate
 *
 * @brief  Private implementation for DescribeCustomerGatewaysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCustomerGatewaysRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeCustomerGatewaysRequest instance.
 */
DescribeCustomerGatewaysRequestPrivate::DescribeCustomerGatewaysRequestPrivate(
    const EC2Request::Action action, DescribeCustomerGatewaysRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCustomerGatewaysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCustomerGatewaysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCustomerGatewaysRequest instance.
 */
DescribeCustomerGatewaysRequestPrivate::DescribeCustomerGatewaysRequestPrivate(
    const DescribeCustomerGatewaysRequestPrivate &other, DescribeCustomerGatewaysRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
