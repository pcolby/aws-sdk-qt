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

#include "listfuotatasksrequest.h"
#include "listfuotatasksrequest_p.h"
#include "listfuotatasksresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListFuotaTasksRequest
 * \brief The ListFuotaTasksRequest class provides an interface for IoTWireless ListFuotaTasks requests.
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
 * \sa IoTWirelessClient::listFuotaTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListFuotaTasksRequest::ListFuotaTasksRequest(const ListFuotaTasksRequest &other)
    : IoTWirelessRequest(new ListFuotaTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFuotaTasksRequest object.
 */
ListFuotaTasksRequest::ListFuotaTasksRequest()
    : IoTWirelessRequest(new ListFuotaTasksRequestPrivate(IoTWirelessRequest::ListFuotaTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListFuotaTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFuotaTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFuotaTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListFuotaTasksResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ListFuotaTasksRequestPrivate
 * \brief The ListFuotaTasksRequestPrivate class provides private implementation for ListFuotaTasksRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListFuotaTasksRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ListFuotaTasksRequestPrivate::ListFuotaTasksRequestPrivate(
    const IoTWirelessRequest::Action action, ListFuotaTasksRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFuotaTasksRequest
 * class' copy constructor.
 */
ListFuotaTasksRequestPrivate::ListFuotaTasksRequestPrivate(
    const ListFuotaTasksRequestPrivate &other, ListFuotaTasksRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
