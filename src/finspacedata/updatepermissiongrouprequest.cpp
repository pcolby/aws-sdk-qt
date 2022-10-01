// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
