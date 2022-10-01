// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourceeventconfigurationrequest.h"
#include "updateresourceeventconfigurationrequest_p.h"
#include "updateresourceeventconfigurationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateResourceEventConfigurationRequest
 * \brief The UpdateResourceEventConfigurationRequest class provides an interface for IoTWireless UpdateResourceEventConfiguration requests.
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
 * \sa IoTWirelessClient::updateResourceEventConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResourceEventConfigurationRequest::UpdateResourceEventConfigurationRequest(const UpdateResourceEventConfigurationRequest &other)
    : IoTWirelessRequest(new UpdateResourceEventConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResourceEventConfigurationRequest object.
 */
UpdateResourceEventConfigurationRequest::UpdateResourceEventConfigurationRequest()
    : IoTWirelessRequest(new UpdateResourceEventConfigurationRequestPrivate(IoTWirelessRequest::UpdateResourceEventConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResourceEventConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResourceEventConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResourceEventConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceEventConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::UpdateResourceEventConfigurationRequestPrivate
 * \brief The UpdateResourceEventConfigurationRequestPrivate class provides private implementation for UpdateResourceEventConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateResourceEventConfigurationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
UpdateResourceEventConfigurationRequestPrivate::UpdateResourceEventConfigurationRequestPrivate(
    const IoTWirelessRequest::Action action, UpdateResourceEventConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceEventConfigurationRequest
 * class' copy constructor.
 */
UpdateResourceEventConfigurationRequestPrivate::UpdateResourceEventConfigurationRequestPrivate(
    const UpdateResourceEventConfigurationRequestPrivate &other, UpdateResourceEventConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
