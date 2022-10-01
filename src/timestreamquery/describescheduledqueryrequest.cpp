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

#include "describescheduledqueryrequest.h"
#include "describescheduledqueryrequest_p.h"
#include "describescheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DescribeScheduledQueryRequest
 * \brief The DescribeScheduledQueryRequest class provides an interface for TimestreamQuery DescribeScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::describeScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScheduledQueryRequest::DescribeScheduledQueryRequest(const DescribeScheduledQueryRequest &other)
    : TimestreamQueryRequest(new DescribeScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScheduledQueryRequest object.
 */
DescribeScheduledQueryRequest::DescribeScheduledQueryRequest()
    : TimestreamQueryRequest(new DescribeScheduledQueryRequestPrivate(TimestreamQueryRequest::DescribeScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::DescribeScheduledQueryRequestPrivate
 * \brief The DescribeScheduledQueryRequestPrivate class provides private implementation for DescribeScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DescribeScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
DescribeScheduledQueryRequestPrivate::DescribeScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, DescribeScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduledQueryRequest
 * class' copy constructor.
 */
DescribeScheduledQueryRequestPrivate::DescribeScheduledQueryRequestPrivate(
    const DescribeScheduledQueryRequestPrivate &other, DescribeScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
