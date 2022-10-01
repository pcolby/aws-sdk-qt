// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invokedevicemethodrequest.h"
#include "invokedevicemethodrequest_p.h"
#include "invokedevicemethodresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::InvokeDeviceMethodRequest
 * \brief The InvokeDeviceMethodRequest class provides an interface for IoT1ClickDevices InvokeDeviceMethod requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::invokeDeviceMethod
 */

/*!
 * Constructs a copy of \a other.
 */
InvokeDeviceMethodRequest::InvokeDeviceMethodRequest(const InvokeDeviceMethodRequest &other)
    : IoT1ClickDevicesRequest(new InvokeDeviceMethodRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InvokeDeviceMethodRequest object.
 */
InvokeDeviceMethodRequest::InvokeDeviceMethodRequest()
    : IoT1ClickDevicesRequest(new InvokeDeviceMethodRequestPrivate(IoT1ClickDevicesRequest::InvokeDeviceMethodAction, this))
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
 * \class QtAws::IoT1ClickDevices::InvokeDeviceMethodRequestPrivate
 * \brief The InvokeDeviceMethodRequestPrivate class provides private implementation for InvokeDeviceMethodRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a InvokeDeviceMethodRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
InvokeDeviceMethodRequestPrivate::InvokeDeviceMethodRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, InvokeDeviceMethodRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
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
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
