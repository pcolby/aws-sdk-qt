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

#include "createwirelessdevicerequest.h"
#include "createwirelessdevicerequest_p.h"
#include "createwirelessdeviceresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessDeviceRequest
 * \brief The CreateWirelessDeviceRequest class provides an interface for IoTWireless CreateWirelessDevice requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createWirelessDevice
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWirelessDeviceRequest::CreateWirelessDeviceRequest(const CreateWirelessDeviceRequest &other)
    : IoTWirelessRequest(new CreateWirelessDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWirelessDeviceRequest object.
 */
CreateWirelessDeviceRequest::CreateWirelessDeviceRequest()
    : IoTWirelessRequest(new CreateWirelessDeviceRequestPrivate(IoTWirelessRequest::CreateWirelessDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWirelessDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWirelessDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWirelessDeviceRequest::response(QNetworkReply * const reply) const
{
    return new CreateWirelessDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessDeviceRequestPrivate
 * \brief The CreateWirelessDeviceRequestPrivate class provides private implementation for CreateWirelessDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessDeviceRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateWirelessDeviceRequestPrivate::CreateWirelessDeviceRequestPrivate(
    const IoTWirelessRequest::Action action, CreateWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWirelessDeviceRequest
 * class' copy constructor.
 */
CreateWirelessDeviceRequestPrivate::CreateWirelessDeviceRequestPrivate(
    const CreateWirelessDeviceRequestPrivate &other, CreateWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
