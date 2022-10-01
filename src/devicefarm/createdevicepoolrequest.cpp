// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdevicepoolrequest.h"
#include "createdevicepoolrequest_p.h"
#include "createdevicepoolresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateDevicePoolRequest
 * \brief The CreateDevicePoolRequest class provides an interface for DeviceFarm CreateDevicePool requests.
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
 * \sa DeviceFarmClient::createDevicePool
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDevicePoolRequest::CreateDevicePoolRequest(const CreateDevicePoolRequest &other)
    : DeviceFarmRequest(new CreateDevicePoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDevicePoolRequest object.
 */
CreateDevicePoolRequest::CreateDevicePoolRequest()
    : DeviceFarmRequest(new CreateDevicePoolRequestPrivate(DeviceFarmRequest::CreateDevicePoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDevicePoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDevicePoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDevicePoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateDevicePoolResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateDevicePoolRequestPrivate
 * \brief The CreateDevicePoolRequestPrivate class provides private implementation for CreateDevicePoolRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateDevicePoolRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateDevicePoolRequestPrivate::CreateDevicePoolRequestPrivate(
    const DeviceFarmRequest::Action action, CreateDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDevicePoolRequest
 * class' copy constructor.
 */
CreateDevicePoolRequestPrivate::CreateDevicePoolRequestPrivate(
    const CreateDevicePoolRequestPrivate &other, CreateDevicePoolRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
