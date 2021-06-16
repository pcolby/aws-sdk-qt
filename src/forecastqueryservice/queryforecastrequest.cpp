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

#include "queryforecastrequest.h"
#include "queryforecastrequest_p.h"
#include "queryforecastresponse.h"
#include "forecastqueryservicerequest_p.h"

namespace QtAws {
namespace ForecastQueryService {

/*!
 * \class QtAws::ForecastQueryService::QueryForecastRequest
 * \brief The QueryForecastRequest class provides an interface for ForecastQueryService QueryForecast requests.
 *
 * \inmodule QtAwsForecastQueryService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastQueryServiceClient::queryForecast
 */

/*!
 * Constructs a copy of \a other.
 */
QueryForecastRequest::QueryForecastRequest(const QueryForecastRequest &other)
    : ForecastQueryServiceRequest(new QueryForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryForecastRequest object.
 */
QueryForecastRequest::QueryForecastRequest()
    : ForecastQueryServiceRequest(new QueryForecastRequestPrivate(ForecastQueryServiceRequest::QueryForecastAction, this))
{

}

/*!
 * \reimp
 */
bool QueryForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryForecastRequest::response(QNetworkReply * const reply) const
{
    return new QueryForecastResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastQueryService::QueryForecastRequestPrivate
 * \brief The QueryForecastRequestPrivate class provides private implementation for QueryForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecastQueryService
 */

/*!
 * Constructs a QueryForecastRequestPrivate object for ForecastQueryService \a action,
 * with public implementation \a q.
 */
QueryForecastRequestPrivate::QueryForecastRequestPrivate(
    const ForecastQueryServiceRequest::Action action, QueryForecastRequest * const q)
    : ForecastQueryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryForecastRequest
 * class' copy constructor.
 */
QueryForecastRequestPrivate::QueryForecastRequestPrivate(
    const QueryForecastRequestPrivate &other, QueryForecastRequest * const q)
    : ForecastQueryServiceRequestPrivate(other, q)
{

}

} // namespace ForecastQueryService
} // namespace QtAws
