// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmulticastgroupsbyfuotataskrequest.h"
#include "listmulticastgroupsbyfuotataskrequest_p.h"
#include "listmulticastgroupsbyfuotataskresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListMulticastGroupsByFuotaTaskRequest
 * \brief The ListMulticastGroupsByFuotaTaskRequest class provides an interface for IoTWireless ListMulticastGroupsByFuotaTask requests.
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
 * \sa IoTWirelessClient::listMulticastGroupsByFuotaTask
 */

/*!
 * Constructs a copy of \a other.
 */
ListMulticastGroupsByFuotaTaskRequest::ListMulticastGroupsByFuotaTaskRequest(const ListMulticastGroupsByFuotaTaskRequest &other)
    : IoTWirelessRequest(new ListMulticastGroupsByFuotaTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMulticastGroupsByFuotaTaskRequest object.
 */
ListMulticastGroupsByFuotaTaskRequest::ListMulticastGroupsByFuotaTaskRequest()
    : IoTWirelessRequest(new ListMulticastGroupsByFuotaTaskRequestPrivate(IoTWirelessRequest::ListMulticastGroupsByFuotaTaskAction, this))
{

}

/*!
 * \reimp
 */
bool ListMulticastGroupsByFuotaTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMulticastGroupsByFuotaTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMulticastGroupsByFuotaTaskRequest::response(QNetworkReply * const reply) const
{
    return new ListMulticastGroupsByFuotaTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListMulticastGroupsByFuotaTaskRequestPrivate
 * \brief The ListMulticastGroupsByFuotaTaskRequestPrivate class provides private implementation for ListMulticastGroupsByFuotaTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListMulticastGroupsByFuotaTaskRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListMulticastGroupsByFuotaTaskRequestPrivate::ListMulticastGroupsByFuotaTaskRequestPrivate(
    const IoTWirelessRequest::Action action, ListMulticastGroupsByFuotaTaskRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMulticastGroupsByFuotaTaskRequest
 * class' copy constructor.
 */
ListMulticastGroupsByFuotaTaskRequestPrivate::ListMulticastGroupsByFuotaTaskRequestPrivate(
    const ListMulticastGroupsByFuotaTaskRequestPrivate &other, ListMulticastGroupsByFuotaTaskRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
