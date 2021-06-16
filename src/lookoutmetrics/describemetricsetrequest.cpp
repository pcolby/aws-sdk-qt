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

#include "describemetricsetrequest.h"
#include "describemetricsetrequest_p.h"
#include "describemetricsetresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeMetricSetRequest
 * \brief The DescribeMetricSetRequest class provides an interface for LookoutMetrics DescribeMetricSet requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeMetricSet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMetricSetRequest::DescribeMetricSetRequest(const DescribeMetricSetRequest &other)
    : LookoutMetricsRequest(new DescribeMetricSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMetricSetRequest object.
 */
DescribeMetricSetRequest::DescribeMetricSetRequest()
    : LookoutMetricsRequest(new DescribeMetricSetRequestPrivate(LookoutMetricsRequest::DescribeMetricSetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMetricSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMetricSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMetricSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMetricSetResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DescribeMetricSetRequestPrivate
 * \brief The DescribeMetricSetRequestPrivate class provides private implementation for DescribeMetricSetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeMetricSetRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DescribeMetricSetRequestPrivate::DescribeMetricSetRequestPrivate(
    const LookoutMetricsRequest::Action action, DescribeMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMetricSetRequest
 * class' copy constructor.
 */
DescribeMetricSetRequestPrivate::DescribeMetricSetRequestPrivate(
    const DescribeMetricSetRequestPrivate &other, DescribeMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
