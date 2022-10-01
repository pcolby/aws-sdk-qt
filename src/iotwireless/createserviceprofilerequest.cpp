/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createserviceprofilerequest.h"
#include "createserviceprofilerequest_p.h"
#include "createserviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateServiceProfileRequest
 * \brief The CreateServiceProfileRequest class provides an interface for IoTWireless CreateServiceProfile requests.
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
 * \sa IoTWirelessClient::createServiceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateServiceProfileRequest::CreateServiceProfileRequest(const CreateServiceProfileRequest &other)
    : IoTWirelessRequest(new CreateServiceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateServiceProfileRequest object.
 */
CreateServiceProfileRequest::CreateServiceProfileRequest()
    : IoTWirelessRequest(new CreateServiceProfileRequestPrivate(IoTWirelessRequest::CreateServiceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateServiceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateServiceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateServiceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateServiceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateServiceProfileRequestPrivate
 * \brief The CreateServiceProfileRequestPrivate class provides private implementation for CreateServiceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateServiceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateServiceProfileRequestPrivate::CreateServiceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, CreateServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateServiceProfileRequest
 * class' copy constructor.
 */
CreateServiceProfileRequestPrivate::CreateServiceProfileRequestPrivate(
    const CreateServiceProfileRequestPrivate &other, CreateServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
