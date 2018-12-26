/*
    Copyright 2013-2018 Paul Colby

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

#include "listusergroupsrequest.h"
#include "listusergroupsrequest_p.h"
#include "listusergroupsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListUserGroupsRequest
 * \brief The ListUserGroupsRequest class provides an interface for QuickSight ListUserGroups requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listUserGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserGroupsRequest::ListUserGroupsRequest(const ListUserGroupsRequest &other)
    : QuickSightRequest(new ListUserGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserGroupsRequest object.
 */
ListUserGroupsRequest::ListUserGroupsRequest()
    : QuickSightRequest(new ListUserGroupsRequestPrivate(QuickSightRequest::ListUserGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListUserGroupsRequestPrivate
 * \brief The ListUserGroupsRequestPrivate class provides private implementation for ListUserGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListUserGroupsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListUserGroupsRequestPrivate::ListUserGroupsRequestPrivate(
    const QuickSightRequest::Action action, ListUserGroupsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserGroupsRequest
 * class' copy constructor.
 */
ListUserGroupsRequestPrivate::ListUserGroupsRequestPrivate(
    const ListUserGroupsRequestPrivate &other, ListUserGroupsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
