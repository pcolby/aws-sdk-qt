// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceprofilerequest.h"
#include "getserviceprofilerequest_p.h"
#include "getserviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceProfileRequest
 * \brief The GetServiceProfileRequest class provides an interface for IoTWireless GetServiceProfile requests.
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
 * \sa IoTWirelessClient::getServiceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceProfileRequest::GetServiceProfileRequest(const GetServiceProfileRequest &other)
    : IoTWirelessRequest(new GetServiceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceProfileRequest object.
 */
GetServiceProfileRequest::GetServiceProfileRequest()
    : IoTWirelessRequest(new GetServiceProfileRequestPrivate(IoTWirelessRequest::GetServiceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetServiceProfileRequestPrivate
 * \brief The GetServiceProfileRequestPrivate class provides private implementation for GetServiceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetServiceProfileRequestPrivate::GetServiceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, GetServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceProfileRequest
 * class' copy constructor.
 */
GetServiceProfileRequestPrivate::GetServiceProfileRequestPrivate(
    const GetServiceProfileRequestPrivate &other, GetServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
