// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesrequest.h"
#include "listdevicesrequest_p.h"
#include "listdevicesresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::ListDevicesRequest
 * \brief The ListDevicesRequest class provides an interface for IoT1ClickDevices ListDevices requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::listDevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicesRequest::ListDevicesRequest(const ListDevicesRequest &other)
    : IoT1ClickDevicesRequest(new ListDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicesRequest object.
 */
ListDevicesRequest::ListDevicesRequest()
    : IoT1ClickDevicesRequest(new ListDevicesRequestPrivate(IoT1ClickDevicesRequest::ListDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevices::ListDevicesRequestPrivate
 * \brief The ListDevicesRequestPrivate class provides private implementation for ListDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a ListDevicesRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, ListDevicesRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesRequest
 * class' copy constructor.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const ListDevicesRequestPrivate &other, ListDevicesRequest * const q)
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
