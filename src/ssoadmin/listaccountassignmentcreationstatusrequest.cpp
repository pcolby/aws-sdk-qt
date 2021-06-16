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

#include "listaccountassignmentcreationstatusrequest.h"
#include "listaccountassignmentcreationstatusrequest_p.h"
#include "listaccountassignmentcreationstatusresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentCreationStatusRequest
 * \brief The ListAccountAssignmentCreationStatusRequest class provides an interface for SSOAdmin ListAccountAssignmentCreationStatus requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountAssignmentCreationStatus
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountAssignmentCreationStatusRequest::ListAccountAssignmentCreationStatusRequest(const ListAccountAssignmentCreationStatusRequest &other)
    : SSOAdminRequest(new ListAccountAssignmentCreationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountAssignmentCreationStatusRequest object.
 */
ListAccountAssignmentCreationStatusRequest::ListAccountAssignmentCreationStatusRequest()
    : SSOAdminRequest(new ListAccountAssignmentCreationStatusRequestPrivate(SSOAdminRequest::ListAccountAssignmentCreationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountAssignmentCreationStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountAssignmentCreationStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountAssignmentCreationStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountAssignmentCreationStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListAccountAssignmentCreationStatusRequestPrivate
 * \brief The ListAccountAssignmentCreationStatusRequestPrivate class provides private implementation for ListAccountAssignmentCreationStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountAssignmentCreationStatusRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListAccountAssignmentCreationStatusRequestPrivate::ListAccountAssignmentCreationStatusRequestPrivate(
    const SSOAdminRequest::Action action, ListAccountAssignmentCreationStatusRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountAssignmentCreationStatusRequest
 * class' copy constructor.
 */
ListAccountAssignmentCreationStatusRequestPrivate::ListAccountAssignmentCreationStatusRequestPrivate(
    const ListAccountAssignmentCreationStatusRequestPrivate &other, ListAccountAssignmentCreationStatusRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
