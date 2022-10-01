// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceinstancesrequest.h"
#include "listdeviceinstancesrequest_p.h"
#include "listdeviceinstancesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDeviceInstancesRequest
 * \brief The ListDeviceInstancesRequest class provides an interface for DeviceFarm ListDeviceInstances requests.
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
 * \sa DeviceFarmClient::listDeviceInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceInstancesRequest::ListDeviceInstancesRequest(const ListDeviceInstancesRequest &other)
    : DeviceFarmRequest(new ListDeviceInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceInstancesRequest object.
 */
ListDeviceInstancesRequest::ListDeviceInstancesRequest()
    : DeviceFarmRequest(new ListDeviceInstancesRequestPrivate(DeviceFarmRequest::ListDeviceInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListDeviceInstancesRequestPrivate
 * \brief The ListDeviceInstancesRequestPrivate class provides private implementation for ListDeviceInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDeviceInstancesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListDeviceInstancesRequestPrivate::ListDeviceInstancesRequestPrivate(
    const DeviceFarmRequest::Action action, ListDeviceInstancesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceInstancesRequest
 * class' copy constructor.
 */
ListDeviceInstancesRequestPrivate::ListDeviceInstancesRequestPrivate(
    const ListDeviceInstancesRequestPrivate &other, ListDeviceInstancesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
