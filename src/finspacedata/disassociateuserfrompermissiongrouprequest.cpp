// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
