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

#include "getdevicepoolcompatibilityrequest.h"
#include "getdevicepoolcompatibilityrequest_p.h"
#include "getdevicepoolcompatibilityresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityRequest
 * \brief The GetDevicePoolCompatibilityRequest class provides an interface for DeviceFarm GetDevicePoolCompatibility requests.
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
 * \sa DeviceFarmClient::getDevicePoolCompatibility
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePoolCompatibilityRequest::GetDevicePoolCompatibilityRequest(const GetDevicePoolCompatibilityRequest &other)
    : DeviceFarmRequest(new GetDevicePoolCompatibilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePoolCompatibilityRequest object.
 */
GetDevicePoolCompatibilityRequest::GetDevicePoolCompatibilityRequest()
    : DeviceFarmRequest(new GetDevicePoolCompatibilityRequestPrivate(DeviceFarmRequest::GetDevicePoolCompatibilityAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePoolCompatibilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePoolCompatibilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePoolCompatibilityRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePoolCompatibilityResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityRequestPrivate
 * \brief The GetDevicePoolCompatibilityRequestPrivate class provides private implementation for GetDevicePoolCompatibilityRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDevicePoolCompatibilityRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetDevicePoolCompatibilityRequestPrivate::GetDevicePoolCompatibilityRequestPrivate(
    const DeviceFarmRequest::Action action, GetDevicePoolCompatibilityRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePoolCompatibilityRequest
 * class' copy constructor.
 */
GetDevicePoolCompatibilityRequestPrivate::GetDevicePoolCompatibilityRequestPrivate(
    const GetDevicePoolCompatibilityRequestPrivate &other, GetDevicePoolCompatibilityRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
