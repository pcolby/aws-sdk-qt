// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpositionconfigurationrequest.h"
#include "getpositionconfigurationrequest_p.h"
#include "getpositionconfigurationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetPositionConfigurationRequest
 * \brief The GetPositionConfigurationRequest class provides an interface for IoTWireless GetPositionConfiguration requests.
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
 * \sa IoTWirelessClient::getPositionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetPositionConfigurationRequest::GetPositionConfigurationRequest(const GetPositionConfigurationRequest &other)
    : IoTWirelessRequest(new GetPositionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPositionConfigurationRequest object.
 */
GetPositionConfigurationRequest::GetPositionConfigurationRequest()
    : IoTWirelessRequest(new GetPositionConfigurationRequestPrivate(IoTWirelessRequest::GetPositionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetPositionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPositionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPositionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetPositionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetPositionConfigurationRequestPrivate
 * \brief The GetPositionConfigurationRequestPrivate class provides private implementation for GetPositionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetPositionConfigurationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetPositionConfigurationRequestPrivate::GetPositionConfigurationRequestPrivate(
    const IoTWirelessRequest::Action action, GetPositionConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPositionConfigurationRequest
 * class' copy constructor.
 */
GetPositionConfigurationRequestPrivate::GetPositionConfigurationRequestPrivate(
    const GetPositionConfigurationRequestPrivate &other, GetPositionConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
