// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceRequest
 * \brief The GetDeviceRequest class provides an interface for DeviceFarm GetDevice requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::getDevice
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : DeviceFarmRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : DeviceFarmRequest(new GetDeviceRequestPrivate(DeviceFarmRequest::GetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetDeviceRequestPrivate
 * \brief The GetDeviceRequestPrivate class provides private implementation for GetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDeviceRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const DeviceFarmRequest::Action action, GetDeviceRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
