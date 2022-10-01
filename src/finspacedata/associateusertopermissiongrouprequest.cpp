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

#include "associateusertopermissiongrouprequest.h"
#include "associateusertopermissiongrouprequest_p.h"
#include "associateusertopermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::AssociateUserToPermissionGroupRequest
 * \brief The AssociateUserToPermissionGroupRequest class provides an interface for FinspaceData AssociateUserToPermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::associateUserToPermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateUserToPermissionGroupRequest::AssociateUserToPermissionGroupRequest(const AssociateUserToPermissionGroupRequest &other)
    : FinspaceDataRequest(new AssociateUserToPermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateUserToPermissionGroupRequest object.
 */
AssociateUserToPermissionGroupRequest::AssociateUserToPermissionGroupRequest()
    : FinspaceDataRequest(new AssociateUserToPermissionGroupRequestPrivate(FinspaceDataRequest::AssociateUserToPermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateUserToPermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateUserToPermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateUserToPermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new AssociateUserToPermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::AssociateUserToPermissionGroupRequestPrivate
 * \brief The AssociateUserToPermissionGroupRequestPrivate class provides private implementation for AssociateUserToPermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a AssociateUserToPermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
AssociateUserToPermissionGroupRequestPrivate::AssociateUserToPermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, AssociateUserToPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateUserToPermissionGroupRequest
 * class' copy constructor.
 */
AssociateUserToPermissionGroupRequestPrivate::AssociateUserToPermissionGroupRequestPrivate(
    const AssociateUserToPermissionGroupRequestPrivate &other, AssociateUserToPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
