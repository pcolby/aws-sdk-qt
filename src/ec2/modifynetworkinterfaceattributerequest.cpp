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

#include "modifynetworkinterfaceattributerequest.h"
#include "modifynetworkinterfaceattributerequest_p.h"
#include "modifynetworkinterfaceattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyNetworkInterfaceAttributeRequest
 *
 * @brief  Implements EC2 ModifyNetworkInterfaceAttribute requests.
 *
 * @see    EC2Client::modifyNetworkInterfaceAttribute
 */

/**
 * @brief  Constructs a new ModifyNetworkInterfaceAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest(const ModifyNetworkInterfaceAttributeRequest &other)
    : EC2Request(new ModifyNetworkInterfaceAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyNetworkInterfaceAttributeRequest object.
 */
ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest()
    : EC2Request(new ModifyNetworkInterfaceAttributeRequestPrivate(EC2Request::ModifyNetworkInterfaceAttributeAction, this))
{

}

bool ModifyNetworkInterfaceAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyNetworkInterfaceAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyNetworkInterfaceAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyNetworkInterfaceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyNetworkInterfaceAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyNetworkInterfaceAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyNetworkInterfaceAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyNetworkInterfaceAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyNetworkInterfaceAttributeRequest instance.
 */
ModifyNetworkInterfaceAttributeRequestPrivate::ModifyNetworkInterfaceAttributeRequestPrivate(
    const EC2Request::Action action, ModifyNetworkInterfaceAttributeRequest * const q)
    : ModifyNetworkInterfaceAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyNetworkInterfaceAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyNetworkInterfaceAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyNetworkInterfaceAttributeRequest instance.
 */
ModifyNetworkInterfaceAttributeRequestPrivate::ModifyNetworkInterfaceAttributeRequestPrivate(
    const ModifyNetworkInterfaceAttributeRequestPrivate &other, ModifyNetworkInterfaceAttributeRequest * const q)
    : ModifyNetworkInterfaceAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
