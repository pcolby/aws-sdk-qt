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

#include "listmonitorsrequest.h"
#include "listmonitorsrequest_p.h"
#include "listmonitorsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListMonitorsRequest
 * \brief The ListMonitorsRequest class provides an interface for Forecast ListMonitors requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listMonitors
 */

/*!
 * Constructs a copy of \a other.
 */
ListMonitorsRequest::ListMonitorsRequest(const ListMonitorsRequest &other)
    : ForecastRequest(new ListMonitorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMonitorsRequest object.
 */
ListMonitorsRequest::ListMonitorsRequest()
    : ForecastRequest(new ListMonitorsRequestPrivate(ForecastRequest::ListMonitorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMonitorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMonitorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMonitorsRequest::response(QNetworkReply * const reply) const
{
    return new ListMonitorsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListMonitorsRequestPrivate
 * \brief The ListMonitorsRequestPrivate class provides private implementation for ListMonitorsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListMonitorsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListMonitorsRequestPrivate::ListMonitorsRequestPrivate(
    const ForecastRequest::Action action, ListMonitorsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMonitorsRequest
 * class' copy constructor.
 */
ListMonitorsRequestPrivate::ListMonitorsRequestPrivate(
    const ListMonitorsRequestPrivate &other, ListMonitorsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
