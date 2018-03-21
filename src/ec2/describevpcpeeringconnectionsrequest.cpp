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

#include "describevpcpeeringconnectionsrequest.h"
#include "describevpcpeeringconnectionsrequest_p.h"
#include "describevpcpeeringconnectionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcPeeringConnectionsRequest
 *
 * @brief  Implements EC2 DescribeVpcPeeringConnections requests.
 *
 * @see    EC2Client::describeVpcPeeringConnections
 */

/**
 * @brief  Constructs a new DescribeVpcPeeringConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcPeeringConnectionsResponse::DescribeVpcPeeringConnectionsResponse(

/**
 * @brief  Constructs a new DescribeVpcPeeringConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcPeeringConnectionsRequest::DescribeVpcPeeringConnectionsRequest(const DescribeVpcPeeringConnectionsRequest &other)
    : EC2Request(new DescribeVpcPeeringConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcPeeringConnectionsRequest object.
 */
DescribeVpcPeeringConnectionsRequest::DescribeVpcPeeringConnectionsRequest()
    : EC2Request(new DescribeVpcPeeringConnectionsRequestPrivate(EC2Request::DescribeVpcPeeringConnectionsAction, this))
{

}

bool DescribeVpcPeeringConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcPeeringConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcPeeringConnectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcPeeringConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcPeeringConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcPeeringConnectionsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcPeeringConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcPeeringConnectionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcPeeringConnectionsRequest instance.
 */
DescribeVpcPeeringConnectionsRequestPrivate::DescribeVpcPeeringConnectionsRequestPrivate(
    const EC2Request::Action action, DescribeVpcPeeringConnectionsRequest * const q)
    : DescribeVpcPeeringConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcPeeringConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcPeeringConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcPeeringConnectionsRequest instance.
 */
DescribeVpcPeeringConnectionsRequestPrivate::DescribeVpcPeeringConnectionsRequestPrivate(
    const DescribeVpcPeeringConnectionsRequestPrivate &other, DescribeVpcPeeringConnectionsRequest * const q)
    : DescribeVpcPeeringConnectionsPrivate(other, q)
{

}
