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

#include "rejectvpcendpointconnectionsrequest.h"
#include "rejectvpcendpointconnectionsrequest_p.h"
#include "rejectvpcendpointconnectionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  RejectVpcEndpointConnectionsRequest
 *
 * @brief  Implements EC2 RejectVpcEndpointConnections requests.
 *
 * @see    EC2Client::rejectVpcEndpointConnections
 */

/**
 * @brief  Constructs a new RejectVpcEndpointConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectVpcEndpointConnectionsResponse::RejectVpcEndpointConnectionsResponse(

/**
 * @brief  Constructs a new RejectVpcEndpointConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectVpcEndpointConnectionsRequest::RejectVpcEndpointConnectionsRequest(const RejectVpcEndpointConnectionsRequest &other)
    : EC2Request(new RejectVpcEndpointConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RejectVpcEndpointConnectionsRequest object.
 */
RejectVpcEndpointConnectionsRequest::RejectVpcEndpointConnectionsRequest()
    : EC2Request(new RejectVpcEndpointConnectionsRequestPrivate(EC2Request::RejectVpcEndpointConnectionsAction, this))
{

}

bool RejectVpcEndpointConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RejectVpcEndpointConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectVpcEndpointConnectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RejectVpcEndpointConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new RejectVpcEndpointConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RejectVpcEndpointConnectionsRequestPrivate
 *
 * @brief  Private implementation for RejectVpcEndpointConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectVpcEndpointConnectionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RejectVpcEndpointConnectionsRequest instance.
 */
RejectVpcEndpointConnectionsRequestPrivate::RejectVpcEndpointConnectionsRequestPrivate(
    const EC2Request::Action action, RejectVpcEndpointConnectionsRequest * const q)
    : RejectVpcEndpointConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RejectVpcEndpointConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RejectVpcEndpointConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RejectVpcEndpointConnectionsRequest instance.
 */
RejectVpcEndpointConnectionsRequestPrivate::RejectVpcEndpointConnectionsRequestPrivate(
    const RejectVpcEndpointConnectionsRequestPrivate &other, RejectVpcEndpointConnectionsRequest * const q)
    : RejectVpcEndpointConnectionsPrivate(other, q)
{

}
