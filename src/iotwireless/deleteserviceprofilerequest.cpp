// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteserviceprofilerequest.h"
#include "deleteserviceprofilerequest_p.h"
#include "deleteserviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteServiceProfileRequest
 * \brief The DeleteServiceProfileRequest class provides an interface for IoTWireless DeleteServiceProfile requests.
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
 * \sa IoTWirelessClient::deleteServiceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceProfileRequest::DeleteServiceProfileRequest(const DeleteServiceProfileRequest &other)
    : IoTWirelessRequest(new DeleteServiceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceProfileRequest object.
 */
DeleteServiceProfileRequest::DeleteServiceProfileRequest()
    : IoTWirelessRequest(new DeleteServiceProfileRequestPrivate(IoTWirelessRequest::DeleteServiceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteServiceProfileRequestPrivate
 * \brief The DeleteServiceProfileRequestPrivate class provides private implementation for DeleteServiceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteServiceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteServiceProfileRequestPrivate::DeleteServiceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceProfileRequest
 * class' copy constructor.
 */
DeleteServiceProfileRequestPrivate::DeleteServiceProfileRequestPrivate(
    const DeleteServiceProfileRequestPrivate &other, DeleteServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
