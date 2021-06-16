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

#include "deleteanomalydetectorrequest.h"
#include "deleteanomalydetectorrequest_p.h"
#include "deleteanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorRequest
 * \brief The DeleteAnomalyDetectorRequest class provides an interface for LookoutMetrics DeleteAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest(const DeleteAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new DeleteAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnomalyDetectorRequest object.
 */
DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest()
    : LookoutMetricsRequest(new DeleteAnomalyDetectorRequestPrivate(LookoutMetricsRequest::DeleteAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorRequestPrivate
 * \brief The DeleteAnomalyDetectorRequestPrivate class provides private implementation for DeleteAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DeleteAnomalyDetectorRequestPrivate::DeleteAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, DeleteAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnomalyDetectorRequest
 * class' copy constructor.
 */
DeleteAnomalyDetectorRequestPrivate::DeleteAnomalyDetectorRequestPrivate(
    const DeleteAnomalyDetectorRequestPrivate &other, DeleteAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
