// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectassignmentrequest.h"
#include "rejectassignmentrequest_p.h"
#include "rejectassignmentresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectAssignmentRequest
 * \brief The RejectAssignmentRequest class provides an interface for MTurk RejectAssignment requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
RejectAssignmentRequest::RejectAssignmentRequest(const RejectAssignmentRequest &other)
    : MTurkRequest(new RejectAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectAssignmentRequest object.
 */
RejectAssignmentRequest::RejectAssignmentRequest()
    : MTurkRequest(new RejectAssignmentRequestPrivate(MTurkRequest::RejectAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool RejectAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new RejectAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::RejectAssignmentRequestPrivate
 * \brief The RejectAssignmentRequestPrivate class provides private implementation for RejectAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectAssignmentRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
RejectAssignmentRequestPrivate::RejectAssignmentRequestPrivate(
    const MTurkRequest::Action action, RejectAssignmentRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectAssignmentRequest
 * class' copy constructor.
 */
RejectAssignmentRequestPrivate::RejectAssignmentRequestPrivate(
    const RejectAssignmentRequestPrivate &other, RejectAssignmentRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
