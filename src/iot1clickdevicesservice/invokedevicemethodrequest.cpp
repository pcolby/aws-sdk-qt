/*
    Copyright 2013-2020 Paul Colby

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

#include "invokedevicemethodrequest.h"
#include "invokedevicemethodrequest_p.h"
#include "invokedevicemethodresponse.h"
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::InvokeDeviceMethodRequest
 * \brief The InvokeDeviceMethodRequest class provides an interface for IoT1ClickDevicesService InvokeDeviceMethod requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::invokeDeviceMethod
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeDeviceMethodRequest::InvokeDeviceMethodRequest(const InvokeDeviceMethodRequest &other)
    : IoT1ClickDevicesServiceRequest(new InvokeDeviceMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeDeviceMethodRequest object.
 */
InvokeDeviceMethodRequest::InvokeDeviceMethodRequest()
    : IoT1ClickDevicesServiceRequest(new InvokeDeviceMethodRequestPrivate(IoT1ClickDevicesServiceRequest::InvokeDeviceMethodAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeDeviceMethodRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InvokeDeviceMethodResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeDeviceMethodRequest::response(QNetworkReply * const reply) const
{
    return new InvokeDeviceMethodResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevicesService::InvokeDeviceMethodRequestPrivate
 * \brief The InvokeDeviceMethodRequestPrivate class provides private implementation for InvokeDeviceMethodRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a InvokeDeviceMethodRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
InvokeDeviceMethodRequestPrivate::InvokeDeviceMethodRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, InvokeDeviceMethodRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InvokeDeviceMethodRequest
 * class' copy constructor.
 */
InvokeDeviceMethodRequestPrivate::InvokeDeviceMethodRequestPrivate(
    const InvokeDeviceMethodRequestPrivate &other, InvokeDeviceMethodRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
