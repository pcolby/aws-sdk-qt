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

#include "deletewhatifforecastrequest.h"
#include "deletewhatifforecastrequest_p.h"
#include "deletewhatifforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastRequest
 * \brief The DeleteWhatIfForecastRequest class provides an interface for Forecast DeleteWhatIfForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecast
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWhatIfForecastRequest::DeleteWhatIfForecastRequest(const DeleteWhatIfForecastRequest &other)
    : ForecastRequest(new DeleteWhatIfForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWhatIfForecastRequest object.
 */
DeleteWhatIfForecastRequest::DeleteWhatIfForecastRequest()
    : ForecastRequest(new DeleteWhatIfForecastRequestPrivate(ForecastRequest::DeleteWhatIfForecastAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWhatIfForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWhatIfForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWhatIfForecastRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWhatIfForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastRequestPrivate
 * \brief The DeleteWhatIfForecastRequestPrivate class provides private implementation for DeleteWhatIfForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteWhatIfForecastRequestPrivate::DeleteWhatIfForecastRequestPrivate(
    const ForecastRequest::Action action, DeleteWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWhatIfForecastRequest
 * class' copy constructor.
 */
DeleteWhatIfForecastRequestPrivate::DeleteWhatIfForecastRequestPrivate(
    const DeleteWhatIfForecastRequestPrivate &other, DeleteWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
