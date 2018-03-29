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

#include "modifyvpcendpointservicepermissionsrequest.h"
#include "modifyvpcendpointservicepermissionsrequest_p.h"
#include "modifyvpcendpointservicepermissionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointServicePermissionsRequest
 *
 * @brief  Implements EC2 ModifyVpcEndpointServicePermissions requests.
 *
 * @see    EC2Client::modifyVpcEndpointServicePermissions
 */

/**
 * @brief  Constructs a new ModifyVpcEndpointServicePermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcEndpointServicePermissionsRequest::ModifyVpcEndpointServicePermissionsRequest(const ModifyVpcEndpointServicePermissionsRequest &other)
    : EC2Request(new ModifyVpcEndpointServicePermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcEndpointServicePermissionsRequest object.
 */
ModifyVpcEndpointServicePermissionsRequest::ModifyVpcEndpointServicePermissionsRequest()
    : EC2Request(new ModifyVpcEndpointServicePermissionsRequestPrivate(EC2Request::ModifyVpcEndpointServicePermissionsAction, this))
{

}

bool ModifyVpcEndpointServicePermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcEndpointServicePermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcEndpointServicePermissionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVpcEndpointServicePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcEndpointServicePermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointServicePermissionsRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointServicePermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointServicePermissionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcEndpointServicePermissionsRequest instance.
 */
ModifyVpcEndpointServicePermissionsRequestPrivate::ModifyVpcEndpointServicePermissionsRequestPrivate(
    const EC2Request::Action action, ModifyVpcEndpointServicePermissionsRequest * const q)
    : ModifyVpcEndpointServicePermissionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointServicePermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcEndpointServicePermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcEndpointServicePermissionsRequest instance.
 */
ModifyVpcEndpointServicePermissionsRequestPrivate::ModifyVpcEndpointServicePermissionsRequestPrivate(
    const ModifyVpcEndpointServicePermissionsRequestPrivate &other, ModifyVpcEndpointServicePermissionsRequest * const q)
    : ModifyVpcEndpointServicePermissionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
