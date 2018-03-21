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

#include "acceptvpcendpointconnectionsrequest.h"
#include "acceptvpcendpointconnectionsrequest_p.h"
#include "acceptvpcendpointconnectionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AcceptVpcEndpointConnectionsRequest
 *
 * @brief  Implements EC2 AcceptVpcEndpointConnections requests.
 *
 * @see    EC2Client::acceptVpcEndpointConnections
 */

/**
 * @brief  Constructs a new AcceptVpcEndpointConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptVpcEndpointConnectionsResponse::AcceptVpcEndpointConnectionsResponse(

/**
 * @brief  Constructs a new AcceptVpcEndpointConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptVpcEndpointConnectionsRequest::AcceptVpcEndpointConnectionsRequest(const AcceptVpcEndpointConnectionsRequest &other)
    : EC2Request(new AcceptVpcEndpointConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptVpcEndpointConnectionsRequest object.
 */
AcceptVpcEndpointConnectionsRequest::AcceptVpcEndpointConnectionsRequest()
    : EC2Request(new AcceptVpcEndpointConnectionsRequestPrivate(EC2Request::AcceptVpcEndpointConnectionsAction, this))
{

}

bool AcceptVpcEndpointConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptVpcEndpointConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptVpcEndpointConnectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AcceptVpcEndpointConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new AcceptVpcEndpointConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptVpcEndpointConnectionsRequestPrivate
 *
 * @brief  Private implementation for AcceptVpcEndpointConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptVpcEndpointConnectionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AcceptVpcEndpointConnectionsRequest instance.
 */
AcceptVpcEndpointConnectionsRequestPrivate::AcceptVpcEndpointConnectionsRequestPrivate(
    const EC2Request::Action action, AcceptVpcEndpointConnectionsRequest * const q)
    : AcceptVpcEndpointConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptVpcEndpointConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptVpcEndpointConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptVpcEndpointConnectionsRequest instance.
 */
AcceptVpcEndpointConnectionsRequestPrivate::AcceptVpcEndpointConnectionsRequestPrivate(
    const AcceptVpcEndpointConnectionsRequestPrivate &other, AcceptVpcEndpointConnectionsRequest * const q)
    : AcceptVpcEndpointConnectionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
