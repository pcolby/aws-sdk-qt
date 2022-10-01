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

#include "listwhatifforecastsrequest.h"
#include "listwhatifforecastsrequest_p.h"
#include "listwhatifforecastsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfForecastsRequest
 * \brief The ListWhatIfForecastsRequest class provides an interface for Forecast ListWhatIfForecasts requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfForecasts
 */

/*!
 * Constructs a copy of \a other.
 */
ListWhatIfForecastsRequest::ListWhatIfForecastsRequest(const ListWhatIfForecastsRequest &other)
    : ForecastRequest(new ListWhatIfForecastsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWhatIfForecastsRequest object.
 */
ListWhatIfForecastsRequest::ListWhatIfForecastsRequest()
    : ForecastRequest(new ListWhatIfForecastsRequestPrivate(ForecastRequest::ListWhatIfForecastsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWhatIfForecastsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWhatIfForecastsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWhatIfForecastsRequest::response(QNetworkReply * const reply) const
{
    return new ListWhatIfForecastsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListWhatIfForecastsRequestPrivate
 * \brief The ListWhatIfForecastsRequestPrivate class provides private implementation for ListWhatIfForecastsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfForecastsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListWhatIfForecastsRequestPrivate::ListWhatIfForecastsRequestPrivate(
    const ForecastRequest::Action action, ListWhatIfForecastsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWhatIfForecastsRequest
 * class' copy constructor.
 */
ListWhatIfForecastsRequestPrivate::ListWhatIfForecastsRequestPrivate(
    const ListWhatIfForecastsRequestPrivate &other, ListWhatIfForecastsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
