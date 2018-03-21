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

#include "describevpngatewaysrequest.h"
#include "describevpngatewaysrequest_p.h"
#include "describevpngatewaysresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpnGatewaysRequest
 *
 * @brief  Implements EC2 DescribeVpnGateways requests.
 *
 * @see    EC2Client::describeVpnGateways
 */

/**
 * @brief  Constructs a new DescribeVpnGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpnGatewaysResponse::DescribeVpnGatewaysResponse(

/**
 * @brief  Constructs a new DescribeVpnGatewaysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpnGatewaysRequest::DescribeVpnGatewaysRequest(const DescribeVpnGatewaysRequest &other)
    : EC2Request(new DescribeVpnGatewaysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpnGatewaysRequest object.
 */
DescribeVpnGatewaysRequest::DescribeVpnGatewaysRequest()
    : EC2Request(new DescribeVpnGatewaysRequestPrivate(EC2Request::DescribeVpnGatewaysAction, this))
{

}

bool DescribeVpnGatewaysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpnGatewaysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpnGatewaysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpnGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpnGatewaysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpnGatewaysRequestPrivate
 *
 * @brief  Private implementation for DescribeVpnGatewaysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpnGatewaysRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpnGatewaysRequest instance.
 */
DescribeVpnGatewaysRequestPrivate::DescribeVpnGatewaysRequestPrivate(
    const EC2Request::Action action, DescribeVpnGatewaysRequest * const q)
    : DescribeVpnGatewaysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpnGatewaysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpnGatewaysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpnGatewaysRequest instance.
 */
DescribeVpnGatewaysRequestPrivate::DescribeVpnGatewaysRequestPrivate(
    const DescribeVpnGatewaysRequestPrivate &other, DescribeVpnGatewaysRequest * const q)
    : DescribeVpnGatewaysPrivate(other, q)
{

}
