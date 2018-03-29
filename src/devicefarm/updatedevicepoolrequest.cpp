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

#include "updatedevicepoolrequest.h"
#include "updatedevicepoolrequest_p.h"
#include "updatedevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  UpdateDevicePoolRequest
 *
 * @brief  Implements DeviceFarm UpdateDevicePool requests.
 *
 * @see    DeviceFarmClient::updateDevicePool
 */

/**
 * @brief  Constructs a new UpdateDevicePoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDevicePoolRequest::UpdateDevicePoolRequest(const UpdateDevicePoolRequest &other)
    : DeviceFarmRequest(new UpdateDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDevicePoolRequest object.
 */
UpdateDevicePoolRequest::UpdateDevicePoolRequest()
    : DeviceFarmRequest(new UpdateDevicePoolRequestPrivate(DeviceFarmRequest::UpdateDevicePoolAction, this))
{

}

bool UpdateDevicePoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDevicePoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDevicePoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * UpdateDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevicePoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDevicePoolRequestPrivate
 *
 * @brief  Private implementation for UpdateDevicePoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDevicePoolRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public UpdateDevicePoolRequest instance.
 */
UpdateDevicePoolRequestPrivate::UpdateDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateDevicePoolRequest * const q)
    : UpdateDevicePoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDevicePoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevicePoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDevicePoolRequest instance.
 */
UpdateDevicePoolRequestPrivate::UpdateDevicePoolRequestPrivate(
    const UpdateDevicePoolRequestPrivate &other, UpdateDevicePoolRequest * const q)
    : UpdateDevicePoolPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
