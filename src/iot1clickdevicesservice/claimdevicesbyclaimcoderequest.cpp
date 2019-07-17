/*
    Copyright 2013-2019 Paul Colby

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

#include "claimdevicesbyclaimcoderequest.h"
#include "claimdevicesbyclaimcoderequest_p.h"
#include "claimdevicesbyclaimcoderesponse.h"
#include "iot1clickdevicesservicerequest_p.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::ClaimDevicesByClaimCodeRequest
 * \brief The ClaimDevicesByClaimCodeRequest class provides an interface for IoT1ClickDevicesService ClaimDevicesByClaimCode requests.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Stub
 *
 * \sa IoT1ClickDevicesServiceClient::claimDevicesByClaimCode
 */

/*!
 * Constructs a copy of \a other.
 */
ClaimDevicesByClaimCodeRequest::ClaimDevicesByClaimCodeRequest(const ClaimDevicesByClaimCodeRequest &other)
    : IoT1ClickDevicesServiceRequest(new ClaimDevicesByClaimCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ClaimDevicesByClaimCodeRequest object.
 */
ClaimDevicesByClaimCodeRequest::ClaimDevicesByClaimCodeRequest()
    : IoT1ClickDevicesServiceRequest(new ClaimDevicesByClaimCodeRequestPrivate(IoT1ClickDevicesServiceRequest::ClaimDevicesByClaimCodeAction, this))
{

}

/*!
 * \reimp
 */
bool ClaimDevicesByClaimCodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ClaimDevicesByClaimCodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ClaimDevicesByClaimCodeRequest::response(QNetworkReply * const reply) const
{
    return new ClaimDevicesByClaimCodeResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevicesService::ClaimDevicesByClaimCodeRequestPrivate
 * \brief The ClaimDevicesByClaimCodeRequestPrivate class provides private implementation for ClaimDevicesByClaimCodeRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a ClaimDevicesByClaimCodeRequestPrivate object for IoT1ClickDevicesService \a action,
 * with public implementation \a q.
 */
ClaimDevicesByClaimCodeRequestPrivate::ClaimDevicesByClaimCodeRequestPrivate(
    const IoT1ClickDevicesServiceRequest::Action action, ClaimDevicesByClaimCodeRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ClaimDevicesByClaimCodeRequest
 * class' copy constructor.
 */
ClaimDevicesByClaimCodeRequestPrivate::ClaimDevicesByClaimCodeRequestPrivate(
    const ClaimDevicesByClaimCodeRequestPrivate &other, ClaimDevicesByClaimCodeRequest * const q)
    : IoT1ClickDevicesServiceRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
