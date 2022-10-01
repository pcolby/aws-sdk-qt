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

#include "getdevicemethodsrequest.h"
#include "getdevicemethodsrequest_p.h"
#include "getdevicemethodsresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::GetDeviceMethodsRequest
 * \brief The GetDeviceMethodsRequest class provides an interface for IoT1ClickDevices GetDeviceMethods requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::getDeviceMethods
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceMethodsRequest::GetDeviceMethodsRequest(const GetDeviceMethodsRequest &other)
    : IoT1ClickDevicesRequest(new GetDeviceMethodsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceMethodsRequest object.
 */
GetDeviceMethodsRequest::GetDeviceMethodsRequest()
    : IoT1ClickDevicesRequest(new GetDeviceMethodsRequestPrivate(IoT1ClickDevicesRequest::GetDeviceMethodsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceMethodsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceMethodsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceMethodsRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceMethodsResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevices::GetDeviceMethodsRequestPrivate
 * \brief The GetDeviceMethodsRequestPrivate class provides private implementation for GetDeviceMethodsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a GetDeviceMethodsRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
GetDeviceMethodsRequestPrivate::GetDeviceMethodsRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, GetDeviceMethodsRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceMethodsRequest
 * class' copy constructor.
 */
GetDeviceMethodsRequestPrivate::GetDeviceMethodsRequestPrivate(
    const GetDeviceMethodsRequestPrivate &other, GetDeviceMethodsRequest * const q)
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
