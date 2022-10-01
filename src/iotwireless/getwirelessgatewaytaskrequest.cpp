// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getwirelessgatewaytaskrequest.h"
#include "getwirelessgatewaytaskrequest_p.h"
#include "getwirelessgatewaytaskresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskRequest
 * \brief The GetWirelessGatewayTaskRequest class provides an interface for IoTWireless GetWirelessGatewayTask requests.
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
 * \sa IoTWirelessClient::getWirelessGatewayTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetWirelessGatewayTaskRequest::GetWirelessGatewayTaskRequest(const GetWirelessGatewayTaskRequest &other)
    : IoTWirelessRequest(new GetWirelessGatewayTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWirelessGatewayTaskRequest object.
 */
GetWirelessGatewayTaskRequest::GetWirelessGatewayTaskRequest()
    : IoTWirelessRequest(new GetWirelessGatewayTaskRequestPrivate(IoTWirelessRequest::GetWirelessGatewayTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetWirelessGatewayTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWirelessGatewayTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWirelessGatewayTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetWirelessGatewayTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskRequestPrivate
 * \brief The GetWirelessGatewayTaskRequestPrivate class provides private implementation for GetWirelessGatewayTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayTaskRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetWirelessGatewayTaskRequestPrivate::GetWirelessGatewayTaskRequestPrivate(
    const IoTWirelessRequest::Action action, GetWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWirelessGatewayTaskRequest
 * class' copy constructor.
 */
GetWirelessGatewayTaskRequestPrivate::GetWirelessGatewayTaskRequestPrivate(
    const GetWirelessGatewayTaskRequestPrivate &other, GetWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
