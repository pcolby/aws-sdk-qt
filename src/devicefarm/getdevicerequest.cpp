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

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  GetDeviceRequest
 *
 * @brief  Implements DeviceFarm GetDevice requests.
 *
 * @see    DeviceFarmClient::getDevice
 */

/**
 * @brief  Constructs a new GetDeviceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : DeviceFarmRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : DeviceFarmRequest(new GetDeviceRequestPrivate(DeviceFarmRequest::GetDeviceAction, this))
{

}

bool GetDeviceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeviceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeviceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeviceRequestPrivate
 *
 * @brief  Private implementation for GetDeviceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetDeviceRequest instance.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const DeviceFarmRequest::Action action, GetDeviceRequest * const q)
    : GetDevicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeviceRequest instance.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : GetDevicePrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
