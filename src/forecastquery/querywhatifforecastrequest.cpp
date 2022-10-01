// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
