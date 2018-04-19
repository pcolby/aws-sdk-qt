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

#include "deletedevicepoolrequest.h"
#include "deletedevicepoolrequest_p.h"
#include "deletedevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteDevicePoolRequest
 * \brief The DeleteDevicePoolRequest class provides an interface for DeviceFarm DeleteDevicePool requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteDevicePool
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDevicePoolRequest::DeleteDevicePoolRequest(const DeleteDevicePoolRequest &other)
    : DeviceFarmRequest(new DeleteDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDevicePoolRequest object.
 */
DeleteDevicePoolRequest::DeleteDevicePoolRequest()
    : DeviceFarmRequest(new DeleteDevicePoolRequestPrivate(DeviceFarmRequest::DeleteDevicePoolAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDevicePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDevicePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDevicePoolResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteDevicePoolRequestPrivate
 * \brief The DeleteDevicePoolRequestPrivate class provides private implementation for DeleteDevicePoolRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a DeleteDevicePoolRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
DeleteDevicePoolRequestPrivate::DeleteDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDevicePoolRequest
 * class' copy constructor.
 */
DeleteDevicePoolRequestPrivate::DeleteDevicePoolRequestPrivate(
    const DeleteDevicePoolRequestPrivate &other, DeleteDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
