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

#include "backtestanomalydetectorrequest.h"
#include "backtestanomalydetectorrequest_p.h"
#include "backtestanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::BackTestAnomalyDetectorRequest
 * \brief The BackTestAnomalyDetectorRequest class provides an interface for LookoutMetrics BackTestAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::backTestAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
BackTestAnomalyDetectorRequest::BackTestAnomalyDetectorRequest(const BackTestAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new BackTestAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BackTestAnomalyDetectorRequest object.
 */
BackTestAnomalyDetectorRequest::BackTestAnomalyDetectorRequest()
    : LookoutMetricsRequest(new BackTestAnomalyDetectorRequestPrivate(LookoutMetricsRequest::BackTestAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool BackTestAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BackTestAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BackTestAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new BackTestAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::BackTestAnomalyDetectorRequestPrivate
 * \brief The BackTestAnomalyDetectorRequestPrivate class provides private implementation for BackTestAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a BackTestAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
BackTestAnomalyDetectorRequestPrivate::BackTestAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, BackTestAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BackTestAnomalyDetectorRequest
 * class' copy constructor.
 */
BackTestAnomalyDetectorRequestPrivate::BackTestAnomalyDetectorRequestPrivate(
    const BackTestAnomalyDetectorRequestPrivate &other, BackTestAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
