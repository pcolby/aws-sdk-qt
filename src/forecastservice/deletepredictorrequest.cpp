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

#include "deletepredictorrequest.h"
#include "deletepredictorrequest_p.h"
#include "deletepredictorresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeletePredictorRequest
 * \brief The DeletePredictorRequest class provides an interface for ForecastService DeletePredictor requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deletePredictor
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePredictorRequest::DeletePredictorRequest(const DeletePredictorRequest &other)
    : ForecastServiceRequest(new DeletePredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePredictorRequest object.
 */
DeletePredictorRequest::DeletePredictorRequest()
    : ForecastServiceRequest(new DeletePredictorRequestPrivate(ForecastServiceRequest::DeletePredictorAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePredictorRequest::response(QNetworkReply * const reply) const
{
    return new DeletePredictorResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DeletePredictorRequestPrivate
 * \brief The DeletePredictorRequestPrivate class provides private implementation for DeletePredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeletePredictorRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DeletePredictorRequestPrivate::DeletePredictorRequestPrivate(
    const ForecastServiceRequest::Action action, DeletePredictorRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePredictorRequest
 * class' copy constructor.
 */
DeletePredictorRequestPrivate::DeletePredictorRequestPrivate(
    const DeletePredictorRequestPrivate &other, DeletePredictorRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
