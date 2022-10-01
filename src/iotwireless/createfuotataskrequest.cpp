// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfuotataskrequest.h"
#include "createfuotataskrequest_p.h"
#include "createfuotataskresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateFuotaTaskRequest
 * \brief The CreateFuotaTaskRequest class provides an interface for IoTWireless CreateFuotaTask requests.
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
 * \sa IoTWirelessClient::createFuotaTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFuotaTaskRequest::CreateFuotaTaskRequest(const CreateFuotaTaskRequest &other)
    : IoTWirelessRequest(new CreateFuotaTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFuotaTaskRequest object.
 */
CreateFuotaTaskRequest::CreateFuotaTaskRequest()
    : IoTWirelessRequest(new CreateFuotaTaskRequestPrivate(IoTWirelessRequest::CreateFuotaTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFuotaTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFuotaTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFuotaTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateFuotaTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateFuotaTaskRequestPrivate
 * \brief The CreateFuotaTaskRequestPrivate class provides private implementation for CreateFuotaTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateFuotaTaskRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateFuotaTaskRequestPrivate::CreateFuotaTaskRequestPrivate(
    const IoTWirelessRequest::Action action, CreateFuotaTaskRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFuotaTaskRequest
 * class' copy constructor.
 */
CreateFuotaTaskRequestPrivate::CreateFuotaTaskRequestPrivate(
    const CreateFuotaTaskRequestPrivate &other, CreateFuotaTaskRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
