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

#include "deletewirelessdevicerequest.h"
#include "deletewirelessdevicerequest_p.h"
#include "deletewirelessdeviceresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessDeviceRequest
 * \brief The DeleteWirelessDeviceRequest class provides an interface for IoTWireless DeleteWirelessDevice requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteWirelessDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWirelessDeviceRequest::DeleteWirelessDeviceRequest(const DeleteWirelessDeviceRequest &other)
    : IoTWirelessRequest(new DeleteWirelessDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWirelessDeviceRequest object.
 */
DeleteWirelessDeviceRequest::DeleteWirelessDeviceRequest()
    : IoTWirelessRequest(new DeleteWirelessDeviceRequestPrivate(IoTWirelessRequest::DeleteWirelessDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWirelessDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWirelessDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWirelessDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWirelessDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessDeviceRequestPrivate
 * \brief The DeleteWirelessDeviceRequestPrivate class provides private implementation for DeleteWirelessDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessDeviceRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteWirelessDeviceRequestPrivate::DeleteWirelessDeviceRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWirelessDeviceRequest
 * class' copy constructor.
 */
DeleteWirelessDeviceRequestPrivate::DeleteWirelessDeviceRequestPrivate(
    const DeleteWirelessDeviceRequestPrivate &other, DeleteWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
