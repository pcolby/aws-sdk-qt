/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "approveassignmentrequest.h"
#include "approveassignmentrequest_p.h"
#include "approveassignmentresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ApproveAssignmentRequest
 * \brief The ApproveAssignmentRequest class provides an interface for MTurk ApproveAssignment requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::approveAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
ApproveAssignmentRequest::ApproveAssignmentRequest(const ApproveAssignmentRequest &other)
    : MTurkRequest(new ApproveAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApproveAssignmentRequest object.
 */
ApproveAssignmentRequest::ApproveAssignmentRequest()
    : MTurkRequest(new ApproveAssignmentRequestPrivate(MTurkRequest::ApproveAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool ApproveAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApproveAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApproveAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new ApproveAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ApproveAssignmentRequestPrivate
 * \brief The ApproveAssignmentRequestPrivate class provides private implementation for ApproveAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ApproveAssignmentRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ApproveAssignmentRequestPrivate::ApproveAssignmentRequestPrivate(
    const MTurkRequest::Action action, ApproveAssignmentRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApproveAssignmentRequest
 * class' copy constructor.
 */
ApproveAssignmentRequestPrivate::ApproveAssignmentRequestPrivate(
    const ApproveAssignmentRequestPrivate &other, ApproveAssignmentRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
