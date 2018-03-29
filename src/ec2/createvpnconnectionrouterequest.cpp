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

#include "createvpnconnectionrouterequest.h"
#include "createvpnconnectionrouterequest_p.h"
#include "createvpnconnectionrouteresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpnConnectionRouteRequest
 *
 * @brief  Implements EC2 CreateVpnConnectionRoute requests.
 *
 * @see    EC2Client::createVpnConnectionRoute
 */

/**
 * @brief  Constructs a new CreateVpnConnectionRouteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpnConnectionRouteRequest::CreateVpnConnectionRouteRequest(const CreateVpnConnectionRouteRequest &other)
    : EC2Request(new CreateVpnConnectionRouteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpnConnectionRouteRequest object.
 */
CreateVpnConnectionRouteRequest::CreateVpnConnectionRouteRequest()
    : EC2Request(new CreateVpnConnectionRouteRequestPrivate(EC2Request::CreateVpnConnectionRouteAction, this))
{

}

bool CreateVpnConnectionRouteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpnConnectionRouteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpnConnectionRouteResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpnConnectionRouteRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpnConnectionRouteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpnConnectionRouteRequestPrivate
 *
 * @brief  Private implementation for CreateVpnConnectionRouteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnConnectionRouteRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpnConnectionRouteRequest instance.
 */
CreateVpnConnectionRouteRequestPrivate::CreateVpnConnectionRouteRequestPrivate(
    const EC2Request::Action action, CreateVpnConnectionRouteRequest * const q)
    : CreateVpnConnectionRoutePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnConnectionRouteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpnConnectionRouteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpnConnectionRouteRequest instance.
 */
CreateVpnConnectionRouteRequestPrivate::CreateVpnConnectionRouteRequestPrivate(
    const CreateVpnConnectionRouteRequestPrivate &other, CreateVpnConnectionRouteRequest * const q)
    : CreateVpnConnectionRoutePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
