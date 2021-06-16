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

#include "listanomalygrouptimeseriesrequest.h"
#include "listanomalygrouptimeseriesrequest_p.h"
#include "listanomalygrouptimeseriesresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupTimeSeriesRequest
 * \brief The ListAnomalyGroupTimeSeriesRequest class provides an interface for LookoutMetrics ListAnomalyGroupTimeSeries requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupTimeSeries
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnomalyGroupTimeSeriesRequest::ListAnomalyGroupTimeSeriesRequest(const ListAnomalyGroupTimeSeriesRequest &other)
    : LookoutMetricsRequest(new ListAnomalyGroupTimeSeriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnomalyGroupTimeSeriesRequest object.
 */
ListAnomalyGroupTimeSeriesRequest::ListAnomalyGroupTimeSeriesRequest()
    : LookoutMetricsRequest(new ListAnomalyGroupTimeSeriesRequestPrivate(LookoutMetricsRequest::ListAnomalyGroupTimeSeriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnomalyGroupTimeSeriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnomalyGroupTimeSeriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnomalyGroupTimeSeriesRequest::response(QNetworkReply * const reply) const
{
    return new ListAnomalyGroupTimeSeriesResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupTimeSeriesRequestPrivate
 * \brief The ListAnomalyGroupTimeSeriesRequestPrivate class provides private implementation for ListAnomalyGroupTimeSeriesRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupTimeSeriesRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ListAnomalyGroupTimeSeriesRequestPrivate::ListAnomalyGroupTimeSeriesRequestPrivate(
    const LookoutMetricsRequest::Action action, ListAnomalyGroupTimeSeriesRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnomalyGroupTimeSeriesRequest
 * class' copy constructor.
 */
ListAnomalyGroupTimeSeriesRequestPrivate::ListAnomalyGroupTimeSeriesRequestPrivate(
    const ListAnomalyGroupTimeSeriesRequestPrivate &other, ListAnomalyGroupTimeSeriesRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
