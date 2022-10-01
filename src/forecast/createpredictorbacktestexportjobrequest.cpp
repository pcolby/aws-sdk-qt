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

#include "createpredictorbacktestexportjobrequest.h"
#include "createpredictorbacktestexportjobrequest_p.h"
#include "createpredictorbacktestexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreatePredictorBacktestExportJobRequest
 * \brief The CreatePredictorBacktestExportJobRequest class provides an interface for Forecast CreatePredictorBacktestExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createPredictorBacktestExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePredictorBacktestExportJobRequest::CreatePredictorBacktestExportJobRequest(const CreatePredictorBacktestExportJobRequest &other)
    : ForecastRequest(new CreatePredictorBacktestExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePredictorBacktestExportJobRequest object.
 */
CreatePredictorBacktestExportJobRequest::CreatePredictorBacktestExportJobRequest()
    : ForecastRequest(new CreatePredictorBacktestExportJobRequestPrivate(ForecastRequest::CreatePredictorBacktestExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePredictorBacktestExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePredictorBacktestExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePredictorBacktestExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreatePredictorBacktestExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreatePredictorBacktestExportJobRequestPrivate
 * \brief The CreatePredictorBacktestExportJobRequestPrivate class provides private implementation for CreatePredictorBacktestExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreatePredictorBacktestExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreatePredictorBacktestExportJobRequestPrivate::CreatePredictorBacktestExportJobRequestPrivate(
    const ForecastRequest::Action action, CreatePredictorBacktestExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePredictorBacktestExportJobRequest
 * class' copy constructor.
 */
CreatePredictorBacktestExportJobRequestPrivate::CreatePredictorBacktestExportJobRequestPrivate(
    const CreatePredictorBacktestExportJobRequestPrivate &other, CreatePredictorBacktestExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
