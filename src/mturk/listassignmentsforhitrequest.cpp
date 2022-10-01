// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassignmentsforhitrequest.h"
#include "listassignmentsforhitrequest_p.h"
#include "listassignmentsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITRequest
 * \brief The ListAssignmentsForHITRequest class provides an interface for MTurk ListAssignmentsForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listAssignmentsForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssignmentsForHITRequest::ListAssignmentsForHITRequest(const ListAssignmentsForHITRequest &other)
    : MTurkRequest(new ListAssignmentsForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssignmentsForHITRequest object.
 */
ListAssignmentsForHITRequest::ListAssignmentsForHITRequest()
    : MTurkRequest(new ListAssignmentsForHITRequestPrivate(MTurkRequest::ListAssignmentsForHITAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssignmentsForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssignmentsForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssignmentsForHITRequest::response(QNetworkReply * const reply) const
{
    return new ListAssignmentsForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITRequestPrivate
 * \brief The ListAssignmentsForHITRequestPrivate class provides private implementation for ListAssignmentsForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListAssignmentsForHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListAssignmentsForHITRequestPrivate::ListAssignmentsForHITRequestPrivate(
    const MTurkRequest::Action action, ListAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssignmentsForHITRequest
 * class' copy constructor.
 */
ListAssignmentsForHITRequestPrivate::ListAssignmentsForHITRequestPrivate(
    const ListAssignmentsForHITRequestPrivate &other, ListAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
