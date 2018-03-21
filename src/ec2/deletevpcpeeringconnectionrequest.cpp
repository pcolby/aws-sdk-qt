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

#include "deletevpcpeeringconnectionrequest.h"
#include "deletevpcpeeringconnectionrequest_p.h"
#include "deletevpcpeeringconnectionresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpcPeeringConnectionRequest
 *
 * @brief  Implements EC2 DeleteVpcPeeringConnection requests.
 *
 * @see    EC2Client::deleteVpcPeeringConnection
 */

/**
 * @brief  Constructs a new DeleteVpcPeeringConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcPeeringConnectionResponse::DeleteVpcPeeringConnectionResponse(

/**
 * @brief  Constructs a new DeleteVpcPeeringConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpcPeeringConnectionRequest::DeleteVpcPeeringConnectionRequest(const DeleteVpcPeeringConnectionRequest &other)
    : EC2Request(new DeleteVpcPeeringConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpcPeeringConnectionRequest object.
 */
DeleteVpcPeeringConnectionRequest::DeleteVpcPeeringConnectionRequest()
    : EC2Request(new DeleteVpcPeeringConnectionRequestPrivate(EC2Request::DeleteVpcPeeringConnectionAction, this))
{

}

bool DeleteVpcPeeringConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpcPeeringConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpcPeeringConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpcPeeringConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcPeeringConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpcPeeringConnectionRequestPrivate
 *
 * @brief  Private implementation for DeleteVpcPeeringConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcPeeringConnectionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpcPeeringConnectionRequest instance.
 */
DeleteVpcPeeringConnectionRequestPrivate::DeleteVpcPeeringConnectionRequestPrivate(
    const EC2Request::Action action, DeleteVpcPeeringConnectionRequest * const q)
    : DeleteVpcPeeringConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcPeeringConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcPeeringConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpcPeeringConnectionRequest instance.
 */
DeleteVpcPeeringConnectionRequestPrivate::DeleteVpcPeeringConnectionRequestPrivate(
    const DeleteVpcPeeringConnectionRequestPrivate &other, DeleteVpcPeeringConnectionRequest * const q)
    : DeleteVpcPeeringConnectionPrivate(other, q)
{

}
