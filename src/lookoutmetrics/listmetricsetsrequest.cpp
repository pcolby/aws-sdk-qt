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

#include "listmetricsetsrequest.h"
#include "listmetricsetsrequest_p.h"
#include "listmetricsetsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListMetricSetsRequest
 * \brief The ListMetricSetsRequest class provides an interface for LookoutMetrics ListMetricSets requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listMetricSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListMetricSetsRequest::ListMetricSetsRequest(const ListMetricSetsRequest &other)
    : LookoutMetricsRequest(new ListMetricSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMetricSetsRequest object.
 */
ListMetricSetsRequest::ListMetricSetsRequest()
    : LookoutMetricsRequest(new ListMetricSetsRequestPrivate(LookoutMetricsRequest::ListMetricSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMetricSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMetricSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMetricSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListMetricSetsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ListMetricSetsRequestPrivate
 * \brief The ListMetricSetsRequestPrivate class provides private implementation for ListMetricSetsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListMetricSetsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ListMetricSetsRequestPrivate::ListMetricSetsRequestPrivate(
    const LookoutMetricsRequest::Action action, ListMetricSetsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMetricSetsRequest
 * class' copy constructor.
 */
ListMetricSetsRequestPrivate::ListMetricSetsRequestPrivate(
    const ListMetricSetsRequestPrivate &other, ListMetricSetsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
