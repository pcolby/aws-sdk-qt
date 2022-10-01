// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
