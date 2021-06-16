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

#include "listaccountassignmentdeletionstatusrequest.h"
#include "listaccountassignmentdeletionstatusrequest_p.h"
#include "listaccountassignmentdeletionstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentDeletionStatusRequest
 * \brief The ListAccountAssignmentDeletionStatusRequest class provides an interface for SSOAdmin ListAccountAssignmentDeletionStatus requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountAssignmentDeletionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountAssignmentDeletionStatusRequest::ListAccountAssignmentDeletionStatusRequest(const ListAccountAssignmentDeletionStatusRequest &other)
    : SSOAdminRequest(new ListAccountAssignmentDeletionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountAssignmentDeletionStatusRequest object.
 */
ListAccountAssignmentDeletionStatusRequest::ListAccountAssignmentDeletionStatusRequest()
    : SSOAdminRequest(new ListAccountAssignmentDeletionStatusRequestPrivate(SSOAdminRequest::ListAccountAssignmentDeletionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountAssignmentDeletionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountAssignmentDeletionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountAssignmentDeletionStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountAssignmentDeletionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentDeletionStatusRequestPrivate
 * \brief The ListAccountAssignmentDeletionStatusRequestPrivate class provides private implementation for ListAccountAssignmentDeletionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountAssignmentDeletionStatusRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListAccountAssignmentDeletionStatusRequestPrivate::ListAccountAssignmentDeletionStatusRequestPrivate(
    const SSOAdminRequest::Action action, ListAccountAssignmentDeletionStatusRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountAssignmentDeletionStatusRequest
 * class' copy constructor.
 */
ListAccountAssignmentDeletionStatusRequestPrivate::ListAccountAssignmentDeletionStatusRequestPrivate(
    const ListAccountAssignmentDeletionStatusRequestPrivate &other, ListAccountAssignmentDeletionStatusRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
