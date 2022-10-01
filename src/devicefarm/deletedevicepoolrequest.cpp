// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevicepoolrequest.h"
#include "deletedevicepoolrequest_p.h"
#include "deletedevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteDevicePoolRequest
 * \brief The DeleteDevicePoolRequest class provides an interface for DeviceFarm DeleteDevicePool requests.
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
 * \sa DeviceFarmClient::deleteDevicePool
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDevicePoolRequest::DeleteDevicePoolRequest(const DeleteDevicePoolRequest &other)
    : DeviceFarmRequest(new DeleteDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDevicePoolRequest object.
 */
DeleteDevicePoolRequest::DeleteDevicePoolRequest()
    : DeviceFarmRequest(new DeleteDevicePoolRequestPrivate(DeviceFarmRequest::DeleteDevicePoolAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDevicePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDevicePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDevicePoolResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteDevicePoolRequestPrivate
 * \brief The DeleteDevicePoolRequestPrivate class provides private implementation for DeleteDevicePoolRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteDevicePoolRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteDevicePoolRequestPrivate::DeleteDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDevicePoolRequest
 * class' copy constructor.
 */
DeleteDevicePoolRequestPrivate::DeleteDevicePoolRequestPrivate(
    const DeleteDevicePoolRequestPrivate &other, DeleteDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
