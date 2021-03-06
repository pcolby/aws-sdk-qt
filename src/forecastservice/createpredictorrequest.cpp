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
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreatePredictorRequest
 * \brief The CreatePredictorRequest class provides an interface for ForecastService CreatePredictor requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createPredictor
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePredictorRequest::CreatePredictorRequest(const CreatePredictorRequest &other)
    : ForecastServiceRequest(new CreatePredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePredictorRequest object.
 */
CreatePredictorRequest::CreatePredictorRequest()
    : ForecastServiceRequest(new CreatePredictorRequestPrivate(ForecastServiceRequest::CreatePredictorAction, this))
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
 * \class QtAws::ForecastService::CreatePredictorRequestPrivate
 * \brief The CreatePredictorRequestPrivate class provides private implementation for CreatePredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreatePredictorRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
CreatePredictorRequestPrivate::CreatePredictorRequestPrivate(
    const ForecastServiceRequest::Action action, CreatePredictorRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
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
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
