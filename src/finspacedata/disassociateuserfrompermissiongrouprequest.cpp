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

#include "disassociateuserfrompermissiongrouprequest.h"
#include "disassociateuserfrompermissiongrouprequest_p.h"
#include "disassociateuserfrompermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DisassociateUserFromPermissionGroupRequest
 * \brief The DisassociateUserFromPermissionGroupRequest class provides an interface for FinspaceData DisassociateUserFromPermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::disassociateUserFromPermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateUserFromPermissionGroupRequest::DisassociateUserFromPermissionGroupRequest(const DisassociateUserFromPermissionGroupRequest &other)
    : FinspaceDataRequest(new DisassociateUserFromPermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateUserFromPermissionGroupRequest object.
 */
DisassociateUserFromPermissionGroupRequest::DisassociateUserFromPermissionGroupRequest()
    : FinspaceDataRequest(new DisassociateUserFromPermissionGroupRequestPrivate(FinspaceDataRequest::DisassociateUserFromPermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateUserFromPermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateUserFromPermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateUserFromPermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateUserFromPermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::DisassociateUserFromPermissionGroupRequestPrivate
 * \brief The DisassociateUserFromPermissionGroupRequestPrivate class provides private implementation for DisassociateUserFromPermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DisassociateUserFromPermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
DisassociateUserFromPermissionGroupRequestPrivate::DisassociateUserFromPermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, DisassociateUserFromPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateUserFromPermissionGroupRequest
 * class' copy constructor.
 */
DisassociateUserFromPermissionGroupRequestPrivate::DisassociateUserFromPermissionGroupRequestPrivate(
    const DisassociateUserFromPermissionGroupRequestPrivate &other, DisassociateUserFromPermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
