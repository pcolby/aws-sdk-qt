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

#include "updateanomalydetectorrequest.h"
#include "updateanomalydetectorrequest_p.h"
#include "updateanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateAnomalyDetectorRequest
 * \brief The UpdateAnomalyDetectorRequest class provides an interface for LookoutMetrics UpdateAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAnomalyDetectorRequest::UpdateAnomalyDetectorRequest(const UpdateAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new UpdateAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAnomalyDetectorRequest object.
 */
UpdateAnomalyDetectorRequest::UpdateAnomalyDetectorRequest()
    : LookoutMetricsRequest(new UpdateAnomalyDetectorRequestPrivate(LookoutMetricsRequest::UpdateAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::UpdateAnomalyDetectorRequestPrivate
 * \brief The UpdateAnomalyDetectorRequestPrivate class provides private implementation for UpdateAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
UpdateAnomalyDetectorRequestPrivate::UpdateAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, UpdateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAnomalyDetectorRequest
 * class' copy constructor.
 */
UpdateAnomalyDetectorRequestPrivate::UpdateAnomalyDetectorRequestPrivate(
    const UpdateAnomalyDetectorRequestPrivate &other, UpdateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
