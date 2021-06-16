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
