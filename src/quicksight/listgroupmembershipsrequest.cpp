/*
    Copyright 2013-2021 Paul Colby

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

#include "listgroupmembershipsrequest.h"
#include "listgroupmembershipsrequest_p.h"
#include "listgroupmembershipsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListGroupMembershipsRequest
 * \brief The ListGroupMembershipsRequest class provides an interface for QuickSight ListGroupMemberships requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listGroupMemberships
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupMembershipsRequest::ListGroupMembershipsRequest(const ListGroupMembershipsRequest &other)
    : QuickSightRequest(new ListGroupMembershipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupMembershipsRequest object.
 */
ListGroupMembershipsRequest::ListGroupMembershipsRequest()
    : QuickSightRequest(new ListGroupMembershipsRequestPrivate(QuickSightRequest::ListGroupMembershipsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupMembershipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupMembershipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupMembershipsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupMembershipsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListGroupMembershipsRequestPrivate
 * \brief The ListGroupMembershipsRequestPrivate class provides private implementation for ListGroupMembershipsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListGroupMembershipsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListGroupMembershipsRequestPrivate::ListGroupMembershipsRequestPrivate(
    const QuickSightRequest::Action action, ListGroupMembershipsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupMembershipsRequest
 * class' copy constructor.
 */
ListGroupMembershipsRequestPrivate::ListGroupMembershipsRequestPrivate(
    const ListGroupMembershipsRequestPrivate &other, ListGroupMembershipsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
