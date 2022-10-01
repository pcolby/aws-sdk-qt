// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwhatifforecastexportsrequest.h"
#include "listwhatifforecastexportsrequest_p.h"
#include "listwhatifforecastexportsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfForecastExportsRequest
 * \brief The ListWhatIfForecastExportsRequest class provides an interface for Forecast ListWhatIfForecastExports requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfForecastExports
 */

/*!
 * Constructs a copy of \a other.
 */
ListWhatIfForecastExportsRequest::ListWhatIfForecastExportsRequest(const ListWhatIfForecastExportsRequest &other)
    : ForecastRequest(new ListWhatIfForecastExportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWhatIfForecastExportsRequest object.
 */
ListWhatIfForecastExportsRequest::ListWhatIfForecastExportsRequest()
    : ForecastRequest(new ListWhatIfForecastExportsRequestPrivate(ForecastRequest::ListWhatIfForecastExportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWhatIfForecastExportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWhatIfForecastExportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWhatIfForecastExportsRequest::response(QNetworkReply * const reply) const
{
    return new ListWhatIfForecastExportsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListWhatIfForecastExportsRequestPrivate
 * \brief The ListWhatIfForecastExportsRequestPrivate class provides private implementation for ListWhatIfForecastExportsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfForecastExportsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListWhatIfForecastExportsRequestPrivate::ListWhatIfForecastExportsRequestPrivate(
    const ForecastRequest::Action action, ListWhatIfForecastExportsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWhatIfForecastExportsRequest
 * class' copy constructor.
 */
ListWhatIfForecastExportsRequestPrivate::ListWhatIfForecastExportsRequestPrivate(
    const ListWhatIfForecastExportsRequestPrivate &other, ListWhatIfForecastExportsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
