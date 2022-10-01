// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepermissiongrouprequest.h"
#include "deletepermissiongrouprequest_p.h"
#include "deletepermissiongroupresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::DeletePermissionGroupRequest
 * \brief The DeletePermissionGroupRequest class provides an interface for FinspaceData DeletePermissionGroup requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::deletePermissionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePermissionGroupRequest::DeletePermissionGroupRequest(const DeletePermissionGroupRequest &other)
    : FinspaceDataRequest(new DeletePermissionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePermissionGroupRequest object.
 */
DeletePermissionGroupRequest::DeletePermissionGroupRequest()
    : FinspaceDataRequest(new DeletePermissionGroupRequestPrivate(FinspaceDataRequest::DeletePermissionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePermissionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePermissionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePermissionGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeletePermissionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::DeletePermissionGroupRequestPrivate
 * \brief The DeletePermissionGroupRequestPrivate class provides private implementation for DeletePermissionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a DeletePermissionGroupRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
DeletePermissionGroupRequestPrivate::DeletePermissionGroupRequestPrivate(
    const FinspaceDataRequest::Action action, DeletePermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePermissionGroupRequest
 * class' copy constructor.
 */
DeletePermissionGroupRequestPrivate::DeletePermissionGroupRequestPrivate(
    const DeletePermissionGroupRequestPrivate &other, DeletePermissionGroupRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
