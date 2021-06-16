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

#include "updatedevicestaterequest.h"
#include "updatedevicestaterequest_p.h"
#include "updatedevicestateresponse.h"
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::UpdateDeviceStateRequest
 * \brief The UpdateDeviceStateRequest class provides an interface for IoT1ClickDevicesService UpdateDeviceState requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::updateDeviceState
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceStateRequest::UpdateDeviceStateRequest(const UpdateDeviceStateRequest &other)
    : IoT1ClickDevicesServiceRequest(new UpdateDeviceStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceStateRequest object.
 */
UpdateDeviceStateRequest::UpdateDeviceStateRequest()
    : IoT1ClickDevicesServiceRequest(new UpdateDeviceStateRequestPrivate(IoT1ClickDevicesServiceRequest::UpdateDeviceStateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceStateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceStateResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevicesService::UpdateDeviceStateRequestPrivate
 * \brief The UpdateDeviceStateRequestPrivate class provides private implementation for UpdateDeviceStateRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a UpdateDeviceStateRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
UpdateDeviceStateRequestPrivate::UpdateDeviceStateRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, UpdateDeviceStateRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceStateRequest
 * class' copy constructor.
 */
UpdateDeviceStateRequestPrivate::UpdateDeviceStateRequestPrivate(
    const UpdateDeviceStateRequestPrivate &other, UpdateDeviceStateRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
