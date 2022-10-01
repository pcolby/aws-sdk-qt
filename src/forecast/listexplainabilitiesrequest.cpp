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

#include "listexplainabilitiesrequest.h"
#include "listexplainabilitiesrequest_p.h"
#include "listexplainabilitiesresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilitiesRequest
 * \brief The ListExplainabilitiesRequest class provides an interface for Forecast ListExplainabilities requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilities
 */

/*!
 * Constructs a copy of \a other.
 */
ListExplainabilitiesRequest::ListExplainabilitiesRequest(const ListExplainabilitiesRequest &other)
    : ForecastRequest(new ListExplainabilitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExplainabilitiesRequest object.
 */
ListExplainabilitiesRequest::ListExplainabilitiesRequest()
    : ForecastRequest(new ListExplainabilitiesRequestPrivate(ForecastRequest::ListExplainabilitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExplainabilitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExplainabilitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExplainabilitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListExplainabilitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListExplainabilitiesRequestPrivate
 * \brief The ListExplainabilitiesRequestPrivate class provides private implementation for ListExplainabilitiesRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilitiesRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListExplainabilitiesRequestPrivate::ListExplainabilitiesRequestPrivate(
    const ForecastRequest::Action action, ListExplainabilitiesRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExplainabilitiesRequest
 * class' copy constructor.
 */
ListExplainabilitiesRequestPrivate::ListExplainabilitiesRequestPrivate(
    const ListExplainabilitiesRequestPrivate &other, ListExplainabilitiesRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
