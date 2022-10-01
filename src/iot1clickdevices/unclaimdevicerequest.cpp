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

#include "unclaimdevicerequest.h"
#include "unclaimdevicerequest_p.h"
#include "unclaimdeviceresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::UnclaimDeviceRequest
 * \brief The UnclaimDeviceRequest class provides an interface for IoT1ClickDevices UnclaimDevice requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::unclaimDevice
 */

/*!
 * Constructs a copy of \a other.
 */
UnclaimDeviceRequest::UnclaimDeviceRequest(const UnclaimDeviceRequest &other)
    : IoT1ClickDevicesRequest(new UnclaimDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnclaimDeviceRequest object.
 */
UnclaimDeviceRequest::UnclaimDeviceRequest()
    : IoT1ClickDevicesRequest(new UnclaimDeviceRequestPrivate(IoT1ClickDevicesRequest::UnclaimDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UnclaimDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnclaimDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnclaimDeviceRequest::response(QNetworkReply * const reply) const
{
    return new UnclaimDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevices::UnclaimDeviceRequestPrivate
 * \brief The UnclaimDeviceRequestPrivate class provides private implementation for UnclaimDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a UnclaimDeviceRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
UnclaimDeviceRequestPrivate::UnclaimDeviceRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, UnclaimDeviceRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnclaimDeviceRequest
 * class' copy constructor.
 */
UnclaimDeviceRequestPrivate::UnclaimDeviceRequestPrivate(
    const UnclaimDeviceRequestPrivate &other, UnclaimDeviceRequest * const q)
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
