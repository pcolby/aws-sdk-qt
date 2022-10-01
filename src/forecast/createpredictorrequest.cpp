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

#include "createpredictorrequest.h"
#include "createpredictorrequest_p.h"
#include "createpredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreatePredictorRequest
 * \brief The CreatePredictorRequest class provides an interface for Forecast CreatePredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createPredictor
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePredictorRequest::CreatePredictorRequest(const CreatePredictorRequest &other)
    : ForecastRequest(new CreatePredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePredictorRequest object.
 */
CreatePredictorRequest::CreatePredictorRequest()
    : ForecastRequest(new CreatePredictorRequestPrivate(ForecastRequest::CreatePredictorAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePredictorRequest::response(QNetworkReply * const reply) const
{
    return new CreatePredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreatePredictorRequestPrivate
 * \brief The CreatePredictorRequestPrivate class provides private implementation for CreatePredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreatePredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreatePredictorRequestPrivate::CreatePredictorRequestPrivate(
    const ForecastRequest::Action action, CreatePredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePredictorRequest
 * class' copy constructor.
 */
CreatePredictorRequestPrivate::CreatePredictorRequestPrivate(
    const CreatePredictorRequestPrivate &other, CreatePredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
