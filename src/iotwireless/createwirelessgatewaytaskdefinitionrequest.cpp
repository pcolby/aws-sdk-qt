// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwirelessgatewaytaskdefinitionrequest.h"
#include "createwirelessgatewaytaskdefinitionrequest_p.h"
#include "createwirelessgatewaytaskdefinitionresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskDefinitionRequest
 * \brief The CreateWirelessGatewayTaskDefinitionRequest class provides an interface for IoTWireless CreateWirelessGatewayTaskDefinition requests.
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
 * \sa IoTWirelessClient::createWirelessGatewayTaskDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWirelessGatewayTaskDefinitionRequest::CreateWirelessGatewayTaskDefinitionRequest(const CreateWirelessGatewayTaskDefinitionRequest &other)
    : IoTWirelessRequest(new CreateWirelessGatewayTaskDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWirelessGatewayTaskDefinitionRequest object.
 */
CreateWirelessGatewayTaskDefinitionRequest::CreateWirelessGatewayTaskDefinitionRequest()
    : IoTWirelessRequest(new CreateWirelessGatewayTaskDefinitionRequestPrivate(IoTWirelessRequest::CreateWirelessGatewayTaskDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWirelessGatewayTaskDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWirelessGatewayTaskDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWirelessGatewayTaskDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateWirelessGatewayTaskDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskDefinitionRequestPrivate
 * \brief The CreateWirelessGatewayTaskDefinitionRequestPrivate class provides private implementation for CreateWirelessGatewayTaskDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayTaskDefinitionRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateWirelessGatewayTaskDefinitionRequestPrivate::CreateWirelessGatewayTaskDefinitionRequestPrivate(
    const IoTWirelessRequest::Action action, CreateWirelessGatewayTaskDefinitionRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWirelessGatewayTaskDefinitionRequest
 * class' copy constructor.
 */
CreateWirelessGatewayTaskDefinitionRequestPrivate::CreateWirelessGatewayTaskDefinitionRequestPrivate(
    const CreateWirelessGatewayTaskDefinitionRequestPrivate &other, CreateWirelessGatewayTaskDefinitionRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
