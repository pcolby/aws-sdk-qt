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

#include "createwhatifforecastrequest.h"
#include "createwhatifforecastrequest_p.h"
#include "createwhatifforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastRequest
 * \brief The CreateWhatIfForecastRequest class provides an interface for Forecast CreateWhatIfForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfForecast
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWhatIfForecastRequest::CreateWhatIfForecastRequest(const CreateWhatIfForecastRequest &other)
    : ForecastRequest(new CreateWhatIfForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWhatIfForecastRequest object.
 */
CreateWhatIfForecastRequest::CreateWhatIfForecastRequest()
    : ForecastRequest(new CreateWhatIfForecastRequestPrivate(ForecastRequest::CreateWhatIfForecastAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWhatIfForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWhatIfForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWhatIfForecastRequest::response(QNetworkReply * const reply) const
{
    return new CreateWhatIfForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastRequestPrivate
 * \brief The CreateWhatIfForecastRequestPrivate class provides private implementation for CreateWhatIfForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateWhatIfForecastRequestPrivate::CreateWhatIfForecastRequestPrivate(
    const ForecastRequest::Action action, CreateWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWhatIfForecastRequest
 * class' copy constructor.
 */
CreateWhatIfForecastRequestPrivate::CreateWhatIfForecastRequestPrivate(
    const CreateWhatIfForecastRequestPrivate &other, CreateWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
