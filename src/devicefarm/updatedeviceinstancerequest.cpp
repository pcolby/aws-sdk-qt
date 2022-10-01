// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeviceinstancerequest.h"
#include "updatedeviceinstancerequest_p.h"
#include "updatedeviceinstanceresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceRequest
 * \brief The UpdateDeviceInstanceRequest class provides an interface for DeviceFarm UpdateDeviceInstance requests.
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
 * \sa DeviceFarmClient::updateDeviceInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceInstanceRequest::UpdateDeviceInstanceRequest(const UpdateDeviceInstanceRequest &other)
    : DeviceFarmRequest(new UpdateDeviceInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceInstanceRequest object.
 */
UpdateDeviceInstanceRequest::UpdateDeviceInstanceRequest()
    : DeviceFarmRequest(new UpdateDeviceInstanceRequestPrivate(DeviceFarmRequest::UpdateDeviceInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceRequestPrivate
 * \brief The UpdateDeviceInstanceRequestPrivate class provides private implementation for UpdateDeviceInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateDeviceInstanceRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateDeviceInstanceRequestPrivate::UpdateDeviceInstanceRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceInstanceRequest
 * class' copy constructor.
 */
UpdateDeviceInstanceRequestPrivate::UpdateDeviceInstanceRequestPrivate(
    const UpdateDeviceInstanceRequestPrivate &other, UpdateDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
