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

#include "describepredictorbacktestexportjobrequest.h"
#include "describepredictorbacktestexportjobrequest_p.h"
#include "describepredictorbacktestexportjobresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DescribePredictorBacktestExportJobRequest
 * \brief The DescribePredictorBacktestExportJobRequest class provides an interface for ForecastService DescribePredictorBacktestExportJob requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::describePredictorBacktestExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePredictorBacktestExportJobRequest::DescribePredictorBacktestExportJobRequest(const DescribePredictorBacktestExportJobRequest &other)
    : ForecastServiceRequest(new DescribePredictorBacktestExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePredictorBacktestExportJobRequest object.
 */
DescribePredictorBacktestExportJobRequest::DescribePredictorBacktestExportJobRequest()
    : ForecastServiceRequest(new DescribePredictorBacktestExportJobRequestPrivate(ForecastServiceRequest::DescribePredictorBacktestExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePredictorBacktestExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePredictorBacktestExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePredictorBacktestExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribePredictorBacktestExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DescribePredictorBacktestExportJobRequestPrivate
 * \brief The DescribePredictorBacktestExportJobRequestPrivate class provides private implementation for DescribePredictorBacktestExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DescribePredictorBacktestExportJobRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DescribePredictorBacktestExportJobRequestPrivate::DescribePredictorBacktestExportJobRequestPrivate(
    const ForecastServiceRequest::Action action, DescribePredictorBacktestExportJobRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePredictorBacktestExportJobRequest
 * class' copy constructor.
 */
DescribePredictorBacktestExportJobRequestPrivate::DescribePredictorBacktestExportJobRequestPrivate(
    const DescribePredictorBacktestExportJobRequestPrivate &other, DescribePredictorBacktestExportJobRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
