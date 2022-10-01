// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsrequest.h"
#include "listgroupsrequest_p.h"
#include "listgroupsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListGroupsRequest
 * \brief The ListGroupsRequest class provides an interface for QuickSight ListGroups requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsRequest::ListGroupsRequest(const ListGroupsRequest &other)
    : QuickSightRequest(new ListGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsRequest object.
 */
ListGroupsRequest::ListGroupsRequest()
    : QuickSightRequest(new ListGroupsRequestPrivate(QuickSightRequest::ListGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListGroupsRequestPrivate
 * \brief The ListGroupsRequestPrivate class provides private implementation for ListGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListGroupsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const QuickSightRequest::Action action, ListGroupsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsRequest
 * class' copy constructor.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ListGroupsRequestPrivate &other, ListGroupsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
