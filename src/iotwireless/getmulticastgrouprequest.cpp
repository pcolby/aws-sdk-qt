// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmulticastgrouprequest.h"
#include "getmulticastgrouprequest_p.h"
#include "getmulticastgroupresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetMulticastGroupRequest
 * \brief The GetMulticastGroupRequest class provides an interface for IoTWireless GetMulticastGroup requests.
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
 * \sa IoTWirelessClient::getMulticastGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetMulticastGroupRequest::GetMulticastGroupRequest(const GetMulticastGroupRequest &other)
    : IoTWirelessRequest(new GetMulticastGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMulticastGroupRequest object.
 */
GetMulticastGroupRequest::GetMulticastGroupRequest()
    : IoTWirelessRequest(new GetMulticastGroupRequestPrivate(IoTWirelessRequest::GetMulticastGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetMulticastGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMulticastGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMulticastGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetMulticastGroupResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetMulticastGroupRequestPrivate
 * \brief The GetMulticastGroupRequestPrivate class provides private implementation for GetMulticastGroupRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetMulticastGroupRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetMulticastGroupRequestPrivate::GetMulticastGroupRequestPrivate(
    const IoTWirelessRequest::Action action, GetMulticastGroupRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMulticastGroupRequest
 * class' copy constructor.
 */
GetMulticastGroupRequestPrivate::GetMulticastGroupRequestPrivate(
    const GetMulticastGroupRequestPrivate &other, GetMulticastGroupRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
