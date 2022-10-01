// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listscheduledqueriesrequest.h"
#include "listscheduledqueriesrequest_p.h"
#include "listscheduledqueriesresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::ListScheduledQueriesRequest
 * \brief The ListScheduledQueriesRequest class provides an interface for TimestreamQuery ListScheduledQueries requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::listScheduledQueries
 */

/*!
 * Constructs a copy of \a other.
 */
ListScheduledQueriesRequest::ListScheduledQueriesRequest(const ListScheduledQueriesRequest &other)
    : TimestreamQueryRequest(new ListScheduledQueriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListScheduledQueriesRequest object.
 */
ListScheduledQueriesRequest::ListScheduledQueriesRequest()
    : TimestreamQueryRequest(new ListScheduledQueriesRequestPrivate(TimestreamQueryRequest::ListScheduledQueriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListScheduledQueriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListScheduledQueriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListScheduledQueriesRequest::response(QNetworkReply * const reply) const
{
    return new ListScheduledQueriesResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::ListScheduledQueriesRequestPrivate
 * \brief The ListScheduledQueriesRequestPrivate class provides private implementation for ListScheduledQueriesRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a ListScheduledQueriesRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
ListScheduledQueriesRequestPrivate::ListScheduledQueriesRequestPrivate(
    const TimestreamQueryRequest::Action action, ListScheduledQueriesRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListScheduledQueriesRequest
 * class' copy constructor.
 */
ListScheduledQueriesRequestPrivate::ListScheduledQueriesRequestPrivate(
    const ListScheduledQueriesRequestPrivate &other, ListScheduledQueriesRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
