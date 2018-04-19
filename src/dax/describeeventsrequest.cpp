/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeeventsrequest.h"
#include "describeeventsrequest_p.h"
#include "describeeventsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeEventsRequest
 * \brief The DescribeEventsRequest class provides an interface for DAX DescribeEvents requests.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::describeEvents
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventsRequest::DescribeEventsRequest(const DescribeEventsRequest &other)
    : DAXRequest(new DescribeEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventsRequest object.
 */
DescribeEventsRequest::DescribeEventsRequest()
    : DAXRequest(new DescribeEventsRequestPrivate(DAXRequest::DescribeEventsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventsResponse(*this, reply);
}

/*!
 * \class QtAws::DAX::DescribeEventsRequestPrivate
 * \brief The DescribeEventsRequestPrivate class provides private implementation for DescribeEventsRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 *
 * Constructs a DescribeEventsRequestPrivate object for DAX \a action with,
 * public implementation \a q.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DAXRequest::Action action, DescribeEventsRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventsRequest
 * class' copy constructor.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DescribeEventsRequestPrivate &other, DescribeEventsRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
