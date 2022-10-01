// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalertsrequest.h"
#include "listalertsrequest_p.h"
#include "listalertsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAlertsRequest
 * \brief The ListAlertsRequest class provides an interface for LookoutMetrics ListAlerts requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAlerts
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlertsRequest::ListAlertsRequest(const ListAlertsRequest &other)
    : LookoutMetricsRequest(new ListAlertsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlertsRequest object.
 */
ListAlertsRequest::ListAlertsRequest()
    : LookoutMetricsRequest(new ListAlertsRequestPrivate(LookoutMetricsRequest::ListAlertsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlertsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlertsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlertsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlertsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ListAlertsRequestPrivate
 * \brief The ListAlertsRequestPrivate class provides private implementation for ListAlertsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAlertsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ListAlertsRequestPrivate::ListAlertsRequestPrivate(
    const LookoutMetricsRequest::Action action, ListAlertsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlertsRequest
 * class' copy constructor.
 */
ListAlertsRequestPrivate::ListAlertsRequestPrivate(
    const ListAlertsRequestPrivate &other, ListAlertsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
