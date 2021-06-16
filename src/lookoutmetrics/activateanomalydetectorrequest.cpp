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

#include "activateanomalydetectorrequest.h"
#include "activateanomalydetectorrequest_p.h"
#include "activateanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorRequest
 * \brief The ActivateAnomalyDetectorRequest class provides an interface for LookoutMetrics ActivateAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::activateAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
ActivateAnomalyDetectorRequest::ActivateAnomalyDetectorRequest(const ActivateAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new ActivateAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivateAnomalyDetectorRequest object.
 */
ActivateAnomalyDetectorRequest::ActivateAnomalyDetectorRequest()
    : LookoutMetricsRequest(new ActivateAnomalyDetectorRequestPrivate(LookoutMetricsRequest::ActivateAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool ActivateAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivateAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivateAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new ActivateAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorRequestPrivate
 * \brief The ActivateAnomalyDetectorRequestPrivate class provides private implementation for ActivateAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ActivateAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ActivateAnomalyDetectorRequestPrivate::ActivateAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, ActivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivateAnomalyDetectorRequest
 * class' copy constructor.
 */
ActivateAnomalyDetectorRequestPrivate::ActivateAnomalyDetectorRequestPrivate(
    const ActivateAnomalyDetectorRequestPrivate &other, ActivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
