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

#include "updatescheduledqueryrequest.h"
#include "updatescheduledqueryrequest_p.h"
#include "updatescheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::UpdateScheduledQueryRequest
 * \brief The UpdateScheduledQueryRequest class provides an interface for TimestreamQuery UpdateScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::updateScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateScheduledQueryRequest::UpdateScheduledQueryRequest(const UpdateScheduledQueryRequest &other)
    : TimestreamQueryRequest(new UpdateScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateScheduledQueryRequest object.
 */
UpdateScheduledQueryRequest::UpdateScheduledQueryRequest()
    : TimestreamQueryRequest(new UpdateScheduledQueryRequestPrivate(TimestreamQueryRequest::UpdateScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::UpdateScheduledQueryRequestPrivate
 * \brief The UpdateScheduledQueryRequestPrivate class provides private implementation for UpdateScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a UpdateScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
UpdateScheduledQueryRequestPrivate::UpdateScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, UpdateScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateScheduledQueryRequest
 * class' copy constructor.
 */
UpdateScheduledQueryRequestPrivate::UpdateScheduledQueryRequestPrivate(
    const UpdateScheduledQueryRequestPrivate &other, UpdateScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
