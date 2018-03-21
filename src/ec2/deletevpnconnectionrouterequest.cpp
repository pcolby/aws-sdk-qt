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

#include "deletevpnconnectionrouterequest.h"
#include "deletevpnconnectionrouterequest_p.h"
#include "deletevpnconnectionrouteresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpnConnectionRouteRequest
 *
 * @brief  Implements EC2 DeleteVpnConnectionRoute requests.
 *
 * @see    EC2Client::deleteVpnConnectionRoute
 */

/**
 * @brief  Constructs a new DeleteVpnConnectionRouteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpnConnectionRouteResponse::DeleteVpnConnectionRouteResponse(

/**
 * @brief  Constructs a new DeleteVpnConnectionRouteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpnConnectionRouteRequest::DeleteVpnConnectionRouteRequest(const DeleteVpnConnectionRouteRequest &other)
    : EC2Request(new DeleteVpnConnectionRouteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpnConnectionRouteRequest object.
 */
DeleteVpnConnectionRouteRequest::DeleteVpnConnectionRouteRequest()
    : EC2Request(new DeleteVpnConnectionRouteRequestPrivate(EC2Request::DeleteVpnConnectionRouteAction, this))
{

}

bool DeleteVpnConnectionRouteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpnConnectionRouteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpnConnectionRouteResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpnConnectionRouteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpnConnectionRouteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpnConnectionRouteRequestPrivate
 *
 * @brief  Private implementation for DeleteVpnConnectionRouteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnConnectionRouteRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpnConnectionRouteRequest instance.
 */
DeleteVpnConnectionRouteRequestPrivate::DeleteVpnConnectionRouteRequestPrivate(
    const EC2Request::Action action, DeleteVpnConnectionRouteRequest * const q)
    : DeleteVpnConnectionRoutePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnConnectionRouteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpnConnectionRouteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpnConnectionRouteRequest instance.
 */
DeleteVpnConnectionRouteRequestPrivate::DeleteVpnConnectionRouteRequestPrivate(
    const DeleteVpnConnectionRouteRequestPrivate &other, DeleteVpnConnectionRouteRequest * const q)
    : DeleteVpnConnectionRoutePrivate(other, q)
{

}
