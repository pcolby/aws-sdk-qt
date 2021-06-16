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

#include "getwirelessgatewayfirmwareinformationrequest.h"
#include "getwirelessgatewayfirmwareinformationrequest_p.h"
#include "getwirelessgatewayfirmwareinformationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayFirmwareInformationRequest
 * \brief The GetWirelessGatewayFirmwareInformationRequest class provides an interface for IoTWireless GetWirelessGatewayFirmwareInformation requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayFirmwareInformation
 */

/*!
 * Constructs a copy of \a other.
 */
GetWirelessGatewayFirmwareInformationRequest::GetWirelessGatewayFirmwareInformationRequest(const GetWirelessGatewayFirmwareInformationRequest &other)
    : IoTWirelessRequest(new GetWirelessGatewayFirmwareInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWirelessGatewayFirmwareInformationRequest object.
 */
GetWirelessGatewayFirmwareInformationRequest::GetWirelessGatewayFirmwareInformationRequest()
    : IoTWirelessRequest(new GetWirelessGatewayFirmwareInformationRequestPrivate(IoTWirelessRequest::GetWirelessGatewayFirmwareInformationAction, this))
{

}

/*!
 * \reimp
 */
bool GetWirelessGatewayFirmwareInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWirelessGatewayFirmwareInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWirelessGatewayFirmwareInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetWirelessGatewayFirmwareInformationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayFirmwareInformationRequestPrivate
 * \brief The GetWirelessGatewayFirmwareInformationRequestPrivate class provides private implementation for GetWirelessGatewayFirmwareInformationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayFirmwareInformationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetWirelessGatewayFirmwareInformationRequestPrivate::GetWirelessGatewayFirmwareInformationRequestPrivate(
    const IoTWirelessRequest::Action action, GetWirelessGatewayFirmwareInformationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWirelessGatewayFirmwareInformationRequest
 * class' copy constructor.
 */
GetWirelessGatewayFirmwareInformationRequestPrivate::GetWirelessGatewayFirmwareInformationRequestPrivate(
    const GetWirelessGatewayFirmwareInformationRequestPrivate &other, GetWirelessGatewayFirmwareInformationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
