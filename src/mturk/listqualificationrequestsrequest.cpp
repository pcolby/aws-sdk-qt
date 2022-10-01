// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listqualificationrequestsrequest.h"
#include "listqualificationrequestsrequest_p.h"
#include "listqualificationrequestsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationRequestsRequest
 * \brief The ListQualificationRequestsRequest class provides an interface for MTurk ListQualificationRequests requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationRequests
 */

/*!
 * Constructs a copy of \a other.
 */
ListQualificationRequestsRequest::ListQualificationRequestsRequest(const ListQualificationRequestsRequest &other)
    : MTurkRequest(new ListQualificationRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQualificationRequestsRequest object.
 */
ListQualificationRequestsRequest::ListQualificationRequestsRequest()
    : MTurkRequest(new ListQualificationRequestsRequestPrivate(MTurkRequest::ListQualificationRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool ListQualificationRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQualificationRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQualificationRequestsRequest::response(QNetworkReply * const reply) const
{
    return new ListQualificationRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListQualificationRequestsRequestPrivate
 * \brief The ListQualificationRequestsRequestPrivate class provides private implementation for ListQualificationRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListQualificationRequestsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListQualificationRequestsRequestPrivate::ListQualificationRequestsRequestPrivate(
    const MTurkRequest::Action action, ListQualificationRequestsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQualificationRequestsRequest
 * class' copy constructor.
 */
ListQualificationRequestsRequestPrivate::ListQualificationRequestsRequestPrivate(
    const ListQualificationRequestsRequestPrivate &other, ListQualificationRequestsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
