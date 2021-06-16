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

#include "createforecastrequest.h"
#include "createforecastrequest_p.h"
#include "createforecastresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreateForecastRequest
 * \brief The CreateForecastRequest class provides an interface for ForecastService CreateForecast requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createForecast
 */

/*!
 * Constructs a copy of \a other.
 */
CreateForecastRequest::CreateForecastRequest(const CreateForecastRequest &other)
    : ForecastServiceRequest(new CreateForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateForecastRequest object.
 */
CreateForecastRequest::CreateForecastRequest()
    : ForecastServiceRequest(new CreateForecastRequestPrivate(ForecastServiceRequest::CreateForecastAction, this))
{

}

/*!
 * \reimp
 */
bool CreateForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateForecastRequest::response(QNetworkReply * const reply) const
{
    return new CreateForecastResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::CreateForecastRequestPrivate
 * \brief The CreateForecastRequestPrivate class provides private implementation for CreateForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreateForecastRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
CreateForecastRequestPrivate::CreateForecastRequestPrivate(
    const ForecastServiceRequest::Action action, CreateForecastRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateForecastRequest
 * class' copy constructor.
 */
CreateForecastRequestPrivate::CreateForecastRequestPrivate(
    const CreateForecastRequestPrivate &other, CreateForecastRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
