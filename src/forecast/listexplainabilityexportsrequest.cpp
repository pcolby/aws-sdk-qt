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
