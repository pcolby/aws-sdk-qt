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
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::GetDeviceMethodsRequest
 * \brief The GetDeviceMethodsRequest class provides an interface for IoT1ClickDevicesService GetDeviceMethods requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::getDeviceMethods
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceMethodsRequest::GetDeviceMethodsRequest(const GetDeviceMethodsRequest &other)
    : IoT1ClickDevicesServiceRequest(new GetDeviceMethodsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceMethodsRequest object.
 */
GetDeviceMethodsRequest::GetDeviceMethodsRequest()
    : IoT1ClickDevicesServiceRequest(new GetDeviceMethodsRequestPrivate(IoT1ClickDevicesServiceRequest::GetDeviceMethodsAction, this))
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
 * \class QtAws::IoT1ClickDevicesService::GetDeviceMethodsRequestPrivate
 * \brief The GetDeviceMethodsRequestPrivate class provides private implementation for GetDeviceMethodsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a GetDeviceMethodsRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
GetDeviceMethodsRequestPrivate::GetDeviceMethodsRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, GetDeviceMethodsRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
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
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
