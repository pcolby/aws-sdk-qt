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

#include "getassignmentrequest.h"
#include "getassignmentrequest_p.h"
#include "getassignmentresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetAssignmentRequest
 * \brief The GetAssignmentRequest class provides an interface for MTurk GetAssignment requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssignmentRequest::GetAssignmentRequest(const GetAssignmentRequest &other)
    : MTurkRequest(new GetAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssignmentRequest object.
 */
GetAssignmentRequest::GetAssignmentRequest()
    : MTurkRequest(new GetAssignmentRequestPrivate(MTurkRequest::GetAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new GetAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetAssignmentRequestPrivate
 * \brief The GetAssignmentRequestPrivate class provides private implementation for GetAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetAssignmentRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
GetAssignmentRequestPrivate::GetAssignmentRequestPrivate(
    const MTurkRequest::Action action, GetAssignmentRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssignmentRequest
 * class' copy constructor.
 */
GetAssignmentRequestPrivate::GetAssignmentRequestPrivate(
    const GetAssignmentRequestPrivate &other, GetAssignmentRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
