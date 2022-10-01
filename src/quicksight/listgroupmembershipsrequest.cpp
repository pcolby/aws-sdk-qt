// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupmembershipsrequest.h"
#include "listgroupmembershipsrequest_p.h"
#include "listgroupmembershipsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListGroupMembershipsRequest
 * \brief The ListGroupMembershipsRequest class provides an interface for QuickSight ListGroupMemberships requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listGroupMemberships
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupMembershipsRequest::ListGroupMembershipsRequest(const ListGroupMembershipsRequest &other)
    : QuickSightRequest(new ListGroupMembershipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupMembershipsRequest object.
 */
ListGroupMembershipsRequest::ListGroupMembershipsRequest()
    : QuickSightRequest(new ListGroupMembershipsRequestPrivate(QuickSightRequest::ListGroupMembershipsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupMembershipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupMembershipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupMembershipsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupMembershipsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListGroupMembershipsRequestPrivate
 * \brief The ListGroupMembershipsRequestPrivate class provides private implementation for ListGroupMembershipsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListGroupMembershipsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListGroupMembershipsRequestPrivate::ListGroupMembershipsRequestPrivate(
    const QuickSightRequest::Action action, ListGroupMembershipsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupMembershipsRequest
 * class' copy constructor.
 */
ListGroupMembershipsRequestPrivate::ListGroupMembershipsRequestPrivate(
    const ListGroupMembershipsRequestPrivate &other, ListGroupMembershipsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
