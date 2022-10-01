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

#include "listpermissiongroupsrequest.h"
#include "listpermissiongroupsrequest_p.h"
#include "listpermissiongroupsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsRequest
 * \brief The ListPermissionGroupsRequest class provides an interface for FinspaceData ListPermissionGroups requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionGroupsRequest::ListPermissionGroupsRequest(const ListPermissionGroupsRequest &other)
    : FinspaceDataRequest(new ListPermissionGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionGroupsRequest object.
 */
ListPermissionGroupsRequest::ListPermissionGroupsRequest()
    : FinspaceDataRequest(new ListPermissionGroupsRequestPrivate(FinspaceDataRequest::ListPermissionGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsRequestPrivate
 * \brief The ListPermissionGroupsRequestPrivate class provides private implementation for ListPermissionGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListPermissionGroupsRequestPrivate::ListPermissionGroupsRequestPrivate(
    const FinspaceDataRequest::Action action, ListPermissionGroupsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionGroupsRequest
 * class' copy constructor.
 */
ListPermissionGroupsRequestPrivate::ListPermissionGroupsRequestPrivate(
    const ListPermissionGroupsRequestPrivate &other, ListPermissionGroupsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
