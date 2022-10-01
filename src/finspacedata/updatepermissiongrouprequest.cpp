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

#include "updatepermissiongrouprequest.h"
#include "updatepermissiongrouprequest_p.h"
#include "updatepermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::UpdatePermissionGroupRequest
 * \brief The UpdatePermissionGroupRequest class provides an interface for FinspaceData UpdatePermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::updatePermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePermissionGroupRequest::UpdatePermissionGroupRequest(const UpdatePermissionGroupRequest &other)
    : FinspaceDataRequest(new UpdatePermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePermissionGroupRequest object.
 */
UpdatePermissionGroupRequest::UpdatePermissionGroupRequest()
    : FinspaceDataRequest(new UpdatePermissionGroupRequestPrivate(FinspaceDataRequest::UpdatePermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::UpdatePermissionGroupRequestPrivate
 * \brief The UpdatePermissionGroupRequestPrivate class provides private implementation for UpdatePermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a UpdatePermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
UpdatePermissionGroupRequestPrivate::UpdatePermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, UpdatePermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePermissionGroupRequest
 * class' copy constructor.
 */
UpdatePermissionGroupRequestPrivate::UpdatePermissionGroupRequestPrivate(
    const UpdatePermissionGroupRequestPrivate &other, UpdatePermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
