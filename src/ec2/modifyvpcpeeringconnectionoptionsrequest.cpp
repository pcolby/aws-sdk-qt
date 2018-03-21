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

#include "modifyvpcpeeringconnectionoptionsrequest.h"
#include "modifyvpcpeeringconnectionoptionsrequest_p.h"
#include "modifyvpcpeeringconnectionoptionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVpcPeeringConnectionOptionsRequest
 *
 * @brief  Implements EC2 ModifyVpcPeeringConnectionOptions requests.
 *
 * @see    EC2Client::modifyVpcPeeringConnectionOptions
 */

/**
 * @brief  Constructs a new ModifyVpcPeeringConnectionOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcPeeringConnectionOptionsRequest::ModifyVpcPeeringConnectionOptionsRequest(const ModifyVpcPeeringConnectionOptionsRequest &other)
    : EC2Request(new ModifyVpcPeeringConnectionOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcPeeringConnectionOptionsRequest object.
 */
ModifyVpcPeeringConnectionOptionsRequest::ModifyVpcPeeringConnectionOptionsRequest()
    : EC2Request(new ModifyVpcPeeringConnectionOptionsRequestPrivate(EC2Request::ModifyVpcPeeringConnectionOptionsAction, this))
{

}

bool ModifyVpcPeeringConnectionOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcPeeringConnectionOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcPeeringConnectionOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVpcPeeringConnectionOptionsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcPeeringConnectionOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcPeeringConnectionOptionsRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcPeeringConnectionOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcPeeringConnectionOptionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcPeeringConnectionOptionsRequest instance.
 */
ModifyVpcPeeringConnectionOptionsRequestPrivate::ModifyVpcPeeringConnectionOptionsRequestPrivate(
    const EC2Request::Action action, ModifyVpcPeeringConnectionOptionsRequest * const q)
    : ModifyVpcPeeringConnectionOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcPeeringConnectionOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcPeeringConnectionOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcPeeringConnectionOptionsRequest instance.
 */
ModifyVpcPeeringConnectionOptionsRequestPrivate::ModifyVpcPeeringConnectionOptionsRequestPrivate(
    const ModifyVpcPeeringConnectionOptionsRequestPrivate &other, ModifyVpcPeeringConnectionOptionsRequest * const q)
    : ModifyVpcPeeringConnectionOptionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
