/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
