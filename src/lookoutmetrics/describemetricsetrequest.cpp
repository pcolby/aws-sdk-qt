// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
