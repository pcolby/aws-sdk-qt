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

#include "describevpnconnectionsrequest.h"
#include "describevpnconnectionsrequest_p.h"
#include "describevpnconnectionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpnConnectionsRequest
 *
 * @brief  Implements EC2 DescribeVpnConnections requests.
 *
 * @see    EC2Client::describeVpnConnections
 */

/**
 * @brief  Constructs a new DescribeVpnConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpnConnectionsRequest::DescribeVpnConnectionsRequest(const DescribeVpnConnectionsRequest &other)
    : EC2Request(new DescribeVpnConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpnConnectionsRequest object.
 */
DescribeVpnConnectionsRequest::DescribeVpnConnectionsRequest()
    : EC2Request(new DescribeVpnConnectionsRequestPrivate(EC2Request::DescribeVpnConnectionsAction, this))
{

}

bool DescribeVpnConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpnConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpnConnectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpnConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpnConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpnConnectionsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpnConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpnConnectionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpnConnectionsRequest instance.
 */
DescribeVpnConnectionsRequestPrivate::DescribeVpnConnectionsRequestPrivate(
    const EC2Request::Action action, DescribeVpnConnectionsRequest * const q)
    : DescribeVpnConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpnConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpnConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpnConnectionsRequest instance.
 */
DescribeVpnConnectionsRequestPrivate::DescribeVpnConnectionsRequestPrivate(
    const DescribeVpnConnectionsRequestPrivate &other, DescribeVpnConnectionsRequest * const q)
    : DescribeVpnConnectionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
