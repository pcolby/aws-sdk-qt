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

#include "getwirelessgatewaytaskrequest.h"
#include "getwirelessgatewaytaskrequest_p.h"
#include "getwirelessgatewaytaskresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskRequest
 * \brief The GetWirelessGatewayTaskRequest class provides an interface for IoTWireless GetWirelessGatewayTask requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetWirelessGatewayTaskRequest::GetWirelessGatewayTaskRequest(const GetWirelessGatewayTaskRequest &other)
    : IoTWirelessRequest(new GetWirelessGatewayTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWirelessGatewayTaskRequest object.
 */
GetWirelessGatewayTaskRequest::GetWirelessGatewayTaskRequest()
    : IoTWirelessRequest(new GetWirelessGatewayTaskRequestPrivate(IoTWirelessRequest::GetWirelessGatewayTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetWirelessGatewayTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWirelessGatewayTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWirelessGatewayTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetWirelessGatewayTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskRequestPrivate
 * \brief The GetWirelessGatewayTaskRequestPrivate class provides private implementation for GetWirelessGatewayTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayTaskRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetWirelessGatewayTaskRequestPrivate::GetWirelessGatewayTaskRequestPrivate(
    const IoTWirelessRequest::Action action, GetWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWirelessGatewayTaskRequest
 * class' copy constructor.
 */
GetWirelessGatewayTaskRequestPrivate::GetWirelessGatewayTaskRequestPrivate(
    const GetWirelessGatewayTaskRequestPrivate &other, GetWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
