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

#include "deletevpnconnectionrequest.h"
#include "deletevpnconnectionrequest_p.h"
#include "deletevpnconnectionresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpnConnectionRequest
 *
 * @brief  Implements EC2 DeleteVpnConnection requests.
 *
 * @see    EC2Client::deleteVpnConnection
 */

/**
 * @brief  Constructs a new DeleteVpnConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpnConnectionResponse::DeleteVpnConnectionResponse(

/**
 * @brief  Constructs a new DeleteVpnConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpnConnectionRequest::DeleteVpnConnectionRequest(const DeleteVpnConnectionRequest &other)
    : EC2Request(new DeleteVpnConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpnConnectionRequest object.
 */
DeleteVpnConnectionRequest::DeleteVpnConnectionRequest()
    : EC2Request(new DeleteVpnConnectionRequestPrivate(EC2Request::DeleteVpnConnectionAction, this))
{

}

bool DeleteVpnConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpnConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpnConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpnConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpnConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpnConnectionRequestPrivate
 *
 * @brief  Private implementation for DeleteVpnConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnConnectionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpnConnectionRequest instance.
 */
DeleteVpnConnectionRequestPrivate::DeleteVpnConnectionRequestPrivate(
    const EC2Request::Action action, DeleteVpnConnectionRequest * const q)
    : DeleteVpnConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpnConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpnConnectionRequest instance.
 */
DeleteVpnConnectionRequestPrivate::DeleteVpnConnectionRequestPrivate(
    const DeleteVpnConnectionRequestPrivate &other, DeleteVpnConnectionRequest * const q)
    : DeleteVpnConnectionPrivate(other, q)
{

}
