// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedevicerequest.h"
#include "describedevicerequest_p.h"
#include "describedeviceresponse.h"
#include "iot1clickdevicesrequest_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::DescribeDeviceRequest
 * \brief The DescribeDeviceRequest class provides an interface for IoT1ClickDevices DescribeDevice requests.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::describeDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeviceRequest::DescribeDeviceRequest(const DescribeDeviceRequest &other)
    : IoT1ClickDevicesRequest(new DescribeDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeviceRequest object.
 */
DescribeDeviceRequest::DescribeDeviceRequest()
    : IoT1ClickDevicesRequest(new DescribeDeviceRequestPrivate(IoT1ClickDevicesRequest::DescribeDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickDevices::DescribeDeviceRequestPrivate
 * \brief The DescribeDeviceRequestPrivate class provides private implementation for DescribeDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a DescribeDeviceRequestPrivate object for IoT1ClickDevices \a action,
 * with public implementation \a q.
 */
DescribeDeviceRequestPrivate::DescribeDeviceRequestPrivate(
    const IoT1ClickDevicesRequest::Action action, DescribeDeviceRequest * const q)
    : IoT1ClickDevicesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeviceRequest
 * class' copy constructor.
 */
DescribeDeviceRequestPrivate::DescribeDeviceRequestPrivate(
    const DescribeDeviceRequestPrivate &other, DescribeDeviceRequest * const q)
    : IoT1ClickDevicesRequestPrivate(other, q)
{

}

} // namespace IoT1ClickDevices
} // namespace QtAws
