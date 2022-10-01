// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
