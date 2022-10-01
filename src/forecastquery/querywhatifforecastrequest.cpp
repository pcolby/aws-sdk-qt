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

#include "querywhatifforecastrequest.h"
#include "querywhatifforecastrequest_p.h"
#include "querywhatifforecastresponse.h"
#include "forecastqueryrequest_p.h"

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::QueryWhatIfForecastRequest
 * \brief The QueryWhatIfForecastRequest class provides an interface for ForecastQuery QueryWhatIfForecast requests.
 *
 * \inmodule QtAwsForecastQuery
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastQueryClient::queryWhatIfForecast
 */

/*!
 * Constructs a copy of \a other.
 */
QueryWhatIfForecastRequest::QueryWhatIfForecastRequest(const QueryWhatIfForecastRequest &other)
    : ForecastQueryRequest(new QueryWhatIfForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryWhatIfForecastRequest object.
 */
QueryWhatIfForecastRequest::QueryWhatIfForecastRequest()
    : ForecastQueryRequest(new QueryWhatIfForecastRequestPrivate(ForecastQueryRequest::QueryWhatIfForecastAction, this))
{

}

/*!
 * \reimp
 */
bool QueryWhatIfForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryWhatIfForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryWhatIfForecastRequest::response(QNetworkReply * const reply) const
{
    return new QueryWhatIfForecastResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastQuery::QueryWhatIfForecastRequestPrivate
 * \brief The QueryWhatIfForecastRequestPrivate class provides private implementation for QueryWhatIfForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a QueryWhatIfForecastRequestPrivate object for ForecastQuery \a action,
 * with public implementation \a q.
 */
QueryWhatIfForecastRequestPrivate::QueryWhatIfForecastRequestPrivate(
    const ForecastQueryRequest::Action action, QueryWhatIfForecastRequest * const q)
    : ForecastQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryWhatIfForecastRequest
 * class' copy constructor.
 */
QueryWhatIfForecastRequestPrivate::QueryWhatIfForecastRequestPrivate(
    const QueryWhatIfForecastRequestPrivate &other, QueryWhatIfForecastRequest * const q)
    : ForecastQueryRequestPrivate(other, q)
{

}

} // namespace ForecastQuery
} // namespace QtAws
