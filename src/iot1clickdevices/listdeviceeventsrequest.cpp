// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceeventsrequest.h"
#include "listdeviceeventsrequest_p.h"
#include "listdeviceeventsresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::ListDeviceEventsRequest
 * \brief The ListDeviceEventsRequest class provides an interface for IoT1ClickDevices ListDeviceEvents requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::listDeviceEvents
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceEventsRequest::ListDeviceEventsRequest(const ListDeviceEventsRequest &other)
    : IoT1ClickDevicesRequest(new ListDeviceEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceEventsRequest object.
 */
ListDeviceEventsRequest::ListDeviceEventsRequest()
    : IoT1ClickDevicesRequest(new ListDeviceEventsRequestPrivate(IoT1ClickDevicesRequest::ListDeviceEventsAction, this))
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
 * \class QtAws::IoT1ClickDevices::ListDeviceEventsRequestPrivate
 * \brief The ListDeviceEventsRequestPrivate class provides private implementation for ListDeviceEventsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a ListDeviceEventsRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
ListDeviceEventsRequestPrivate::ListDeviceEventsRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, ListDeviceEventsRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
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
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
