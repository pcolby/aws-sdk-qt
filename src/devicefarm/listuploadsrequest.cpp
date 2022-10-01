// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuploadsrequest.h"
#include "listuploadsrequest_p.h"
#include "listuploadsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListUploadsRequest
 * \brief The ListUploadsRequest class provides an interface for DeviceFarm ListUploads requests.
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
 * \sa DeviceFarmClient::listUploads
 */

/*!
 * Constructs a copy of \a other.
 */
ListUploadsRequest::ListUploadsRequest(const ListUploadsRequest &other)
    : DeviceFarmRequest(new ListUploadsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUploadsRequest object.
 */
ListUploadsRequest::ListUploadsRequest()
    : DeviceFarmRequest(new ListUploadsRequestPrivate(DeviceFarmRequest::ListUploadsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUploadsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUploadsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUploadsRequest::response(QNetworkReply * const reply) const
{
    return new ListUploadsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListUploadsRequestPrivate
 * \brief The ListUploadsRequestPrivate class provides private implementation for ListUploadsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListUploadsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListUploadsRequestPrivate::ListUploadsRequestPrivate(
    const DeviceFarmRequest::Action action, ListUploadsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUploadsRequest
 * class' copy constructor.
 */
ListUploadsRequestPrivate::ListUploadsRequestPrivate(
    const ListUploadsRequestPrivate &other, ListUploadsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
