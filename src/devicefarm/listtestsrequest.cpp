// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestsrequest.h"
#include "listtestsrequest_p.h"
#include "listtestsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestsRequest
 * \brief The ListTestsRequest class provides an interface for DeviceFarm ListTests requests.
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
 * \sa DeviceFarmClient::listTests
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestsRequest::ListTestsRequest(const ListTestsRequest &other)
    : DeviceFarmRequest(new ListTestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestsRequest object.
 */
ListTestsRequest::ListTestsRequest()
    : DeviceFarmRequest(new ListTestsRequestPrivate(DeviceFarmRequest::ListTestsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListTestsRequestPrivate
 * \brief The ListTestsRequestPrivate class provides private implementation for ListTestsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListTestsRequestPrivate::ListTestsRequestPrivate(
    const DeviceFarmRequest::Action action, ListTestsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestsRequest
 * class' copy constructor.
 */
ListTestsRequestPrivate::ListTestsRequestPrivate(
    const ListTestsRequestPrivate &other, ListTestsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
