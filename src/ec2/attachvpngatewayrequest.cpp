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

#include "attachvpngatewayrequest.h"
#include "attachvpngatewayrequest_p.h"
#include "attachvpngatewayresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AttachVpnGatewayRequest
 *
 * @brief  Implements EC2 AttachVpnGateway requests.
 *
 * @see    EC2Client::attachVpnGateway
 */

/**
 * @brief  Constructs a new AttachVpnGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachVpnGatewayRequest::AttachVpnGatewayRequest(const AttachVpnGatewayRequest &other)
    : EC2Request(new AttachVpnGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachVpnGatewayRequest object.
 */
AttachVpnGatewayRequest::AttachVpnGatewayRequest()
    : EC2Request(new AttachVpnGatewayRequestPrivate(EC2Request::AttachVpnGatewayAction, this))
{

}

bool AttachVpnGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachVpnGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachVpnGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AttachVpnGatewayRequest::response(QNetworkReply * const reply) const
{
    return new AttachVpnGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachVpnGatewayRequestPrivate
 *
 * @brief  Private implementation for AttachVpnGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachVpnGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AttachVpnGatewayRequest instance.
 */
AttachVpnGatewayRequestPrivate::AttachVpnGatewayRequestPrivate(
    const EC2Request::Action action, AttachVpnGatewayRequest * const q)
    : AttachVpnGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachVpnGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachVpnGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachVpnGatewayRequest instance.
 */
AttachVpnGatewayRequestPrivate::AttachVpnGatewayRequestPrivate(
    const AttachVpnGatewayRequestPrivate &other, AttachVpnGatewayRequest * const q)
    : AttachVpnGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
