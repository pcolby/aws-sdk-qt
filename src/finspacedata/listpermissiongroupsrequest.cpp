// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpermissiongroupsrequest.h"
#include "listpermissiongroupsrequest_p.h"
#include "listpermissiongroupsresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsRequest
 * \brief The ListPermissionGroupsRequest class provides an interface for FinspaceData ListPermissionGroups requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionGroupsRequest::ListPermissionGroupsRequest(const ListPermissionGroupsRequest &other)
    : FinspaceDataRequest(new ListPermissionGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionGroupsRequest object.
 */
ListPermissionGroupsRequest::ListPermissionGroupsRequest()
    : FinspaceDataRequest(new ListPermissionGroupsRequestPrivate(FinspaceDataRequest::ListPermissionGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsRequestPrivate
 * \brief The ListPermissionGroupsRequestPrivate class provides private implementation for ListPermissionGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListPermissionGroupsRequestPrivate::ListPermissionGroupsRequestPrivate(
    const FinspaceDataRequest::Action action, ListPermissionGroupsRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionGroupsRequest
 * class' copy constructor.
 */
ListPermissionGroupsRequestPrivate::ListPermissionGroupsRequestPrivate(
    const ListPermissionGroupsRequestPrivate &other, ListPermissionGroupsRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
