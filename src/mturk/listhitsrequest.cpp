// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhitsrequest.h"
#include "listhitsrequest_p.h"
#include "listhitsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListHITsRequest
 * \brief The ListHITsRequest class provides an interface for MTurk ListHITs requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listHITs
 */

/*!
 * Constructs a copy of \a other.
 */
ListHITsRequest::ListHITsRequest(const ListHITsRequest &other)
    : MTurkRequest(new ListHITsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHITsRequest object.
 */
ListHITsRequest::ListHITsRequest()
    : MTurkRequest(new ListHITsRequestPrivate(MTurkRequest::ListHITsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHITsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHITsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHITsRequest::response(QNetworkReply * const reply) const
{
    return new ListHITsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListHITsRequestPrivate
 * \brief The ListHITsRequestPrivate class provides private implementation for ListHITsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListHITsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListHITsRequestPrivate::ListHITsRequestPrivate(
    const MTurkRequest::Action action, ListHITsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHITsRequest
 * class' copy constructor.
 */
ListHITsRequestPrivate::ListHITsRequestPrivate(
    const ListHITsRequestPrivate &other, ListHITsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
