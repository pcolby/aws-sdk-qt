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

#include "acceptvpcpeeringconnectionrequest.h"
#include "acceptvpcpeeringconnectionrequest_p.h"
#include "acceptvpcpeeringconnectionresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AcceptVpcPeeringConnectionRequest
 *
 * @brief  Implements EC2 AcceptVpcPeeringConnection requests.
 *
 * @see    EC2Client::acceptVpcPeeringConnection
 */

/**
 * @brief  Constructs a new AcceptVpcPeeringConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptVpcPeeringConnectionRequest::AcceptVpcPeeringConnectionRequest(const AcceptVpcPeeringConnectionRequest &other)
    : EC2Request(new AcceptVpcPeeringConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptVpcPeeringConnectionRequest object.
 */
AcceptVpcPeeringConnectionRequest::AcceptVpcPeeringConnectionRequest()
    : EC2Request(new AcceptVpcPeeringConnectionRequestPrivate(EC2Request::AcceptVpcPeeringConnectionAction, this))
{

}

bool AcceptVpcPeeringConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptVpcPeeringConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptVpcPeeringConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AcceptVpcPeeringConnectionRequest::response(QNetworkReply * const reply) const
{
    return new AcceptVpcPeeringConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptVpcPeeringConnectionRequestPrivate
 *
 * @brief  Private implementation for AcceptVpcPeeringConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptVpcPeeringConnectionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AcceptVpcPeeringConnectionRequest instance.
 */
AcceptVpcPeeringConnectionRequestPrivate::AcceptVpcPeeringConnectionRequestPrivate(
    const EC2Request::Action action, AcceptVpcPeeringConnectionRequest * const q)
    : AcceptVpcPeeringConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptVpcPeeringConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptVpcPeeringConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptVpcPeeringConnectionRequest instance.
 */
AcceptVpcPeeringConnectionRequestPrivate::AcceptVpcPeeringConnectionRequestPrivate(
    const AcceptVpcPeeringConnectionRequestPrivate &other, AcceptVpcPeeringConnectionRequest * const q)
    : AcceptVpcPeeringConnectionPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
