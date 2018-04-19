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

#include "createdevicepoolrequest.h"
#include "createdevicepoolrequest_p.h"
#include "createdevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateDevicePoolRequest
 * \brief The CreateDevicePoolRequest class provides an interface for DeviceFarm CreateDevicePool requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createDevicePool
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDevicePoolRequest::CreateDevicePoolRequest(const CreateDevicePoolRequest &other)
    : DeviceFarmRequest(new CreateDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDevicePoolRequest object.
 */
CreateDevicePoolRequest::CreateDevicePoolRequest()
    : DeviceFarmRequest(new CreateDevicePoolRequestPrivate(DeviceFarmRequest::CreateDevicePoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDevicePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDevicePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateDevicePoolResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateDevicePoolRequestPrivate
 * \brief The CreateDevicePoolRequestPrivate class provides private implementation for CreateDevicePoolRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a CreateDevicePoolRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
CreateDevicePoolRequestPrivate::CreateDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, CreateDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDevicePoolRequest
 * class' copy constructor.
 */
CreateDevicePoolRequestPrivate::CreateDevicePoolRequestPrivate(
    const CreateDevicePoolRequestPrivate &other, CreateDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
