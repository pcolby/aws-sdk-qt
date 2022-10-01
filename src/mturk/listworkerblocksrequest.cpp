// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkerblocksrequest.h"
#include "listworkerblocksrequest_p.h"
#include "listworkerblocksresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkerBlocksRequest
 * \brief The ListWorkerBlocksRequest class provides an interface for MTurk ListWorkerBlocks requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkerBlocks
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkerBlocksRequest::ListWorkerBlocksRequest(const ListWorkerBlocksRequest &other)
    : MTurkRequest(new ListWorkerBlocksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkerBlocksRequest object.
 */
ListWorkerBlocksRequest::ListWorkerBlocksRequest()
    : MTurkRequest(new ListWorkerBlocksRequestPrivate(MTurkRequest::ListWorkerBlocksAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkerBlocksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkerBlocksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkerBlocksRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkerBlocksResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListWorkerBlocksRequestPrivate
 * \brief The ListWorkerBlocksRequestPrivate class provides private implementation for ListWorkerBlocksRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListWorkerBlocksRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListWorkerBlocksRequestPrivate::ListWorkerBlocksRequestPrivate(
    const MTurkRequest::Action action, ListWorkerBlocksRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkerBlocksRequest
 * class' copy constructor.
 */
ListWorkerBlocksRequestPrivate::ListWorkerBlocksRequestPrivate(
    const ListWorkerBlocksRequestPrivate &other, ListWorkerBlocksRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
