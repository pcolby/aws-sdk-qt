// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkanalyzerconfigurationrequest.h"
#include "getnetworkanalyzerconfigurationrequest_p.h"
#include "getnetworkanalyzerconfigurationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetNetworkAnalyzerConfigurationRequest
 * \brief The GetNetworkAnalyzerConfigurationRequest class provides an interface for IoTWireless GetNetworkAnalyzerConfiguration requests.
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
 * \sa IoTWirelessClient::getNetworkAnalyzerConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkAnalyzerConfigurationRequest::GetNetworkAnalyzerConfigurationRequest(const GetNetworkAnalyzerConfigurationRequest &other)
    : IoTWirelessRequest(new GetNetworkAnalyzerConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkAnalyzerConfigurationRequest object.
 */
GetNetworkAnalyzerConfigurationRequest::GetNetworkAnalyzerConfigurationRequest()
    : IoTWirelessRequest(new GetNetworkAnalyzerConfigurationRequestPrivate(IoTWirelessRequest::GetNetworkAnalyzerConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkAnalyzerConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkAnalyzerConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkAnalyzerConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkAnalyzerConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetNetworkAnalyzerConfigurationRequestPrivate
 * \brief The GetNetworkAnalyzerConfigurationRequestPrivate class provides private implementation for GetNetworkAnalyzerConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetNetworkAnalyzerConfigurationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetNetworkAnalyzerConfigurationRequestPrivate::GetNetworkAnalyzerConfigurationRequestPrivate(
    const IoTWirelessRequest::Action action, GetNetworkAnalyzerConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkAnalyzerConfigurationRequest
 * class' copy constructor.
 */
GetNetworkAnalyzerConfigurationRequestPrivate::GetNetworkAnalyzerConfigurationRequestPrivate(
    const GetNetworkAnalyzerConfigurationRequestPrivate &other, GetNetworkAnalyzerConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
