// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiatedeviceclaimrequest.h"
#include "initiatedeviceclaimrequest_p.h"
#include "initiatedeviceclaimresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::InitiateDeviceClaimRequest
 * \brief The InitiateDeviceClaimRequest class provides an interface for IoT1ClickDevices InitiateDeviceClaim requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::initiateDeviceClaim
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateDeviceClaimRequest::InitiateDeviceClaimRequest(const InitiateDeviceClaimRequest &other)
    : IoT1ClickDevicesRequest(new InitiateDeviceClaimRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateDeviceClaimRequest object.
 */
InitiateDeviceClaimRequest::InitiateDeviceClaimRequest()
    : IoT1ClickDevicesRequest(new InitiateDeviceClaimRequestPrivate(IoT1ClickDevicesRequest::InitiateDeviceClaimAction, this))
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
 * \class QtAws::IoT1ClickDevices::InitiateDeviceClaimRequestPrivate
 * \brief The InitiateDeviceClaimRequestPrivate class provides private implementation for InitiateDeviceClaimRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a InitiateDeviceClaimRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
InitiateDeviceClaimRequestPrivate::InitiateDeviceClaimRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, InitiateDeviceClaimRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
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
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
