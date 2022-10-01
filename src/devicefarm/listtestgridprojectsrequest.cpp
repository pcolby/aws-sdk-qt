// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestgridprojectsrequest.h"
#include "listtestgridprojectsrequest_p.h"
#include "listtestgridprojectsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestGridProjectsRequest
 * \brief The ListTestGridProjectsRequest class provides an interface for DeviceFarm ListTestGridProjects requests.
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
 * \sa DeviceFarmClient::listTestGridProjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestGridProjectsRequest::ListTestGridProjectsRequest(const ListTestGridProjectsRequest &other)
    : DeviceFarmRequest(new ListTestGridProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestGridProjectsRequest object.
 */
ListTestGridProjectsRequest::ListTestGridProjectsRequest()
    : DeviceFarmRequest(new ListTestGridProjectsRequestPrivate(DeviceFarmRequest::ListTestGridProjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestGridProjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestGridProjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestGridProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestGridProjectsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListTestGridProjectsRequestPrivate
 * \brief The ListTestGridProjectsRequestPrivate class provides private implementation for ListTestGridProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestGridProjectsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListTestGridProjectsRequestPrivate::ListTestGridProjectsRequestPrivate(
    const DeviceFarmRequest::Action action, ListTestGridProjectsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestGridProjectsRequest
 * class' copy constructor.
 */
ListTestGridProjectsRequestPrivate::ListTestGridProjectsRequestPrivate(
    const ListTestGridProjectsRequestPrivate &other, ListTestGridProjectsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
