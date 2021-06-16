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
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::UnclaimDeviceRequest
 * \brief The UnclaimDeviceRequest class provides an interface for IoT1ClickDevicesService UnclaimDevice requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::unclaimDevice
 */

/*!
 * Constructs a copy of \a other.
 */
UnclaimDeviceRequest::UnclaimDeviceRequest(const UnclaimDeviceRequest &other)
    : IoT1ClickDevicesServiceRequest(new UnclaimDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnclaimDeviceRequest object.
 */
UnclaimDeviceRequest::UnclaimDeviceRequest()
    : IoT1ClickDevicesServiceRequest(new UnclaimDeviceRequestPrivate(IoT1ClickDevicesServiceRequest::UnclaimDeviceAction, this))
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
 * \class QtAws::IoT1ClickDevicesService::UnclaimDeviceRequestPrivate
 * \brief The UnclaimDeviceRequestPrivate class provides private implementation for UnclaimDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a UnclaimDeviceRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
UnclaimDeviceRequestPrivate::UnclaimDeviceRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, UnclaimDeviceRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
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
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
