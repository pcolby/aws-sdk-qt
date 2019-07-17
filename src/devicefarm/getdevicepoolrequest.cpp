/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdevicepoolrequest.h"
#include "getdevicepoolrequest_p.h"
#include "getdevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolRequest
 * \brief The GetDevicePoolRequest class provides an interface for DeviceFarm GetDevicePool requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevicePool
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePoolRequest::GetDevicePoolRequest(const GetDevicePoolRequest &other)
    : DeviceFarmRequest(new GetDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePoolRequest object.
 */
GetDevicePoolRequest::GetDevicePoolRequest()
    : DeviceFarmRequest(new GetDevicePoolRequestPrivate(DeviceFarmRequest::GetDevicePoolAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePoolResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolRequestPrivate
 * \brief The GetDevicePoolRequestPrivate class provides private implementation for GetDevicePoolRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDevicePoolRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetDevicePoolRequestPrivate::GetDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, GetDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePoolRequest
 * class' copy constructor.
 */
GetDevicePoolRequestPrivate::GetDevicePoolRequestPrivate(
    const GetDevicePoolRequestPrivate &other, GetDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
