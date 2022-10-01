// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListUsersRequest
 * \brief The ListUsersRequest class provides an interface for FinspaceData ListUsers requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listUsers
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : FinspaceDataRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : FinspaceDataRequest(new ListUsersRequestPrivate(FinspaceDataRequest::ListUsersAction, this))
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
 * \class QtAws::FinspaceData::ListUsersRequestPrivate
 * \brief The ListUsersRequestPrivate class provides private implementation for ListUsersRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListUsersRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const FinspaceDataRequest::Action action, ListUsersRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
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
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
