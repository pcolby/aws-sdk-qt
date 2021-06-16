/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listaccountassignmentsrequest.h"
#include "listaccountassignmentsrequest_p.h"
#include "listaccountassignmentsresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentsRequest
 * \brief The ListAccountAssignmentsRequest class provides an interface for SSOAdmin ListAccountAssignments requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountAssignments
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountAssignmentsRequest::ListAccountAssignmentsRequest(const ListAccountAssignmentsRequest &other)
    : SSOAdminRequest(new ListAccountAssignmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountAssignmentsRequest object.
 */
ListAccountAssignmentsRequest::ListAccountAssignmentsRequest()
    : SSOAdminRequest(new ListAccountAssignmentsRequestPrivate(SSOAdminRequest::ListAccountAssignmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountAssignmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountAssignmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountAssignmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountAssignmentsResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentsRequestPrivate
 * \brief The ListAccountAssignmentsRequestPrivate class provides private implementation for ListAccountAssignmentsRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountAssignmentsRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListAccountAssignmentsRequestPrivate::ListAccountAssignmentsRequestPrivate(
    const SSOAdminRequest::Action action, ListAccountAssignmentsRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountAssignmentsRequest
 * class' copy constructor.
 */
ListAccountAssignmentsRequestPrivate::ListAccountAssignmentsRequestPrivate(
    const ListAccountAssignmentsRequestPrivate &other, ListAccountAssignmentsRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
