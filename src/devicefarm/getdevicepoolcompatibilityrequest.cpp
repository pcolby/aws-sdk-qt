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

#include "getdevicepoolcompatibilityrequest.h"
#include "getdevicepoolcompatibilityrequest_p.h"
#include "getdevicepoolcompatibilityresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityRequest
 * \brief The GetDevicePoolCompatibilityRequest class provides an interface for DeviceFarm GetDevicePoolCompatibility requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevicePoolCompatibility
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePoolCompatibilityRequest::GetDevicePoolCompatibilityRequest(const GetDevicePoolCompatibilityRequest &other)
    : DeviceFarmRequest(new GetDevicePoolCompatibilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePoolCompatibilityRequest object.
 */
GetDevicePoolCompatibilityRequest::GetDevicePoolCompatibilityRequest()
    : DeviceFarmRequest(new GetDevicePoolCompatibilityRequestPrivate(DeviceFarmRequest::GetDevicePoolCompatibilityAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePoolCompatibilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePoolCompatibilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePoolCompatibilityRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePoolCompatibilityResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityRequestPrivate
 * \brief The GetDevicePoolCompatibilityRequestPrivate class provides private implementation for GetDevicePoolCompatibilityRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a GetDevicePoolCompatibilityRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
GetDevicePoolCompatibilityRequestPrivate::GetDevicePoolCompatibilityRequestPrivate(
    const DeviceFarmRequest::Action action, GetDevicePoolCompatibilityRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePoolCompatibilityRequest
 * class' copy constructor.
 */
GetDevicePoolCompatibilityRequestPrivate::GetDevicePoolCompatibilityRequestPrivate(
    const GetDevicePoolCompatibilityRequestPrivate &other, GetDevicePoolCompatibilityRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
