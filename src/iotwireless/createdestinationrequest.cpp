// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdestinationrequest.h"
#include "createdestinationrequest_p.h"
#include "createdestinationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDestinationRequest
 * \brief The CreateDestinationRequest class provides an interface for IoTWireless CreateDestination requests.
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
 * \sa IoTWirelessClient::createDestination
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDestinationRequest::CreateDestinationRequest(const CreateDestinationRequest &other)
    : IoTWirelessRequest(new CreateDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDestinationRequest object.
 */
CreateDestinationRequest::CreateDestinationRequest()
    : IoTWirelessRequest(new CreateDestinationRequestPrivate(IoTWirelessRequest::CreateDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDestinationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateDestinationRequestPrivate
 * \brief The CreateDestinationRequestPrivate class provides private implementation for CreateDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDestinationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateDestinationRequestPrivate::CreateDestinationRequestPrivate(
    const IoTWirelessRequest::Action action, CreateDestinationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDestinationRequest
 * class' copy constructor.
 */
CreateDestinationRequestPrivate::CreateDestinationRequestPrivate(
    const CreateDestinationRequestPrivate &other, CreateDestinationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
