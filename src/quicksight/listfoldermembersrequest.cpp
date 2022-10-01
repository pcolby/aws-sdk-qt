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

#include "listfoldermembersrequest.h"
#include "listfoldermembersrequest_p.h"
#include "listfoldermembersresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListFolderMembersRequest
 * \brief The ListFolderMembersRequest class provides an interface for QuickSight ListFolderMembers requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listFolderMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListFolderMembersRequest::ListFolderMembersRequest(const ListFolderMembersRequest &other)
    : QuickSightRequest(new ListFolderMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFolderMembersRequest object.
 */
ListFolderMembersRequest::ListFolderMembersRequest()
    : QuickSightRequest(new ListFolderMembersRequestPrivate(QuickSightRequest::ListFolderMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFolderMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFolderMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFolderMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListFolderMembersResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListFolderMembersRequestPrivate
 * \brief The ListFolderMembersRequestPrivate class provides private implementation for ListFolderMembersRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListFolderMembersRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListFolderMembersRequestPrivate::ListFolderMembersRequestPrivate(
    const QuickSightRequest::Action action, ListFolderMembersRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFolderMembersRequest
 * class' copy constructor.
 */
ListFolderMembersRequestPrivate::ListFolderMembersRequestPrivate(
    const ListFolderMembersRequestPrivate &other, ListFolderMembersRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
