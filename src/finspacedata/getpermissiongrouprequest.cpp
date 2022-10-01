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

#include "getpermissiongrouprequest.h"
#include "getpermissiongrouprequest_p.h"
#include "getpermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::GetPermissionGroupRequest
 * \brief The GetPermissionGroupRequest class provides an interface for FinspaceData GetPermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::getPermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetPermissionGroupRequest::GetPermissionGroupRequest(const GetPermissionGroupRequest &other)
    : FinspaceDataRequest(new GetPermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPermissionGroupRequest object.
 */
GetPermissionGroupRequest::GetPermissionGroupRequest()
    : FinspaceDataRequest(new GetPermissionGroupRequestPrivate(FinspaceDataRequest::GetPermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetPermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetPermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::GetPermissionGroupRequestPrivate
 * \brief The GetPermissionGroupRequestPrivate class provides private implementation for GetPermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a GetPermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
GetPermissionGroupRequestPrivate::GetPermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, GetPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPermissionGroupRequest
 * class' copy constructor.
 */
GetPermissionGroupRequestPrivate::GetPermissionGroupRequestPrivate(
    const GetPermissionGroupRequestPrivate &other, GetPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
