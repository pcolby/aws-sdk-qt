// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
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
