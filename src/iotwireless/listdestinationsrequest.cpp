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

#include "listdestinationsrequest.h"
#include "listdestinationsrequest_p.h"
#include "listdestinationsresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListDestinationsRequest
 * \brief The ListDestinationsRequest class provides an interface for IoTWireless ListDestinations requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listDestinations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDestinationsRequest::ListDestinationsRequest(const ListDestinationsRequest &other)
    : IoTWirelessRequest(new ListDestinationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDestinationsRequest object.
 */
ListDestinationsRequest::ListDestinationsRequest()
    : IoTWirelessRequest(new ListDestinationsRequestPrivate(IoTWirelessRequest::ListDestinationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDestinationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDestinationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDestinationsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListDestinationsRequestPrivate
 * \brief The ListDestinationsRequestPrivate class provides private implementation for ListDestinationsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListDestinationsRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListDestinationsRequestPrivate::ListDestinationsRequestPrivate(
    const IoTWirelessRequest::Action action, ListDestinationsRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDestinationsRequest
 * class' copy constructor.
 */
ListDestinationsRequestPrivate::ListDestinationsRequestPrivate(
    const ListDestinationsRequestPrivate &other, ListDestinationsRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
