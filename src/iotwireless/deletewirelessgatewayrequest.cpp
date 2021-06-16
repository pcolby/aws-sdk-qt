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

#include "deletewirelessgatewayrequest.h"
#include "deletewirelessgatewayrequest_p.h"
#include "deletewirelessgatewayresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayRequest
 * \brief The DeleteWirelessGatewayRequest class provides an interface for IoTWireless DeleteWirelessGateway requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteWirelessGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWirelessGatewayRequest::DeleteWirelessGatewayRequest(const DeleteWirelessGatewayRequest &other)
    : IoTWirelessRequest(new DeleteWirelessGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWirelessGatewayRequest object.
 */
DeleteWirelessGatewayRequest::DeleteWirelessGatewayRequest()
    : IoTWirelessRequest(new DeleteWirelessGatewayRequestPrivate(IoTWirelessRequest::DeleteWirelessGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWirelessGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWirelessGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWirelessGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWirelessGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayRequestPrivate
 * \brief The DeleteWirelessGatewayRequestPrivate class provides private implementation for DeleteWirelessGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteWirelessGatewayRequestPrivate::DeleteWirelessGatewayRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWirelessGatewayRequest
 * class' copy constructor.
 */
DeleteWirelessGatewayRequestPrivate::DeleteWirelessGatewayRequestPrivate(
    const DeleteWirelessGatewayRequestPrivate &other, DeleteWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
