// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourceloglevelrequest.h"
#include "putresourceloglevelrequest_p.h"
#include "putresourceloglevelresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::PutResourceLogLevelRequest
 * \brief The PutResourceLogLevelRequest class provides an interface for IoTWireless PutResourceLogLevel requests.
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
 * \sa IoTWirelessClient::putResourceLogLevel
 */

/*!
 * Constructs a copy of \a other.
 */
PutResourceLogLevelRequest::PutResourceLogLevelRequest(const PutResourceLogLevelRequest &other)
    : IoTWirelessRequest(new PutResourceLogLevelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutResourceLogLevelRequest object.
 */
PutResourceLogLevelRequest::PutResourceLogLevelRequest()
    : IoTWirelessRequest(new PutResourceLogLevelRequestPrivate(IoTWirelessRequest::PutResourceLogLevelAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourceLogLevelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutResourceLogLevelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourceLogLevelRequest::response(QNetworkReply * const reply) const
{
    return new PutResourceLogLevelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::PutResourceLogLevelRequestPrivate
 * \brief The PutResourceLogLevelRequestPrivate class provides private implementation for PutResourceLogLevelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a PutResourceLogLevelRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
PutResourceLogLevelRequestPrivate::PutResourceLogLevelRequestPrivate(
    const IoTWirelessRequest::Action action, PutResourceLogLevelRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutResourceLogLevelRequest
 * class' copy constructor.
 */
PutResourceLogLevelRequestPrivate::PutResourceLogLevelRequestPrivate(
    const PutResourceLogLevelRequestPrivate &other, PutResourceLogLevelRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
