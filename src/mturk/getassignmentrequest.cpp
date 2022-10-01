// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
