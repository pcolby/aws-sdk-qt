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

#include "modifyvolumerequest.h"
#include "modifyvolumerequest_p.h"
#include "modifyvolumeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVolumeRequest
 *
 * @brief  Implements EC2 ModifyVolume requests.
 *
 * @see    EC2Client::modifyVolume
 */

/**
 * @brief  Constructs a new ModifyVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVolumeResponse::ModifyVolumeResponse(

/**
 * @brief  Constructs a new ModifyVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVolumeRequest::ModifyVolumeRequest(const ModifyVolumeRequest &other)
    : EC2Request(new ModifyVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVolumeRequest object.
 */
ModifyVolumeRequest::ModifyVolumeRequest()
    : EC2Request(new ModifyVolumeRequestPrivate(EC2Request::ModifyVolumeAction, this))
{

}

bool ModifyVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVolumeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVolumeRequestPrivate
 *
 * @brief  Private implementation for ModifyVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVolumeRequest instance.
 */
ModifyVolumeRequestPrivate::ModifyVolumeRequestPrivate(
    const EC2Request::Action action, ModifyVolumeRequest * const q)
    : ModifyVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVolumeRequest instance.
 */
ModifyVolumeRequestPrivate::ModifyVolumeRequestPrivate(
    const ModifyVolumeRequestPrivate &other, ModifyVolumeRequest * const q)
    : ModifyVolumePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
