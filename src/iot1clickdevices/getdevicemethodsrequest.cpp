// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
