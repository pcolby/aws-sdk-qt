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

#include "getwirelessdevicerequest.h"
#include "getwirelessdevicerequest_p.h"
#include "getwirelessdeviceresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceRequest
 * \brief The GetWirelessDeviceRequest class provides an interface for IoTWireless GetWirelessDevice requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessDevice
 */

/*!
 * Constructs a copy of \a other.
 */
GetWirelessDeviceRequest::GetWirelessDeviceRequest(const GetWirelessDeviceRequest &other)
    : IoTWirelessRequest(new GetWirelessDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWirelessDeviceRequest object.
 */
GetWirelessDeviceRequest::GetWirelessDeviceRequest()
    : IoTWirelessRequest(new GetWirelessDeviceRequestPrivate(IoTWirelessRequest::GetWirelessDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool GetWirelessDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWirelessDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWirelessDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetWirelessDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceRequestPrivate
 * \brief The GetWirelessDeviceRequestPrivate class provides private implementation for GetWirelessDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessDeviceRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetWirelessDeviceRequestPrivate::GetWirelessDeviceRequestPrivate(
    const IoTWirelessRequest::Action action, GetWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWirelessDeviceRequest
 * class' copy constructor.
 */
GetWirelessDeviceRequestPrivate::GetWirelessDeviceRequestPrivate(
    const GetWirelessDeviceRequestPrivate &other, GetWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
