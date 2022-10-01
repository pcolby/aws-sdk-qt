// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryforecastrequest.h"
#include "queryforecastrequest_p.h"
#include "queryforecastresponse.h"
#include "forecastqueryrequest_p.h"

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::QueryForecastRequest
 * \brief The QueryForecastRequest class provides an interface for ForecastQuery QueryForecast requests.
 *
 * \inmodule QtAwsForecastQuery
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastQueryClient::queryForecast
 */

/*!
 * Constructs a copy of \a other.
 */
QueryForecastRequest::QueryForecastRequest(const QueryForecastRequest &other)
    : ForecastQueryRequest(new QueryForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryForecastRequest object.
 */
QueryForecastRequest::QueryForecastRequest()
    : ForecastQueryRequest(new QueryForecastRequestPrivate(ForecastQueryRequest::QueryForecastAction, this))
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
 * \class QtAws::ForecastQuery::QueryForecastRequestPrivate
 * \brief The QueryForecastRequestPrivate class provides private implementation for QueryForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a QueryForecastRequestPrivate object for ForecastQuery \a action,
 * with public implementation \a q.
 */
QueryForecastRequestPrivate::QueryForecastRequestPrivate(
    const ForecastQueryRequest::Action action, QueryForecastRequest * const q)
    : ForecastQueryRequestPrivate(action, q)
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
    : ForecastQueryRequestPrivate(other, q)
{

}

} // namespace ForecastQuery
} // namespace QtAws
