// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreviewablehitsrequest.h"
#include "listreviewablehitsrequest_p.h"
#include "listreviewablehitsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListReviewableHITsRequest
 * \brief The ListReviewableHITsRequest class provides an interface for MTurk ListReviewableHITs requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listReviewableHITs
 */

/*!
 * Constructs a copy of \a other.
 */
ListReviewableHITsRequest::ListReviewableHITsRequest(const ListReviewableHITsRequest &other)
    : MTurkRequest(new ListReviewableHITsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReviewableHITsRequest object.
 */
ListReviewableHITsRequest::ListReviewableHITsRequest()
    : MTurkRequest(new ListReviewableHITsRequestPrivate(MTurkRequest::ListReviewableHITsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReviewableHITsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReviewableHITsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReviewableHITsRequest::response(QNetworkReply * const reply) const
{
    return new ListReviewableHITsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListReviewableHITsRequestPrivate
 * \brief The ListReviewableHITsRequestPrivate class provides private implementation for ListReviewableHITsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListReviewableHITsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListReviewableHITsRequestPrivate::ListReviewableHITsRequestPrivate(
    const MTurkRequest::Action action, ListReviewableHITsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReviewableHITsRequest
 * class' copy constructor.
 */
ListReviewableHITsRequestPrivate::ListReviewableHITsRequestPrivate(
    const ListReviewableHITsRequestPrivate &other, ListReviewableHITsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
