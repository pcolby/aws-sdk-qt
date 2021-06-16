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

#include "listwirelessgatewaysrequest.h"
#include "listwirelessgatewaysrequest_p.h"
#include "listwirelessgatewaysresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewaysRequest
 * \brief The ListWirelessGatewaysRequest class provides an interface for IoTWireless ListWirelessGateways requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listWirelessGateways
 */

/*!
 * Constructs a copy of \a other.
 */
ListWirelessGatewaysRequest::ListWirelessGatewaysRequest(const ListWirelessGatewaysRequest &other)
    : IoTWirelessRequest(new ListWirelessGatewaysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWirelessGatewaysRequest object.
 */
ListWirelessGatewaysRequest::ListWirelessGatewaysRequest()
    : IoTWirelessRequest(new ListWirelessGatewaysRequestPrivate(IoTWirelessRequest::ListWirelessGatewaysAction, this))
{

}

/*!
 * \reimp
 */
bool ListWirelessGatewaysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWirelessGatewaysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWirelessGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new ListWirelessGatewaysResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewaysRequestPrivate
 * \brief The ListWirelessGatewaysRequestPrivate class provides private implementation for ListWirelessGatewaysRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListWirelessGatewaysRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListWirelessGatewaysRequestPrivate::ListWirelessGatewaysRequestPrivate(
    const IoTWirelessRequest::Action action, ListWirelessGatewaysRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWirelessGatewaysRequest
 * class' copy constructor.
 */
ListWirelessGatewaysRequestPrivate::ListWirelessGatewaysRequestPrivate(
    const ListWirelessGatewaysRequestPrivate &other, ListWirelessGatewaysRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
