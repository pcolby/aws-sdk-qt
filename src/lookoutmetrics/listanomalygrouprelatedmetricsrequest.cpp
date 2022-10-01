// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
