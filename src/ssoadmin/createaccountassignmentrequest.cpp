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

#include "createaccountassignmentrequest.h"
#include "createaccountassignmentrequest_p.h"
#include "createaccountassignmentresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::CreateAccountAssignmentRequest
 * \brief The CreateAccountAssignmentRequest class provides an interface for SSOAdmin CreateAccountAssignment requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::createAccountAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccountAssignmentRequest::CreateAccountAssignmentRequest(const CreateAccountAssignmentRequest &other)
    : SSOAdminRequest(new CreateAccountAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccountAssignmentRequest object.
 */
CreateAccountAssignmentRequest::CreateAccountAssignmentRequest()
    : SSOAdminRequest(new CreateAccountAssignmentRequestPrivate(SSOAdminRequest::CreateAccountAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccountAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccountAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccountAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccountAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::CreateAccountAssignmentRequestPrivate
 * \brief The CreateAccountAssignmentRequestPrivate class provides private implementation for CreateAccountAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a CreateAccountAssignmentRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
CreateAccountAssignmentRequestPrivate::CreateAccountAssignmentRequestPrivate(
    const SSOAdminRequest::Action action, CreateAccountAssignmentRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccountAssignmentRequest
 * class' copy constructor.
 */
CreateAccountAssignmentRequestPrivate::CreateAccountAssignmentRequestPrivate(
    const CreateAccountAssignmentRequestPrivate &other, CreateAccountAssignmentRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
