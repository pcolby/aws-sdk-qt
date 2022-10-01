// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unclaimdevicerequest.h"
#include "unclaimdevicerequest_p.h"
#include "unclaimdeviceresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::UnclaimDeviceRequest
 * \brief The UnclaimDeviceRequest class provides an interface for IoT1ClickDevices UnclaimDevice requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::unclaimDevice
 */

/*!
 * Constructs a copy of \a other.
 */
UnclaimDeviceRequest::UnclaimDeviceRequest(const UnclaimDeviceRequest &other)
    : IoT1ClickDevicesRequest(new UnclaimDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnclaimDeviceRequest object.
 */
UnclaimDeviceRequest::UnclaimDeviceRequest()
    : IoT1ClickDevicesRequest(new UnclaimDeviceRequestPrivate(IoT1ClickDevicesRequest::UnclaimDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UnclaimDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnclaimDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnclaimDeviceRequest::response(QNetworkReply * const reply) const
{
    return new UnclaimDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevices::UnclaimDeviceRequestPrivate
 * \brief The UnclaimDeviceRequestPrivate class provides private implementation for UnclaimDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a UnclaimDeviceRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
UnclaimDeviceRequestPrivate::UnclaimDeviceRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, UnclaimDeviceRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnclaimDeviceRequest
 * class' copy constructor.
 */
UnclaimDeviceRequestPrivate::UnclaimDeviceRequestPrivate(
    const UnclaimDeviceRequestPrivate &other, UnclaimDeviceRequest * const q)
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
