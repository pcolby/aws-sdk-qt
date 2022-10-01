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

#include "finalizedeviceclaimrequest.h"
#include "finalizedeviceclaimrequest_p.h"
#include "finalizedeviceclaimresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::FinalizeDeviceClaimRequest
 * \brief The FinalizeDeviceClaimRequest class provides an interface for IoT1ClickDevices FinalizeDeviceClaim requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::finalizeDeviceClaim
 */

/*!
 * Constructs a copy of \a other.
 */
FinalizeDeviceClaimRequest::FinalizeDeviceClaimRequest(const FinalizeDeviceClaimRequest &other)
    : IoT1ClickDevicesRequest(new FinalizeDeviceClaimRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FinalizeDeviceClaimRequest object.
 */
FinalizeDeviceClaimRequest::FinalizeDeviceClaimRequest()
    : IoT1ClickDevicesRequest(new FinalizeDeviceClaimRequestPrivate(IoT1ClickDevicesRequest::FinalizeDeviceClaimAction, this))
{

}

/*!
 * \reimp
 */
bool FinalizeDeviceClaimRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FinalizeDeviceClaimResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FinalizeDeviceClaimRequest::response(QNetworkReply * const reply) const
{
    return new FinalizeDeviceClaimResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevices::FinalizeDeviceClaimRequestPrivate
 * \brief The FinalizeDeviceClaimRequestPrivate class provides private implementation for FinalizeDeviceClaimRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a FinalizeDeviceClaimRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
FinalizeDeviceClaimRequestPrivate::FinalizeDeviceClaimRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, FinalizeDeviceClaimRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FinalizeDeviceClaimRequest
 * class' copy constructor.
 */
FinalizeDeviceClaimRequestPrivate::FinalizeDeviceClaimRequestPrivate(
    const FinalizeDeviceClaimRequestPrivate &other, FinalizeDeviceClaimRequest * const q)
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
