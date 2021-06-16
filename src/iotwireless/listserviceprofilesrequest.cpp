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

#include "listserviceprofilesrequest.h"
#include "listserviceprofilesrequest_p.h"
#include "listserviceprofilesresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListServiceProfilesRequest
 * \brief The ListServiceProfilesRequest class provides an interface for IoTWireless ListServiceProfiles requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listServiceProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListServiceProfilesRequest::ListServiceProfilesRequest(const ListServiceProfilesRequest &other)
    : IoTWirelessRequest(new ListServiceProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServiceProfilesRequest object.
 */
ListServiceProfilesRequest::ListServiceProfilesRequest()
    : IoTWirelessRequest(new ListServiceProfilesRequestPrivate(IoTWirelessRequest::ListServiceProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListServiceProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServiceProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServiceProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListServiceProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListServiceProfilesRequestPrivate
 * \brief The ListServiceProfilesRequestPrivate class provides private implementation for ListServiceProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListServiceProfilesRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListServiceProfilesRequestPrivate::ListServiceProfilesRequestPrivate(
    const IoTWirelessRequest::Action action, ListServiceProfilesRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServiceProfilesRequest
 * class' copy constructor.
 */
ListServiceProfilesRequestPrivate::ListServiceProfilesRequestPrivate(
    const ListServiceProfilesRequestPrivate &other, ListServiceProfilesRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
