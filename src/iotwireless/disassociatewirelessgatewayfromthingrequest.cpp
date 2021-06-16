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

#include "disassociatewirelessgatewayfromthingrequest.h"
#include "disassociatewirelessgatewayfromthingrequest_p.h"
#include "disassociatewirelessgatewayfromthingresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromThingRequest
 * \brief The DisassociateWirelessGatewayFromThingRequest class provides an interface for IoTWireless DisassociateWirelessGatewayFromThing requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::disassociateWirelessGatewayFromThing
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateWirelessGatewayFromThingRequest::DisassociateWirelessGatewayFromThingRequest(const DisassociateWirelessGatewayFromThingRequest &other)
    : IoTWirelessRequest(new DisassociateWirelessGatewayFromThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateWirelessGatewayFromThingRequest object.
 */
DisassociateWirelessGatewayFromThingRequest::DisassociateWirelessGatewayFromThingRequest()
    : IoTWirelessRequest(new DisassociateWirelessGatewayFromThingRequestPrivate(IoTWirelessRequest::DisassociateWirelessGatewayFromThingAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateWirelessGatewayFromThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateWirelessGatewayFromThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateWirelessGatewayFromThingRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateWirelessGatewayFromThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromThingRequestPrivate
 * \brief The DisassociateWirelessGatewayFromThingRequestPrivate class provides private implementation for DisassociateWirelessGatewayFromThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromThingRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DisassociateWirelessGatewayFromThingRequestPrivate::DisassociateWirelessGatewayFromThingRequestPrivate(
    const IoTWirelessRequest::Action action, DisassociateWirelessGatewayFromThingRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateWirelessGatewayFromThingRequest
 * class' copy constructor.
 */
DisassociateWirelessGatewayFromThingRequestPrivate::DisassociateWirelessGatewayFromThingRequestPrivate(
    const DisassociateWirelessGatewayFromThingRequestPrivate &other, DisassociateWirelessGatewayFromThingRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
