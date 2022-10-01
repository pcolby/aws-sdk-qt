// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
