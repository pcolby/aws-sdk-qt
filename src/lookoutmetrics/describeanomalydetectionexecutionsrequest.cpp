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

#include "describeanomalydetectionexecutionsrequest.h"
#include "describeanomalydetectionexecutionsrequest_p.h"
#include "describeanomalydetectionexecutionsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectionExecutionsRequest
 * \brief The DescribeAnomalyDetectionExecutionsRequest class provides an interface for LookoutMetrics DescribeAnomalyDetectionExecutions requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAnomalyDetectionExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAnomalyDetectionExecutionsRequest::DescribeAnomalyDetectionExecutionsRequest(const DescribeAnomalyDetectionExecutionsRequest &other)
    : LookoutMetricsRequest(new DescribeAnomalyDetectionExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAnomalyDetectionExecutionsRequest object.
 */
DescribeAnomalyDetectionExecutionsRequest::DescribeAnomalyDetectionExecutionsRequest()
    : LookoutMetricsRequest(new DescribeAnomalyDetectionExecutionsRequestPrivate(LookoutMetricsRequest::DescribeAnomalyDetectionExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAnomalyDetectionExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAnomalyDetectionExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAnomalyDetectionExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAnomalyDetectionExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectionExecutionsRequestPrivate
 * \brief The DescribeAnomalyDetectionExecutionsRequestPrivate class provides private implementation for DescribeAnomalyDetectionExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAnomalyDetectionExecutionsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DescribeAnomalyDetectionExecutionsRequestPrivate::DescribeAnomalyDetectionExecutionsRequestPrivate(
    const LookoutMetricsRequest::Action action, DescribeAnomalyDetectionExecutionsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAnomalyDetectionExecutionsRequest
 * class' copy constructor.
 */
DescribeAnomalyDetectionExecutionsRequestPrivate::DescribeAnomalyDetectionExecutionsRequestPrivate(
    const DescribeAnomalyDetectionExecutionsRequestPrivate &other, DescribeAnomalyDetectionExecutionsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
