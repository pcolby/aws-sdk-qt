// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executescheduledqueryrequest.h"
#include "executescheduledqueryrequest_p.h"
#include "executescheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::ExecuteScheduledQueryRequest
 * \brief The ExecuteScheduledQueryRequest class provides an interface for TimestreamQuery ExecuteScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::executeScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteScheduledQueryRequest::ExecuteScheduledQueryRequest(const ExecuteScheduledQueryRequest &other)
    : TimestreamQueryRequest(new ExecuteScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteScheduledQueryRequest object.
 */
ExecuteScheduledQueryRequest::ExecuteScheduledQueryRequest()
    : TimestreamQueryRequest(new ExecuteScheduledQueryRequestPrivate(TimestreamQueryRequest::ExecuteScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::ExecuteScheduledQueryRequestPrivate
 * \brief The ExecuteScheduledQueryRequestPrivate class provides private implementation for ExecuteScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a ExecuteScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
ExecuteScheduledQueryRequestPrivate::ExecuteScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, ExecuteScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteScheduledQueryRequest
 * class' copy constructor.
 */
ExecuteScheduledQueryRequestPrivate::ExecuteScheduledQueryRequestPrivate(
    const ExecuteScheduledQueryRequestPrivate &other, ExecuteScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
