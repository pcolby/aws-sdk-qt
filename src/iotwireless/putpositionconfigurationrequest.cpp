// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpositionconfigurationrequest.h"
#include "putpositionconfigurationrequest_p.h"
#include "putpositionconfigurationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::PutPositionConfigurationRequest
 * \brief The PutPositionConfigurationRequest class provides an interface for IoTWireless PutPositionConfiguration requests.
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
 * \sa IoTWirelessClient::putPositionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutPositionConfigurationRequest::PutPositionConfigurationRequest(const PutPositionConfigurationRequest &other)
    : IoTWirelessRequest(new PutPositionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPositionConfigurationRequest object.
 */
PutPositionConfigurationRequest::PutPositionConfigurationRequest()
    : IoTWirelessRequest(new PutPositionConfigurationRequestPrivate(IoTWirelessRequest::PutPositionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutPositionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPositionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPositionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutPositionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::PutPositionConfigurationRequestPrivate
 * \brief The PutPositionConfigurationRequestPrivate class provides private implementation for PutPositionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a PutPositionConfigurationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
PutPositionConfigurationRequestPrivate::PutPositionConfigurationRequestPrivate(
    const IoTWirelessRequest::Action action, PutPositionConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPositionConfigurationRequest
 * class' copy constructor.
 */
PutPositionConfigurationRequestPrivate::PutPositionConfigurationRequestPrivate(
    const PutPositionConfigurationRequestPrivate &other, PutPositionConfigurationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
