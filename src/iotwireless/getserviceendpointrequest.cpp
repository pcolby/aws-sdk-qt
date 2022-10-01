// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceendpointrequest.h"
#include "getserviceendpointrequest_p.h"
#include "getserviceendpointresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceEndpointRequest
 * \brief The GetServiceEndpointRequest class provides an interface for IoTWireless GetServiceEndpoint requests.
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
 * \sa IoTWirelessClient::getServiceEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceEndpointRequest::GetServiceEndpointRequest(const GetServiceEndpointRequest &other)
    : IoTWirelessRequest(new GetServiceEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceEndpointRequest object.
 */
GetServiceEndpointRequest::GetServiceEndpointRequest()
    : IoTWirelessRequest(new GetServiceEndpointRequestPrivate(IoTWirelessRequest::GetServiceEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetServiceEndpointRequestPrivate
 * \brief The GetServiceEndpointRequestPrivate class provides private implementation for GetServiceEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceEndpointRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetServiceEndpointRequestPrivate::GetServiceEndpointRequestPrivate(
    const IoTWirelessRequest::Action action, GetServiceEndpointRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceEndpointRequest
 * class' copy constructor.
 */
GetServiceEndpointRequestPrivate::GetServiceEndpointRequestPrivate(
    const GetServiceEndpointRequestPrivate &other, GetServiceEndpointRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
