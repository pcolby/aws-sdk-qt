// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanomalydetectorsrequest.h"
#include "listanomalydetectorsrequest_p.h"
#include "listanomalydetectorsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyDetectorsRequest
 * \brief The ListAnomalyDetectorsRequest class provides an interface for LookoutMetrics ListAnomalyDetectors requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyDetectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListAnomalyDetectorsRequest::ListAnomalyDetectorsRequest(const ListAnomalyDetectorsRequest &other)
    : LookoutMetricsRequest(new ListAnomalyDetectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAnomalyDetectorsRequest object.
 */
ListAnomalyDetectorsRequest::ListAnomalyDetectorsRequest()
    : LookoutMetricsRequest(new ListAnomalyDetectorsRequestPrivate(LookoutMetricsRequest::ListAnomalyDetectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAnomalyDetectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAnomalyDetectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAnomalyDetectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListAnomalyDetectorsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyDetectorsRequestPrivate
 * \brief The ListAnomalyDetectorsRequestPrivate class provides private implementation for ListAnomalyDetectorsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyDetectorsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ListAnomalyDetectorsRequestPrivate::ListAnomalyDetectorsRequestPrivate(
    const LookoutMetricsRequest::Action action, ListAnomalyDetectorsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAnomalyDetectorsRequest
 * class' copy constructor.
 */
ListAnomalyDetectorsRequestPrivate::ListAnomalyDetectorsRequestPrivate(
    const ListAnomalyDetectorsRequestPrivate &other, ListAnomalyDetectorsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
