// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "claimdevicesbyclaimcoderequest.h"
#include "claimdevicesbyclaimcoderequest_p.h"
#include "claimdevicesbyclaimcoderesponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::ClaimDevicesByClaimCodeRequest
 * \brief The ClaimDevicesByClaimCodeRequest class provides an interface for IoT1ClickDevices ClaimDevicesByClaimCode requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::claimDevicesByClaimCode
 */

/*!
 * Constructs a copy of \a other.
 */
ClaimDevicesByClaimCodeRequest::ClaimDevicesByClaimCodeRequest(const ClaimDevicesByClaimCodeRequest &other)
    : IoT1ClickDevicesRequest(new ClaimDevicesByClaimCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ClaimDevicesByClaimCodeRequest object.
 */
ClaimDevicesByClaimCodeRequest::ClaimDevicesByClaimCodeRequest()
    : IoT1ClickDevicesRequest(new ClaimDevicesByClaimCodeRequestPrivate(IoT1ClickDevicesRequest::ClaimDevicesByClaimCodeAction, this))
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
 * \class QtAws::IoT1ClickDevices::ClaimDevicesByClaimCodeRequestPrivate
 * \brief The ClaimDevicesByClaimCodeRequestPrivate class provides private implementation for ClaimDevicesByClaimCodeRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a ClaimDevicesByClaimCodeRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
ClaimDevicesByClaimCodeRequestPrivate::ClaimDevicesByClaimCodeRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, ClaimDevicesByClaimCodeRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
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
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
