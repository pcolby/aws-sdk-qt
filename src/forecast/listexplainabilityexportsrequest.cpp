// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexplainabilityexportsrequest.h"
#include "listexplainabilityexportsrequest_p.h"
#include "listexplainabilityexportsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilityExportsRequest
 * \brief The ListExplainabilityExportsRequest class provides an interface for Forecast ListExplainabilityExports requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilityExports
 */

/*!
 * Constructs a copy of \a other.
 */
ListExplainabilityExportsRequest::ListExplainabilityExportsRequest(const ListExplainabilityExportsRequest &other)
    : ForecastRequest(new ListExplainabilityExportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExplainabilityExportsRequest object.
 */
ListExplainabilityExportsRequest::ListExplainabilityExportsRequest()
    : ForecastRequest(new ListExplainabilityExportsRequestPrivate(ForecastRequest::ListExplainabilityExportsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExplainabilityExportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExplainabilityExportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExplainabilityExportsRequest::response(QNetworkReply * const reply) const
{
    return new ListExplainabilityExportsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListExplainabilityExportsRequestPrivate
 * \brief The ListExplainabilityExportsRequestPrivate class provides private implementation for ListExplainabilityExportsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilityExportsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListExplainabilityExportsRequestPrivate::ListExplainabilityExportsRequestPrivate(
    const ForecastRequest::Action action, ListExplainabilityExportsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExplainabilityExportsRequest
 * class' copy constructor.
 */
ListExplainabilityExportsRequestPrivate::ListExplainabilityExportsRequestPrivate(
    const ListExplainabilityExportsRequestPrivate &other, ListExplainabilityExportsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
