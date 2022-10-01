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

#include "deletewirelessgatewaytaskrequest.h"
#include "deletewirelessgatewaytaskrequest_p.h"
#include "deletewirelessgatewaytaskresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskRequest
 * \brief The DeleteWirelessGatewayTaskRequest class provides an interface for IoTWireless DeleteWirelessGatewayTask requests.
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
 * \sa IoTWirelessClient::deleteWirelessGatewayTask
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWirelessGatewayTaskRequest::DeleteWirelessGatewayTaskRequest(const DeleteWirelessGatewayTaskRequest &other)
    : IoTWirelessRequest(new DeleteWirelessGatewayTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWirelessGatewayTaskRequest object.
 */
DeleteWirelessGatewayTaskRequest::DeleteWirelessGatewayTaskRequest()
    : IoTWirelessRequest(new DeleteWirelessGatewayTaskRequestPrivate(IoTWirelessRequest::DeleteWirelessGatewayTaskAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWirelessGatewayTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWirelessGatewayTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWirelessGatewayTaskRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWirelessGatewayTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayTaskRequestPrivate
 * \brief The DeleteWirelessGatewayTaskRequestPrivate class provides private implementation for DeleteWirelessGatewayTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayTaskRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteWirelessGatewayTaskRequestPrivate::DeleteWirelessGatewayTaskRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWirelessGatewayTaskRequest
 * class' copy constructor.
 */
DeleteWirelessGatewayTaskRequestPrivate::DeleteWirelessGatewayTaskRequestPrivate(
    const DeleteWirelessGatewayTaskRequestPrivate &other, DeleteWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
