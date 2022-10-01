// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanomalygroupsummariesrequest.h"
#include "listanomalygroupsummariesrequest_p.h"
#include "listanomalygroupsummariesresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupSummariesRequest
 * \brief The ListAnomalyGroupSummariesRequest class provides an interface for LookoutMetrics ListAnomalyGroupSummaries requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnomalyGroupSummariesRequest::ListAnomalyGroupSummariesRequest(const ListAnomalyGroupSummariesRequest &other)
    : LookoutMetricsRequest(new ListAnomalyGroupSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnomalyGroupSummariesRequest object.
 */
ListAnomalyGroupSummariesRequest::ListAnomalyGroupSummariesRequest()
    : LookoutMetricsRequest(new ListAnomalyGroupSummariesRequestPrivate(LookoutMetricsRequest::ListAnomalyGroupSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnomalyGroupSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnomalyGroupSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnomalyGroupSummariesRequest::response(QNetworkReply * const reply) const
{
    return new ListAnomalyGroupSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupSummariesRequestPrivate
 * \brief The ListAnomalyGroupSummariesRequestPrivate class provides private implementation for ListAnomalyGroupSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupSummariesRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ListAnomalyGroupSummariesRequestPrivate::ListAnomalyGroupSummariesRequestPrivate(
    const LookoutMetricsRequest::Action action, ListAnomalyGroupSummariesRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnomalyGroupSummariesRequest
 * class' copy constructor.
 */
ListAnomalyGroupSummariesRequestPrivate::ListAnomalyGroupSummariesRequestPrivate(
    const ListAnomalyGroupSummariesRequestPrivate &other, ListAnomalyGroupSummariesRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
