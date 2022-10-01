// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicepoolsrequest.h"
#include "listdevicepoolsrequest_p.h"
#include "listdevicepoolsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsRequest
 * \brief The ListDevicePoolsRequest class provides an interface for DeviceFarm ListDevicePools requests.
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
 * \sa DeviceFarmClient::listDevicePools
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicePoolsRequest::ListDevicePoolsRequest(const ListDevicePoolsRequest &other)
    : DeviceFarmRequest(new ListDevicePoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicePoolsRequest object.
 */
ListDevicePoolsRequest::ListDevicePoolsRequest()
    : DeviceFarmRequest(new ListDevicePoolsRequestPrivate(DeviceFarmRequest::ListDevicePoolsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicePoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicePoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicePoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicePoolsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListDevicePoolsRequestPrivate
 * \brief The ListDevicePoolsRequestPrivate class provides private implementation for ListDevicePoolsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListDevicePoolsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListDevicePoolsRequestPrivate::ListDevicePoolsRequestPrivate(
    const DeviceFarmRequest::Action action, ListDevicePoolsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicePoolsRequest
 * class' copy constructor.
 */
ListDevicePoolsRequestPrivate::ListDevicePoolsRequestPrivate(
    const ListDevicePoolsRequestPrivate &other, ListDevicePoolsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
