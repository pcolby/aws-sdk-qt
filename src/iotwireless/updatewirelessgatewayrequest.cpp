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

#include "updatewirelessgatewayrequest.h"
#include "updatewirelessgatewayrequest_p.h"
#include "updatewirelessgatewayresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateWirelessGatewayRequest
 * \brief The UpdateWirelessGatewayRequest class provides an interface for IoTWireless UpdateWirelessGateway requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::updateWirelessGateway
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWirelessGatewayRequest::UpdateWirelessGatewayRequest(const UpdateWirelessGatewayRequest &other)
    : IoTWirelessRequest(new UpdateWirelessGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWirelessGatewayRequest object.
 */
UpdateWirelessGatewayRequest::UpdateWirelessGatewayRequest()
    : IoTWirelessRequest(new UpdateWirelessGatewayRequestPrivate(IoTWirelessRequest::UpdateWirelessGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWirelessGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWirelessGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWirelessGatewayRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWirelessGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::UpdateWirelessGatewayRequestPrivate
 * \brief The UpdateWirelessGatewayRequestPrivate class provides private implementation for UpdateWirelessGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateWirelessGatewayRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
UpdateWirelessGatewayRequestPrivate::UpdateWirelessGatewayRequestPrivate(
    const IoTWirelessRequest::Action action, UpdateWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWirelessGatewayRequest
 * class' copy constructor.
 */
UpdateWirelessGatewayRequestPrivate::UpdateWirelessGatewayRequestPrivate(
    const UpdateWirelessGatewayRequestPrivate &other, UpdateWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
