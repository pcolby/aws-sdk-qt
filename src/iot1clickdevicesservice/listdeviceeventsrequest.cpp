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

#include "listdeviceeventsrequest.h"
#include "listdeviceeventsrequest_p.h"
#include "listdeviceeventsresponse.h"
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::ListDeviceEventsRequest
 * \brief The ListDeviceEventsRequest class provides an interface for IoT1ClickDevicesService ListDeviceEvents requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Stub
 *
 * \sa IoT1ClickDevicesServiceClient::listDeviceEvents
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceEventsRequest::ListDeviceEventsRequest(const ListDeviceEventsRequest &other)
    : IoT1ClickDevicesServiceRequest(new ListDeviceEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceEventsRequest object.
 */
ListDeviceEventsRequest::ListDeviceEventsRequest()
    : IoT1ClickDevicesServiceRequest(new ListDeviceEventsRequestPrivate(IoT1ClickDevicesServiceRequest::ListDeviceEventsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceEventsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceEventsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevicesService::ListDeviceEventsRequestPrivate
 * \brief The ListDeviceEventsRequestPrivate class provides private implementation for ListDeviceEventsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a ListDeviceEventsRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
ListDeviceEventsRequestPrivate::ListDeviceEventsRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, ListDeviceEventsRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceEventsRequest
 * class' copy constructor.
 */
ListDeviceEventsRequestPrivate::ListDeviceEventsRequestPrivate(
    const ListDeviceEventsRequestPrivate &other, ListDeviceEventsRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
