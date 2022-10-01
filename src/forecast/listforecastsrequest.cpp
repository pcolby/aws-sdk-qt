// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listforecastsrequest.h"
#include "listforecastsrequest_p.h"
#include "listforecastsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListForecastsRequest
 * \brief The ListForecastsRequest class provides an interface for Forecast ListForecasts requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listForecasts
 */

/*!
 * Constructs a copy of \a other.
 */
ListForecastsRequest::ListForecastsRequest(const ListForecastsRequest &other)
    : ForecastRequest(new ListForecastsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListForecastsRequest object.
 */
ListForecastsRequest::ListForecastsRequest()
    : ForecastRequest(new ListForecastsRequestPrivate(ForecastRequest::ListForecastsAction, this))
{

}

/*!
 * \reimp
 */
bool ListForecastsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListForecastsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListForecastsRequest::response(QNetworkReply * const reply) const
{
    return new ListForecastsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListForecastsRequestPrivate
 * \brief The ListForecastsRequestPrivate class provides private implementation for ListForecastsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListForecastsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListForecastsRequestPrivate::ListForecastsRequestPrivate(
    const ForecastRequest::Action action, ListForecastsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListForecastsRequest
 * class' copy constructor.
 */
ListForecastsRequestPrivate::ListForecastsRequestPrivate(
    const ListForecastsRequestPrivate &other, ListForecastsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
