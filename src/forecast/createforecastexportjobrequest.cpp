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

#include "createforecastexportjobrequest.h"
#include "createforecastexportjobrequest_p.h"
#include "createforecastexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateForecastExportJobRequest
 * \brief The CreateForecastExportJobRequest class provides an interface for Forecast CreateForecastExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createForecastExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateForecastExportJobRequest::CreateForecastExportJobRequest(const CreateForecastExportJobRequest &other)
    : ForecastRequest(new CreateForecastExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateForecastExportJobRequest object.
 */
CreateForecastExportJobRequest::CreateForecastExportJobRequest()
    : ForecastRequest(new CreateForecastExportJobRequestPrivate(ForecastRequest::CreateForecastExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateForecastExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateForecastExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateForecastExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateForecastExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateForecastExportJobRequestPrivate
 * \brief The CreateForecastExportJobRequestPrivate class provides private implementation for CreateForecastExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateForecastExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateForecastExportJobRequestPrivate::CreateForecastExportJobRequestPrivate(
    const ForecastRequest::Action action, CreateForecastExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateForecastExportJobRequest
 * class' copy constructor.
 */
CreateForecastExportJobRequestPrivate::CreateForecastExportJobRequestPrivate(
    const CreateForecastExportJobRequestPrivate &other, CreateForecastExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
