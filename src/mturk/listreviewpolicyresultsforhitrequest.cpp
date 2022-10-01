// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreviewpolicyresultsforhitrequest.h"
#include "listreviewpolicyresultsforhitrequest_p.h"
#include "listreviewpolicyresultsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListReviewPolicyResultsForHITRequest
 * \brief The ListReviewPolicyResultsForHITRequest class provides an interface for MTurk ListReviewPolicyResultsForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listReviewPolicyResultsForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
ListReviewPolicyResultsForHITRequest::ListReviewPolicyResultsForHITRequest(const ListReviewPolicyResultsForHITRequest &other)
    : MTurkRequest(new ListReviewPolicyResultsForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReviewPolicyResultsForHITRequest object.
 */
ListReviewPolicyResultsForHITRequest::ListReviewPolicyResultsForHITRequest()
    : MTurkRequest(new ListReviewPolicyResultsForHITRequestPrivate(MTurkRequest::ListReviewPolicyResultsForHITAction, this))
{

}

/*!
 * \reimp
 */
bool ListReviewPolicyResultsForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReviewPolicyResultsForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReviewPolicyResultsForHITRequest::response(QNetworkReply * const reply) const
{
    return new ListReviewPolicyResultsForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListReviewPolicyResultsForHITRequestPrivate
 * \brief The ListReviewPolicyResultsForHITRequestPrivate class provides private implementation for ListReviewPolicyResultsForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListReviewPolicyResultsForHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListReviewPolicyResultsForHITRequestPrivate::ListReviewPolicyResultsForHITRequestPrivate(
    const MTurkRequest::Action action, ListReviewPolicyResultsForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReviewPolicyResultsForHITRequest
 * class' copy constructor.
 */
ListReviewPolicyResultsForHITRequestPrivate::ListReviewPolicyResultsForHITRequestPrivate(
    const ListReviewPolicyResultsForHITRequestPrivate &other, ListReviewPolicyResultsForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
