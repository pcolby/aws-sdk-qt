// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusergroupsrequest.h"
#include "listusergroupsrequest_p.h"
#include "listusergroupsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListUserGroupsRequest
 * \brief The ListUserGroupsRequest class provides an interface for QuickSight ListUserGroups requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listUserGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserGroupsRequest::ListUserGroupsRequest(const ListUserGroupsRequest &other)
    : QuickSightRequest(new ListUserGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserGroupsRequest object.
 */
ListUserGroupsRequest::ListUserGroupsRequest()
    : QuickSightRequest(new ListUserGroupsRequestPrivate(QuickSightRequest::ListUserGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListUserGroupsRequestPrivate
 * \brief The ListUserGroupsRequestPrivate class provides private implementation for ListUserGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListUserGroupsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListUserGroupsRequestPrivate::ListUserGroupsRequestPrivate(
    const QuickSightRequest::Action action, ListUserGroupsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserGroupsRequest
 * class' copy constructor.
 */
ListUserGroupsRequestPrivate::ListUserGroupsRequestPrivate(
    const ListUserGroupsRequestPrivate &other, ListUserGroupsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
