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

#include "updatemetricsetrequest.h"
#include "updatemetricsetrequest_p.h"
#include "updatemetricsetresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetRequest
 * \brief The UpdateMetricSetRequest class provides an interface for LookoutMetrics UpdateMetricSet requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateMetricSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMetricSetRequest::UpdateMetricSetRequest(const UpdateMetricSetRequest &other)
    : LookoutMetricsRequest(new UpdateMetricSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMetricSetRequest object.
 */
UpdateMetricSetRequest::UpdateMetricSetRequest()
    : LookoutMetricsRequest(new UpdateMetricSetRequestPrivate(LookoutMetricsRequest::UpdateMetricSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMetricSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMetricSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMetricSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMetricSetResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetRequestPrivate
 * \brief The UpdateMetricSetRequestPrivate class provides private implementation for UpdateMetricSetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateMetricSetRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
UpdateMetricSetRequestPrivate::UpdateMetricSetRequestPrivate(
    const LookoutMetricsRequest::Action action, UpdateMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMetricSetRequest
 * class' copy constructor.
 */
UpdateMetricSetRequestPrivate::UpdateMetricSetRequestPrivate(
    const UpdateMetricSetRequestPrivate &other, UpdateMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
