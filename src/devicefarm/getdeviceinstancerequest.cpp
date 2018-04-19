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
 * \brief The GetDeviceInstanceRequest class provides an interface for DeviceFarm GetDeviceInstance requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDeviceInstance
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceInstanceRequest::GetDeviceInstanceRequest(const GetDeviceInstanceRequest &other)
    : DeviceFarmRequest(new GetDeviceInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceInstanceRequest object.
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
 * Returns a GetDeviceInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceRequestPrivate
 * \brief The GetDeviceInstanceRequestPrivate class provides private implementation for GetDeviceInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a GetDeviceInstanceRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
GetDeviceInstanceRequestPrivate::GetDeviceInstanceRequestPrivate(
    const DeviceFarmRequest::Action action, GetDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceInstanceRequest
 * class' copy constructor.
 */
GetDeviceInstanceRequestPrivate::GetDeviceInstanceRequestPrivate(
    const GetDeviceInstanceRequestPrivate &other, GetDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
