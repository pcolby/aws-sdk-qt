// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
