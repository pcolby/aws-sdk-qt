// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointsrequest.h"
#include "describeendpointsrequest_p.h"
#include "describeendpointsresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DescribeEndpointsRequest
 * \brief The DescribeEndpointsRequest class provides an interface for TimestreamQuery DescribeEndpoints requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::describeEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest(const DescribeEndpointsRequest &other)
    : TimestreamQueryRequest(new DescribeEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEndpointsRequest object.
 */
DescribeEndpointsRequest::DescribeEndpointsRequest()
    : TimestreamQueryRequest(new DescribeEndpointsRequestPrivate(TimestreamQueryRequest::DescribeEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::DescribeEndpointsRequestPrivate
 * \brief The DescribeEndpointsRequestPrivate class provides private implementation for DescribeEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DescribeEndpointsRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const TimestreamQueryRequest::Action action, DescribeEndpointsRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointsRequest
 * class' copy constructor.
 */
DescribeEndpointsRequestPrivate::DescribeEndpointsRequestPrivate(
    const DescribeEndpointsRequestPrivate &other, DescribeEndpointsRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
