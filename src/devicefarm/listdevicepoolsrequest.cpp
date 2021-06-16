/*
    Copyright 2013-2021 Paul Colby

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

#include "listdevicepoolsrequest.h"
#include "listdevicepoolsrequest_p.h"
#include "listdevicepoolsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsRequest
 * \brief The ListDevicePoolsRequest class provides an interface for DeviceFarm ListDevicePools requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listDevicePools
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicePoolsRequest::ListDevicePoolsRequest(const ListDevicePoolsRequest &other)
    : DeviceFarmRequest(new ListDevicePoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicePoolsRequest object.
 */
ListDevicePoolsRequest::ListDevicePoolsRequest()
    : DeviceFarmRequest(new ListDevicePoolsRequestPrivate(DeviceFarmRequest::ListDevicePoolsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicePoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicePoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicePoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicePoolsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsRequestPrivate
 * \brief The ListDevicePoolsRequestPrivate class provides private implementation for ListDevicePoolsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDevicePoolsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListDevicePoolsRequestPrivate::ListDevicePoolsRequestPrivate(
    const DeviceFarmRequest::Action action, ListDevicePoolsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicePoolsRequest
 * class' copy constructor.
 */
ListDevicePoolsRequestPrivate::ListDevicePoolsRequestPrivate(
    const ListDevicePoolsRequestPrivate &other, ListDevicePoolsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
