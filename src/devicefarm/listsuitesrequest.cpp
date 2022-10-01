// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsuitesrequest.h"
#include "listsuitesrequest_p.h"
#include "listsuitesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSuitesRequest
 * \brief The ListSuitesRequest class provides an interface for DeviceFarm ListSuites requests.
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
 * \sa DeviceFarmClient::listSuites
 */

/*!
 * Constructs a copy of \a other.
 */
ListSuitesRequest::ListSuitesRequest(const ListSuitesRequest &other)
    : DeviceFarmRequest(new ListSuitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSuitesRequest object.
 */
ListSuitesRequest::ListSuitesRequest()
    : DeviceFarmRequest(new ListSuitesRequestPrivate(DeviceFarmRequest::ListSuitesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSuitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSuitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSuitesRequest::response(QNetworkReply * const reply) const
{
    return new ListSuitesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListSuitesRequestPrivate
 * \brief The ListSuitesRequestPrivate class provides private implementation for ListSuitesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListSuitesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListSuitesRequestPrivate::ListSuitesRequestPrivate(
    const DeviceFarmRequest::Action action, ListSuitesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSuitesRequest
 * class' copy constructor.
 */
ListSuitesRequestPrivate::ListSuitesRequestPrivate(
    const ListSuitesRequestPrivate &other, ListSuitesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
