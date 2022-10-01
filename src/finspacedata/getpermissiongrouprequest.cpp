// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
