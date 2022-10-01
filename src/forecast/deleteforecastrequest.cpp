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

#include "deleteforecastrequest.h"
#include "deleteforecastrequest_p.h"
#include "deleteforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteForecastRequest
 * \brief The DeleteForecastRequest class provides an interface for Forecast DeleteForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteForecast
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteForecastRequest::DeleteForecastRequest(const DeleteForecastRequest &other)
    : ForecastRequest(new DeleteForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteForecastRequest object.
 */
DeleteForecastRequest::DeleteForecastRequest()
    : ForecastRequest(new DeleteForecastRequestPrivate(ForecastRequest::DeleteForecastAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteForecastRequest::response(QNetworkReply * const reply) const
{
    return new DeleteForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteForecastRequestPrivate
 * \brief The DeleteForecastRequestPrivate class provides private implementation for DeleteForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteForecastRequestPrivate::DeleteForecastRequestPrivate(
    const ForecastRequest::Action action, DeleteForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteForecastRequest
 * class' copy constructor.
 */
DeleteForecastRequestPrivate::DeleteForecastRequestPrivate(
    const DeleteForecastRequestPrivate &other, DeleteForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
