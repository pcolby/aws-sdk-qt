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

#include "describeanomalydetectorrequest.h"
#include "describeanomalydetectorrequest_p.h"
#include "describeanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectorRequest
 * \brief The DescribeAnomalyDetectorRequest class provides an interface for LookoutMetrics DescribeAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAnomalyDetectorRequest::DescribeAnomalyDetectorRequest(const DescribeAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new DescribeAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAnomalyDetectorRequest object.
 */
DescribeAnomalyDetectorRequest::DescribeAnomalyDetectorRequest()
    : LookoutMetricsRequest(new DescribeAnomalyDetectorRequestPrivate(LookoutMetricsRequest::DescribeAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectorRequestPrivate
 * \brief The DescribeAnomalyDetectorRequestPrivate class provides private implementation for DescribeAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DescribeAnomalyDetectorRequestPrivate::DescribeAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, DescribeAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAnomalyDetectorRequest
 * class' copy constructor.
 */
DescribeAnomalyDetectorRequestPrivate::DescribeAnomalyDetectorRequestPrivate(
    const DescribeAnomalyDetectorRequestPrivate &other, DescribeAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
