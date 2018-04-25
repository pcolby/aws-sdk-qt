/*
    Copyright 2013-2018 Paul Colby

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

#include "listdeviceinstancesrequest.h"
#include "listdeviceinstancesrequest_p.h"
#include "listdeviceinstancesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDeviceInstancesRequest
 * \brief The ListDeviceInstancesRequest class provides an interface for DeviceFarm ListDeviceInstances requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listDeviceInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceInstancesRequest::ListDeviceInstancesRequest(const ListDeviceInstancesRequest &other)
    : DeviceFarmRequest(new ListDeviceInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceInstancesRequest object.
 */
ListDeviceInstancesRequest::ListDeviceInstancesRequest()
    : DeviceFarmRequest(new ListDeviceInstancesRequestPrivate(DeviceFarmRequest::ListDeviceInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListDeviceInstancesRequestPrivate
 * \brief The ListDeviceInstancesRequestPrivate class provides private implementation for ListDeviceInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDeviceInstancesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListDeviceInstancesRequestPrivate::ListDeviceInstancesRequestPrivate(
    const DeviceFarmRequest::Action action, ListDeviceInstancesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceInstancesRequest
 * class' copy constructor.
 */
ListDeviceInstancesRequestPrivate::ListDeviceInstancesRequestPrivate(
    const ListDeviceInstancesRequestPrivate &other, ListDeviceInstancesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
