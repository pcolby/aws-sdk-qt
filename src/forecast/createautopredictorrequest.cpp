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

#include "createautopredictorrequest.h"
#include "createautopredictorrequest_p.h"
#include "createautopredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateAutoPredictorRequest
 * \brief The CreateAutoPredictorRequest class provides an interface for Forecast CreateAutoPredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createAutoPredictor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAutoPredictorRequest::CreateAutoPredictorRequest(const CreateAutoPredictorRequest &other)
    : ForecastRequest(new CreateAutoPredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAutoPredictorRequest object.
 */
CreateAutoPredictorRequest::CreateAutoPredictorRequest()
    : ForecastRequest(new CreateAutoPredictorRequestPrivate(ForecastRequest::CreateAutoPredictorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAutoPredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAutoPredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAutoPredictorRequest::response(QNetworkReply * const reply) const
{
    return new CreateAutoPredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateAutoPredictorRequestPrivate
 * \brief The CreateAutoPredictorRequestPrivate class provides private implementation for CreateAutoPredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateAutoPredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateAutoPredictorRequestPrivate::CreateAutoPredictorRequestPrivate(
    const ForecastRequest::Action action, CreateAutoPredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAutoPredictorRequest
 * class' copy constructor.
 */
CreateAutoPredictorRequestPrivate::CreateAutoPredictorRequestPrivate(
    const CreateAutoPredictorRequestPrivate &other, CreateAutoPredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
