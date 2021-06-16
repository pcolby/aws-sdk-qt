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

#include "getwirelessgatewayrequest.h"
#include "getwirelessgatewayrequest_p.h"
#include "getwirelessgatewayresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayRequest
 * \brief The GetWirelessGatewayRequest class provides an interface for IoTWireless GetWirelessGateway requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGateway
 */

/*!
 * Constructs a copy of \a other.
 */
GetWirelessGatewayRequest::GetWirelessGatewayRequest(const GetWirelessGatewayRequest &other)
    : IoTWirelessRequest(new GetWirelessGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWirelessGatewayRequest object.
 */
GetWirelessGatewayRequest::GetWirelessGatewayRequest()
    : IoTWirelessRequest(new GetWirelessGatewayRequestPrivate(IoTWirelessRequest::GetWirelessGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool GetWirelessGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWirelessGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWirelessGatewayRequest::response(QNetworkReply * const reply) const
{
    return new GetWirelessGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayRequestPrivate
 * \brief The GetWirelessGatewayRequestPrivate class provides private implementation for GetWirelessGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetWirelessGatewayRequestPrivate::GetWirelessGatewayRequestPrivate(
    const IoTWirelessRequest::Action action, GetWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWirelessGatewayRequest
 * class' copy constructor.
 */
GetWirelessGatewayRequestPrivate::GetWirelessGatewayRequestPrivate(
    const GetWirelessGatewayRequestPrivate &other, GetWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
