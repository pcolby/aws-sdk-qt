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

#include "modifyvpcendpointrequest.h"
#include "modifyvpcendpointrequest_p.h"
#include "modifyvpcendpointresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointRequest
 *
 * @brief  Implements EC2 ModifyVpcEndpoint requests.
 *
 * @see    EC2Client::modifyVpcEndpoint
 */

/**
 * @brief  Constructs a new ModifyVpcEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcEndpointRequest::ModifyVpcEndpointRequest(const ModifyVpcEndpointRequest &other)
    : EC2Request(new ModifyVpcEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcEndpointRequest object.
 */
ModifyVpcEndpointRequest::ModifyVpcEndpointRequest()
    : EC2Request(new ModifyVpcEndpointRequestPrivate(EC2Request::ModifyVpcEndpointAction, this))
{

}

bool ModifyVpcEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifyVpcEndpointRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcEndpointRequest instance.
 */
ModifyVpcEndpointRequestPrivate::ModifyVpcEndpointRequestPrivate(
    const EC2Request::Action action, ModifyVpcEndpointRequest * const q)
    : ModifyVpcEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcEndpointRequest instance.
 */
ModifyVpcEndpointRequestPrivate::ModifyVpcEndpointRequestPrivate(
    const ModifyVpcEndpointRequestPrivate &other, ModifyVpcEndpointRequest * const q)
    : ModifyVpcEndpointPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
