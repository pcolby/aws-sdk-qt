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

#include "deletevpngatewayrequest.h"
#include "deletevpngatewayrequest_p.h"
#include "deletevpngatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteVpnGatewayRequest
 *
 * @brief  Implements EC2 DeleteVpnGateway requests.
 *
 * @see    EC2Client::deleteVpnGateway
 */

/**
 * @brief  Constructs a new DeleteVpnGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpnGatewayRequest::DeleteVpnGatewayRequest(const DeleteVpnGatewayRequest &other)
    : EC2Request(new DeleteVpnGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpnGatewayRequest object.
 */
DeleteVpnGatewayRequest::DeleteVpnGatewayRequest()
    : EC2Request(new DeleteVpnGatewayRequestPrivate(EC2Request::DeleteVpnGatewayAction, this))
{

}

bool DeleteVpnGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpnGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpnGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpnGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpnGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpnGatewayRequestPrivate
 *
 * @brief  Private implementation for DeleteVpnGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpnGatewayRequest instance.
 */
DeleteVpnGatewayRequestPrivate::DeleteVpnGatewayRequestPrivate(
    const EC2Request::Action action, DeleteVpnGatewayRequest * const q)
    : DeleteVpnGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpnGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpnGatewayRequest instance.
 */
DeleteVpnGatewayRequestPrivate::DeleteVpnGatewayRequestPrivate(
    const DeleteVpnGatewayRequestPrivate &other, DeleteVpnGatewayRequest * const q)
    : DeleteVpnGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
