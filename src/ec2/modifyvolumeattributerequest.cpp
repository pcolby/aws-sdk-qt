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

#include "modifyvolumeattributerequest.h"
#include "modifyvolumeattributerequest_p.h"
#include "modifyvolumeattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVolumeAttributeRequest
 *
 * @brief  Implements EC2 ModifyVolumeAttribute requests.
 *
 * @see    EC2Client::modifyVolumeAttribute
 */

/**
 * @brief  Constructs a new ModifyVolumeAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVolumeAttributeRequest::ModifyVolumeAttributeRequest(const ModifyVolumeAttributeRequest &other)
    : EC2Request(new ModifyVolumeAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVolumeAttributeRequest object.
 */
ModifyVolumeAttributeRequest::ModifyVolumeAttributeRequest()
    : EC2Request(new ModifyVolumeAttributeRequestPrivate(EC2Request::ModifyVolumeAttributeAction, this))
{

}

bool ModifyVolumeAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVolumeAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVolumeAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVolumeAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVolumeAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVolumeAttributeRequestPrivate
 *
 * @brief  Private implementation for ModifyVolumeAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVolumeAttributeRequest instance.
 */
ModifyVolumeAttributeRequestPrivate::ModifyVolumeAttributeRequestPrivate(
    const EC2Request::Action action, ModifyVolumeAttributeRequest * const q)
    : ModifyVolumeAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVolumeAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVolumeAttributeRequest instance.
 */
ModifyVolumeAttributeRequestPrivate::ModifyVolumeAttributeRequestPrivate(
    const ModifyVolumeAttributeRequestPrivate &other, ModifyVolumeAttributeRequest * const q)
    : ModifyVolumeAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
