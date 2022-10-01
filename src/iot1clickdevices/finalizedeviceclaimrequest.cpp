// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
