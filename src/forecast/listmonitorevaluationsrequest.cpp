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
