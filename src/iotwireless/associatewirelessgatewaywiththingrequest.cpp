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

#include "associatewirelessgatewaywiththingrequest.h"
#include "associatewirelessgatewaywiththingrequest_p.h"
#include "associatewirelessgatewaywiththingresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithThingRequest
 * \brief The AssociateWirelessGatewayWithThingRequest class provides an interface for IoTWireless AssociateWirelessGatewayWithThing requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::associateWirelessGatewayWithThing
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateWirelessGatewayWithThingRequest::AssociateWirelessGatewayWithThingRequest(const AssociateWirelessGatewayWithThingRequest &other)
    : IoTWirelessRequest(new AssociateWirelessGatewayWithThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateWirelessGatewayWithThingRequest object.
 */
AssociateWirelessGatewayWithThingRequest::AssociateWirelessGatewayWithThingRequest()
    : IoTWirelessRequest(new AssociateWirelessGatewayWithThingRequestPrivate(IoTWirelessRequest::AssociateWirelessGatewayWithThingAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateWirelessGatewayWithThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateWirelessGatewayWithThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateWirelessGatewayWithThingRequest::response(QNetworkReply * const reply) const
{
    return new AssociateWirelessGatewayWithThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessGatewayWithThingRequestPrivate
 * \brief The AssociateWirelessGatewayWithThingRequestPrivate class provides private implementation for AssociateWirelessGatewayWithThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessGatewayWithThingRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
AssociateWirelessGatewayWithThingRequestPrivate::AssociateWirelessGatewayWithThingRequestPrivate(
    const IoTWirelessRequest::Action action, AssociateWirelessGatewayWithThingRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateWirelessGatewayWithThingRequest
 * class' copy constructor.
 */
AssociateWirelessGatewayWithThingRequestPrivate::AssociateWirelessGatewayWithThingRequestPrivate(
    const AssociateWirelessGatewayWithThingRequestPrivate &other, AssociateWirelessGatewayWithThingRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
