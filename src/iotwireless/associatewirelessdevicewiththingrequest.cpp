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

#include "associatewirelessdevicewiththingrequest.h"
#include "associatewirelessdevicewiththingrequest_p.h"
#include "associatewirelessdevicewiththingresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithThingRequest
 * \brief The AssociateWirelessDeviceWithThingRequest class provides an interface for IoTWireless AssociateWirelessDeviceWithThing requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::associateWirelessDeviceWithThing
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateWirelessDeviceWithThingRequest::AssociateWirelessDeviceWithThingRequest(const AssociateWirelessDeviceWithThingRequest &other)
    : IoTWirelessRequest(new AssociateWirelessDeviceWithThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateWirelessDeviceWithThingRequest object.
 */
AssociateWirelessDeviceWithThingRequest::AssociateWirelessDeviceWithThingRequest()
    : IoTWirelessRequest(new AssociateWirelessDeviceWithThingRequestPrivate(IoTWirelessRequest::AssociateWirelessDeviceWithThingAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateWirelessDeviceWithThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateWirelessDeviceWithThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateWirelessDeviceWithThingRequest::response(QNetworkReply * const reply) const
{
    return new AssociateWirelessDeviceWithThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithThingRequestPrivate
 * \brief The AssociateWirelessDeviceWithThingRequestPrivate class provides private implementation for AssociateWirelessDeviceWithThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessDeviceWithThingRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
AssociateWirelessDeviceWithThingRequestPrivate::AssociateWirelessDeviceWithThingRequestPrivate(
    const IoTWirelessRequest::Action action, AssociateWirelessDeviceWithThingRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateWirelessDeviceWithThingRequest
 * class' copy constructor.
 */
AssociateWirelessDeviceWithThingRequestPrivate::AssociateWirelessDeviceWithThingRequestPrivate(
    const AssociateWirelessDeviceWithThingRequestPrivate &other, AssociateWirelessDeviceWithThingRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
