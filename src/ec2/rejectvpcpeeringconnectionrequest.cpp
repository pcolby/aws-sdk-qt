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

#include "rejectvpcpeeringconnectionrequest.h"
#include "rejectvpcpeeringconnectionrequest_p.h"
#include "rejectvpcpeeringconnectionresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  RejectVpcPeeringConnectionRequest
 *
 * @brief  Implements EC2 RejectVpcPeeringConnection requests.
 *
 * @see    EC2Client::rejectVpcPeeringConnection
 */

/**
 * @brief  Constructs a new RejectVpcPeeringConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectVpcPeeringConnectionResponse::RejectVpcPeeringConnectionResponse(

/**
 * @brief  Constructs a new RejectVpcPeeringConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectVpcPeeringConnectionRequest::RejectVpcPeeringConnectionRequest(const RejectVpcPeeringConnectionRequest &other)
    : EC2Request(new RejectVpcPeeringConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RejectVpcPeeringConnectionRequest object.
 */
RejectVpcPeeringConnectionRequest::RejectVpcPeeringConnectionRequest()
    : EC2Request(new RejectVpcPeeringConnectionRequestPrivate(EC2Request::RejectVpcPeeringConnectionAction, this))
{

}

bool RejectVpcPeeringConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RejectVpcPeeringConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectVpcPeeringConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * RejectVpcPeeringConnectionRequest::response(QNetworkReply * const reply) const
{
    return new RejectVpcPeeringConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RejectVpcPeeringConnectionRequestPrivate
 *
 * @brief  Private implementation for RejectVpcPeeringConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectVpcPeeringConnectionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public RejectVpcPeeringConnectionRequest instance.
 */
RejectVpcPeeringConnectionRequestPrivate::RejectVpcPeeringConnectionRequestPrivate(
    const EC2Request::Action action, RejectVpcPeeringConnectionRequest * const q)
    : RejectVpcPeeringConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RejectVpcPeeringConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RejectVpcPeeringConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RejectVpcPeeringConnectionRequest instance.
 */
RejectVpcPeeringConnectionRequestPrivate::RejectVpcPeeringConnectionRequestPrivate(
    const RejectVpcPeeringConnectionRequestPrivate &other, RejectVpcPeeringConnectionRequest * const q)
    : RejectVpcPeeringConnectionPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
