// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListUsersRequest
 * \brief The ListUsersRequest class provides an interface for QuickSight ListUsers requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listUsers
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : QuickSightRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : QuickSightRequest(new ListUsersRequestPrivate(QuickSightRequest::ListUsersAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListUsersRequestPrivate
 * \brief The ListUsersRequestPrivate class provides private implementation for ListUsersRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListUsersRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const QuickSightRequest::Action action, ListUsersRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsersRequest
 * class' copy constructor.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const ListUsersRequestPrivate &other, ListUsersRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
