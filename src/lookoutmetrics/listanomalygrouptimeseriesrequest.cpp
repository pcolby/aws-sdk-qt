// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
