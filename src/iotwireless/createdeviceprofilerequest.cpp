// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeviceprofilerequest.h"
#include "createdeviceprofilerequest_p.h"
#include "createdeviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileRequest
 * \brief The CreateDeviceProfileRequest class provides an interface for IoTWireless CreateDeviceProfile requests.
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
 * \sa IoTWirelessClient::createDeviceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeviceProfileRequest::CreateDeviceProfileRequest(const CreateDeviceProfileRequest &other)
    : IoTWirelessRequest(new CreateDeviceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeviceProfileRequest object.
 */
CreateDeviceProfileRequest::CreateDeviceProfileRequest()
    : IoTWirelessRequest(new CreateDeviceProfileRequestPrivate(IoTWirelessRequest::CreateDeviceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeviceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeviceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileRequestPrivate
 * \brief The CreateDeviceProfileRequestPrivate class provides private implementation for CreateDeviceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDeviceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateDeviceProfileRequestPrivate::CreateDeviceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, CreateDeviceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceProfileRequest
 * class' copy constructor.
 */
CreateDeviceProfileRequestPrivate::CreateDeviceProfileRequestPrivate(
    const CreateDeviceProfileRequestPrivate &other, CreateDeviceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
