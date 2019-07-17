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

#include "updatedevicepoolrequest.h"
#include "updatedevicepoolrequest_p.h"
#include "updatedevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolRequest
 * \brief The UpdateDevicePoolRequest class provides an interface for DeviceFarm UpdateDevicePool requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateDevicePool
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDevicePoolRequest::UpdateDevicePoolRequest(const UpdateDevicePoolRequest &other)
    : DeviceFarmRequest(new UpdateDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDevicePoolRequest object.
 */
UpdateDevicePoolRequest::UpdateDevicePoolRequest()
    : DeviceFarmRequest(new UpdateDevicePoolRequestPrivate(DeviceFarmRequest::UpdateDevicePoolAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDevicePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDevicePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevicePoolResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolRequestPrivate
 * \brief The UpdateDevicePoolRequestPrivate class provides private implementation for UpdateDevicePoolRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateDevicePoolRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateDevicePoolRequestPrivate::UpdateDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevicePoolRequest
 * class' copy constructor.
 */
UpdateDevicePoolRequestPrivate::UpdateDevicePoolRequestPrivate(
    const UpdateDevicePoolRequestPrivate &other, UpdateDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
