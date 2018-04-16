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

#include "getdeviceinstancerequest.h"
#include "getdeviceinstancerequest_p.h"
#include "getdeviceinstanceresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceRequest
 *
 * \brief The GetDeviceInstanceRequest class provides an interface for DeviceFarm GetDeviceInstance requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDeviceInstance
 */

/*!
 * @brief  Constructs a new GetDeviceInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeviceInstanceRequest::GetDeviceInstanceRequest(const GetDeviceInstanceRequest &other)
    : DeviceFarmRequest(new GetDeviceInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDeviceInstanceRequest object.
 */
GetDeviceInstanceRequest::GetDeviceInstanceRequest()
    : DeviceFarmRequest(new GetDeviceInstanceRequestPrivate(DeviceFarmRequest::GetDeviceInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetDeviceInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeviceInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDeviceInstanceRequestPrivate
 *
 * @brief  Private implementation for GetDeviceInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeviceInstanceRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetDeviceInstanceRequest instance.
 */
GetDeviceInstanceRequestPrivate::GetDeviceInstanceRequestPrivate(
    const DeviceFarmRequest::Action action, GetDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeviceInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeviceInstanceRequest instance.
 */
GetDeviceInstanceRequestPrivate::GetDeviceInstanceRequestPrivate(
    const GetDeviceInstanceRequestPrivate &other, GetDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
