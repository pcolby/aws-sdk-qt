// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmonitorevaluationsrequest.h"
#include "listmonitorevaluationsrequest_p.h"
#include "listmonitorevaluationsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListMonitorEvaluationsRequest
 * \brief The ListMonitorEvaluationsRequest class provides an interface for Forecast ListMonitorEvaluations requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listMonitorEvaluations
 */

/*!
 * Constructs a copy of \a other.
 */
ListMonitorEvaluationsRequest::ListMonitorEvaluationsRequest(const ListMonitorEvaluationsRequest &other)
    : ForecastRequest(new ListMonitorEvaluationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMonitorEvaluationsRequest object.
 */
ListMonitorEvaluationsRequest::ListMonitorEvaluationsRequest()
    : ForecastRequest(new ListMonitorEvaluationsRequestPrivate(ForecastRequest::ListMonitorEvaluationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMonitorEvaluationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMonitorEvaluationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMonitorEvaluationsRequest::response(QNetworkReply * const reply) const
{
    return new ListMonitorEvaluationsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListMonitorEvaluationsRequestPrivate
 * \brief The ListMonitorEvaluationsRequestPrivate class provides private implementation for ListMonitorEvaluationsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListMonitorEvaluationsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListMonitorEvaluationsRequestPrivate::ListMonitorEvaluationsRequestPrivate(
    const ForecastRequest::Action action, ListMonitorEvaluationsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMonitorEvaluationsRequest
 * class' copy constructor.
 */
ListMonitorEvaluationsRequestPrivate::ListMonitorEvaluationsRequestPrivate(
    const ListMonitorEvaluationsRequestPrivate &other, ListMonitorEvaluationsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
