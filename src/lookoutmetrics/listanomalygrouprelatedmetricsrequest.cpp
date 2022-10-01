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

#include "listanomalygrouprelatedmetricsrequest.h"
#include "listanomalygrouprelatedmetricsrequest_p.h"
#include "listanomalygrouprelatedmetricsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupRelatedMetricsRequest
 * \brief The ListAnomalyGroupRelatedMetricsRequest class provides an interface for LookoutMetrics ListAnomalyGroupRelatedMetrics requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupRelatedMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnomalyGroupRelatedMetricsRequest::ListAnomalyGroupRelatedMetricsRequest(const ListAnomalyGroupRelatedMetricsRequest &other)
    : LookoutMetricsRequest(new ListAnomalyGroupRelatedMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnomalyGroupRelatedMetricsRequest object.
 */
ListAnomalyGroupRelatedMetricsRequest::ListAnomalyGroupRelatedMetricsRequest()
    : LookoutMetricsRequest(new ListAnomalyGroupRelatedMetricsRequestPrivate(LookoutMetricsRequest::ListAnomalyGroupRelatedMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnomalyGroupRelatedMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnomalyGroupRelatedMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnomalyGroupRelatedMetricsRequest::response(QNetworkReply * const reply) const
{
    return new ListAnomalyGroupRelatedMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupRelatedMetricsRequestPrivate
 * \brief The ListAnomalyGroupRelatedMetricsRequestPrivate class provides private implementation for ListAnomalyGroupRelatedMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupRelatedMetricsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ListAnomalyGroupRelatedMetricsRequestPrivate::ListAnomalyGroupRelatedMetricsRequestPrivate(
    const LookoutMetricsRequest::Action action, ListAnomalyGroupRelatedMetricsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnomalyGroupRelatedMetricsRequest
 * class' copy constructor.
 */
ListAnomalyGroupRelatedMetricsRequestPrivate::ListAnomalyGroupRelatedMetricsRequestPrivate(
    const ListAnomalyGroupRelatedMetricsRequestPrivate &other, ListAnomalyGroupRelatedMetricsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
