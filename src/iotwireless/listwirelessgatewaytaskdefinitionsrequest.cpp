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

#include "listwirelessgatewaytaskdefinitionsrequest.h"
#include "listwirelessgatewaytaskdefinitionsrequest_p.h"
#include "listwirelessgatewaytaskdefinitionsresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewayTaskDefinitionsRequest
 * \brief The ListWirelessGatewayTaskDefinitionsRequest class provides an interface for IoTWireless ListWirelessGatewayTaskDefinitions requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listWirelessGatewayTaskDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListWirelessGatewayTaskDefinitionsRequest::ListWirelessGatewayTaskDefinitionsRequest(const ListWirelessGatewayTaskDefinitionsRequest &other)
    : IoTWirelessRequest(new ListWirelessGatewayTaskDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWirelessGatewayTaskDefinitionsRequest object.
 */
ListWirelessGatewayTaskDefinitionsRequest::ListWirelessGatewayTaskDefinitionsRequest()
    : IoTWirelessRequest(new ListWirelessGatewayTaskDefinitionsRequestPrivate(IoTWirelessRequest::ListWirelessGatewayTaskDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWirelessGatewayTaskDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWirelessGatewayTaskDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWirelessGatewayTaskDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListWirelessGatewayTaskDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListWirelessGatewayTaskDefinitionsRequestPrivate
 * \brief The ListWirelessGatewayTaskDefinitionsRequestPrivate class provides private implementation for ListWirelessGatewayTaskDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListWirelessGatewayTaskDefinitionsRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListWirelessGatewayTaskDefinitionsRequestPrivate::ListWirelessGatewayTaskDefinitionsRequestPrivate(
    const IoTWirelessRequest::Action action, ListWirelessGatewayTaskDefinitionsRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWirelessGatewayTaskDefinitionsRequest
 * class' copy constructor.
 */
ListWirelessGatewayTaskDefinitionsRequestPrivate::ListWirelessGatewayTaskDefinitionsRequestPrivate(
    const ListWirelessGatewayTaskDefinitionsRequestPrivate &other, ListWirelessGatewayTaskDefinitionsRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
