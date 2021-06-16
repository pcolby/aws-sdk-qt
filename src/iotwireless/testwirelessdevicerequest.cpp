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

#include "testwirelessdevicerequest.h"
#include "testwirelessdevicerequest_p.h"
#include "testwirelessdeviceresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::TestWirelessDeviceRequest
 * \brief The TestWirelessDeviceRequest class provides an interface for IoTWireless TestWirelessDevice requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::testWirelessDevice
 */

/*!
 * Constructs a copy of \a other.
 */
TestWirelessDeviceRequest::TestWirelessDeviceRequest(const TestWirelessDeviceRequest &other)
    : IoTWirelessRequest(new TestWirelessDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestWirelessDeviceRequest object.
 */
TestWirelessDeviceRequest::TestWirelessDeviceRequest()
    : IoTWirelessRequest(new TestWirelessDeviceRequestPrivate(IoTWirelessRequest::TestWirelessDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool TestWirelessDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestWirelessDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestWirelessDeviceRequest::response(QNetworkReply * const reply) const
{
    return new TestWirelessDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::TestWirelessDeviceRequestPrivate
 * \brief The TestWirelessDeviceRequestPrivate class provides private implementation for TestWirelessDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a TestWirelessDeviceRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
TestWirelessDeviceRequestPrivate::TestWirelessDeviceRequestPrivate(
    const IoTWirelessRequest::Action action, TestWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestWirelessDeviceRequest
 * class' copy constructor.
 */
TestWirelessDeviceRequestPrivate::TestWirelessDeviceRequestPrivate(
    const TestWirelessDeviceRequestPrivate &other, TestWirelessDeviceRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
