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

#include "deletepredictorbacktestexportjobrequest.h"
#include "deletepredictorbacktestexportjobrequest_p.h"
#include "deletepredictorbacktestexportjobresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeletePredictorBacktestExportJobRequest
 * \brief The DeletePredictorBacktestExportJobRequest class provides an interface for ForecastService DeletePredictorBacktestExportJob requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deletePredictorBacktestExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePredictorBacktestExportJobRequest::DeletePredictorBacktestExportJobRequest(const DeletePredictorBacktestExportJobRequest &other)
    : ForecastServiceRequest(new DeletePredictorBacktestExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePredictorBacktestExportJobRequest object.
 */
DeletePredictorBacktestExportJobRequest::DeletePredictorBacktestExportJobRequest()
    : ForecastServiceRequest(new DeletePredictorBacktestExportJobRequestPrivate(ForecastServiceRequest::DeletePredictorBacktestExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePredictorBacktestExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePredictorBacktestExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePredictorBacktestExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DeletePredictorBacktestExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DeletePredictorBacktestExportJobRequestPrivate
 * \brief The DeletePredictorBacktestExportJobRequestPrivate class provides private implementation for DeletePredictorBacktestExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeletePredictorBacktestExportJobRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DeletePredictorBacktestExportJobRequestPrivate::DeletePredictorBacktestExportJobRequestPrivate(
    const ForecastServiceRequest::Action action, DeletePredictorBacktestExportJobRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePredictorBacktestExportJobRequest
 * class' copy constructor.
 */
DeletePredictorBacktestExportJobRequestPrivate::DeletePredictorBacktestExportJobRequestPrivate(
    const DeletePredictorBacktestExportJobRequestPrivate &other, DeletePredictorBacktestExportJobRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
