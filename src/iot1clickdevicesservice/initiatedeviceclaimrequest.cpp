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

#include "initiatedeviceclaimrequest.h"
#include "initiatedeviceclaimrequest_p.h"
#include "initiatedeviceclaimresponse.h"
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::InitiateDeviceClaimRequest
 * \brief The InitiateDeviceClaimRequest class provides an interface for IoT1ClickDevicesService InitiateDeviceClaim requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::initiateDeviceClaim
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateDeviceClaimRequest::InitiateDeviceClaimRequest(const InitiateDeviceClaimRequest &other)
    : IoT1ClickDevicesServiceRequest(new InitiateDeviceClaimRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateDeviceClaimRequest object.
 */
InitiateDeviceClaimRequest::InitiateDeviceClaimRequest()
    : IoT1ClickDevicesServiceRequest(new InitiateDeviceClaimRequestPrivate(IoT1ClickDevicesServiceRequest::InitiateDeviceClaimAction, this))
{

}

/*!
 * \reimp
 */
bool InitiateDeviceClaimRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitiateDeviceClaimResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateDeviceClaimRequest::response(QNetworkReply * const reply) const
{
    return new InitiateDeviceClaimResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevicesService::InitiateDeviceClaimRequestPrivate
 * \brief The InitiateDeviceClaimRequestPrivate class provides private implementation for InitiateDeviceClaimRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a InitiateDeviceClaimRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
InitiateDeviceClaimRequestPrivate::InitiateDeviceClaimRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, InitiateDeviceClaimRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitiateDeviceClaimRequest
 * class' copy constructor.
 */
InitiateDeviceClaimRequestPrivate::InitiateDeviceClaimRequestPrivate(
    const InitiateDeviceClaimRequestPrivate &other, InitiateDeviceClaimRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
