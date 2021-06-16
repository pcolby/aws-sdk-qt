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

#include "listdeviceprofilesrequest.h"
#include "listdeviceprofilesrequest_p.h"
#include "listdeviceprofilesresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListDeviceProfilesRequest
 * \brief The ListDeviceProfilesRequest class provides an interface for IoTWireless ListDeviceProfiles requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listDeviceProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceProfilesRequest::ListDeviceProfilesRequest(const ListDeviceProfilesRequest &other)
    : IoTWirelessRequest(new ListDeviceProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceProfilesRequest object.
 */
ListDeviceProfilesRequest::ListDeviceProfilesRequest()
    : IoTWirelessRequest(new ListDeviceProfilesRequestPrivate(IoTWirelessRequest::ListDeviceProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListDeviceProfilesRequestPrivate
 * \brief The ListDeviceProfilesRequestPrivate class provides private implementation for ListDeviceProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListDeviceProfilesRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListDeviceProfilesRequestPrivate::ListDeviceProfilesRequestPrivate(
    const IoTWirelessRequest::Action action, ListDeviceProfilesRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceProfilesRequest
 * class' copy constructor.
 */
ListDeviceProfilesRequestPrivate::ListDeviceProfilesRequestPrivate(
    const ListDeviceProfilesRequestPrivate &other, ListDeviceProfilesRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
