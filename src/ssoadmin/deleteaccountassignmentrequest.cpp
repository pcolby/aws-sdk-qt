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

#include "deleteaccountassignmentrequest.h"
#include "deleteaccountassignmentrequest_p.h"
#include "deleteaccountassignmentresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeleteAccountAssignmentRequest
 * \brief The DeleteAccountAssignmentRequest class provides an interface for SSOAdmin DeleteAccountAssignment requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deleteAccountAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccountAssignmentRequest::DeleteAccountAssignmentRequest(const DeleteAccountAssignmentRequest &other)
    : SSOAdminRequest(new DeleteAccountAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccountAssignmentRequest object.
 */
DeleteAccountAssignmentRequest::DeleteAccountAssignmentRequest()
    : SSOAdminRequest(new DeleteAccountAssignmentRequestPrivate(SSOAdminRequest::DeleteAccountAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccountAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccountAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccountAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccountAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DeleteAccountAssignmentRequestPrivate
 * \brief The DeleteAccountAssignmentRequestPrivate class provides private implementation for DeleteAccountAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeleteAccountAssignmentRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DeleteAccountAssignmentRequestPrivate::DeleteAccountAssignmentRequestPrivate(
    const SSOAdminRequest::Action action, DeleteAccountAssignmentRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccountAssignmentRequest
 * class' copy constructor.
 */
DeleteAccountAssignmentRequestPrivate::DeleteAccountAssignmentRequestPrivate(
    const DeleteAccountAssignmentRequestPrivate &other, DeleteAccountAssignmentRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
