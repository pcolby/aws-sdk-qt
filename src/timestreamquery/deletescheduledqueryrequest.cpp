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

#include "deletescheduledqueryrequest.h"
#include "deletescheduledqueryrequest_p.h"
#include "deletescheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DeleteScheduledQueryRequest
 * \brief The DeleteScheduledQueryRequest class provides an interface for TimestreamQuery DeleteScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::deleteScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteScheduledQueryRequest::DeleteScheduledQueryRequest(const DeleteScheduledQueryRequest &other)
    : TimestreamQueryRequest(new DeleteScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteScheduledQueryRequest object.
 */
DeleteScheduledQueryRequest::DeleteScheduledQueryRequest()
    : TimestreamQueryRequest(new DeleteScheduledQueryRequestPrivate(TimestreamQueryRequest::DeleteScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::DeleteScheduledQueryRequestPrivate
 * \brief The DeleteScheduledQueryRequestPrivate class provides private implementation for DeleteScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DeleteScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
DeleteScheduledQueryRequestPrivate::DeleteScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, DeleteScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduledQueryRequest
 * class' copy constructor.
 */
DeleteScheduledQueryRequestPrivate::DeleteScheduledQueryRequestPrivate(
    const DeleteScheduledQueryRequestPrivate &other, DeleteScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
