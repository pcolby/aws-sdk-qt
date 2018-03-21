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

#include "createvpcpeeringconnectionrequest.h"
#include "createvpcpeeringconnectionrequest_p.h"
#include "createvpcpeeringconnectionresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcPeeringConnectionRequest
 *
 * @brief  Implements EC2 CreateVpcPeeringConnection requests.
 *
 * @see    EC2Client::createVpcPeeringConnection
 */

/**
 * @brief  Constructs a new CreateVpcPeeringConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest(const CreateVpcPeeringConnectionRequest &other)
    : EC2Request(new CreateVpcPeeringConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcPeeringConnectionRequest object.
 */
CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest()
    : EC2Request(new CreateVpcPeeringConnectionRequestPrivate(EC2Request::CreateVpcPeeringConnectionAction, this))
{

}

bool CreateVpcPeeringConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcPeeringConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcPeeringConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpcPeeringConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcPeeringConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcPeeringConnectionRequestPrivate
 *
 * @brief  Private implementation for CreateVpcPeeringConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringConnectionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpcPeeringConnectionRequest instance.
 */
CreateVpcPeeringConnectionRequestPrivate::CreateVpcPeeringConnectionRequestPrivate(
    const EC2Request::Action action, CreateVpcPeeringConnectionRequest * const q)
    : CreateVpcPeeringConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcPeeringConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcPeeringConnectionRequest instance.
 */
CreateVpcPeeringConnectionRequestPrivate::CreateVpcPeeringConnectionRequestPrivate(
    const CreateVpcPeeringConnectionRequestPrivate &other, CreateVpcPeeringConnectionRequest * const q)
    : CreateVpcPeeringConnectionPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
