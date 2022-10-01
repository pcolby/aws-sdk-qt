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

#include "listusersbypermissiongrouprequest.h"
#include "listusersbypermissiongrouprequest_p.h"
#include "listusersbypermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListUsersByPermissionGroupRequest
 * \brief The ListUsersByPermissionGroupRequest class provides an interface for FinspaceData ListUsersByPermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listUsersByPermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersByPermissionGroupRequest::ListUsersByPermissionGroupRequest(const ListUsersByPermissionGroupRequest &other)
    : FinspaceDataRequest(new ListUsersByPermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersByPermissionGroupRequest object.
 */
ListUsersByPermissionGroupRequest::ListUsersByPermissionGroupRequest()
    : FinspaceDataRequest(new ListUsersByPermissionGroupRequestPrivate(FinspaceDataRequest::ListUsersByPermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsersByPermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsersByPermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsersByPermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersByPermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListUsersByPermissionGroupRequestPrivate
 * \brief The ListUsersByPermissionGroupRequestPrivate class provides private implementation for ListUsersByPermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListUsersByPermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListUsersByPermissionGroupRequestPrivate::ListUsersByPermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, ListUsersByPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsersByPermissionGroupRequest
 * class' copy constructor.
 */
ListUsersByPermissionGroupRequestPrivate::ListUsersByPermissionGroupRequestPrivate(
    const ListUsersByPermissionGroupRequestPrivate &other, ListUsersByPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
