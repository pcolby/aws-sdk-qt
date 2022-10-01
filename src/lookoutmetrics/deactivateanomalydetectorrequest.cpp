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

#include "deactivateanomalydetectorrequest.h"
#include "deactivateanomalydetectorrequest_p.h"
#include "deactivateanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeactivateAnomalyDetectorRequest
 * \brief The DeactivateAnomalyDetectorRequest class provides an interface for LookoutMetrics DeactivateAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deactivateAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateAnomalyDetectorRequest::DeactivateAnomalyDetectorRequest(const DeactivateAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new DeactivateAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateAnomalyDetectorRequest object.
 */
DeactivateAnomalyDetectorRequest::DeactivateAnomalyDetectorRequest()
    : LookoutMetricsRequest(new DeactivateAnomalyDetectorRequestPrivate(LookoutMetricsRequest::DeactivateAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DeactivateAnomalyDetectorRequestPrivate
 * \brief The DeactivateAnomalyDetectorRequestPrivate class provides private implementation for DeactivateAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeactivateAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DeactivateAnomalyDetectorRequestPrivate::DeactivateAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, DeactivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateAnomalyDetectorRequest
 * class' copy constructor.
 */
DeactivateAnomalyDetectorRequestPrivate::DeactivateAnomalyDetectorRequestPrivate(
    const DeactivateAnomalyDetectorRequestPrivate &other, DeactivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
