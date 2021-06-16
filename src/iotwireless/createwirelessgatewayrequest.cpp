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

#include "createwirelessgatewayrequest.h"
#include "createwirelessgatewayrequest_p.h"
#include "createwirelessgatewayresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayRequest
 * \brief The CreateWirelessGatewayRequest class provides an interface for IoTWireless CreateWirelessGateway requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createWirelessGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWirelessGatewayRequest::CreateWirelessGatewayRequest(const CreateWirelessGatewayRequest &other)
    : IoTWirelessRequest(new CreateWirelessGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWirelessGatewayRequest object.
 */
CreateWirelessGatewayRequest::CreateWirelessGatewayRequest()
    : IoTWirelessRequest(new CreateWirelessGatewayRequestPrivate(IoTWirelessRequest::CreateWirelessGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWirelessGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWirelessGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWirelessGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateWirelessGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayRequestPrivate
 * \brief The CreateWirelessGatewayRequestPrivate class provides private implementation for CreateWirelessGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateWirelessGatewayRequestPrivate::CreateWirelessGatewayRequestPrivate(
    const IoTWirelessRequest::Action action, CreateWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWirelessGatewayRequest
 * class' copy constructor.
 */
CreateWirelessGatewayRequestPrivate::CreateWirelessGatewayRequestPrivate(
    const CreateWirelessGatewayRequestPrivate &other, CreateWirelessGatewayRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
