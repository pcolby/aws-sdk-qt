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

#include "describeforecastexportjobrequest.h"
#include "describeforecastexportjobrequest_p.h"
#include "describeforecastexportjobresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DescribeForecastExportJobRequest
 * \brief The DescribeForecastExportJobRequest class provides an interface for ForecastService DescribeForecastExportJob requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::describeForecastExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeForecastExportJobRequest::DescribeForecastExportJobRequest(const DescribeForecastExportJobRequest &other)
    : ForecastServiceRequest(new DescribeForecastExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeForecastExportJobRequest object.
 */
DescribeForecastExportJobRequest::DescribeForecastExportJobRequest()
    : ForecastServiceRequest(new DescribeForecastExportJobRequestPrivate(ForecastServiceRequest::DescribeForecastExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeForecastExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeForecastExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeForecastExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeForecastExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DescribeForecastExportJobRequestPrivate
 * \brief The DescribeForecastExportJobRequestPrivate class provides private implementation for DescribeForecastExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DescribeForecastExportJobRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DescribeForecastExportJobRequestPrivate::DescribeForecastExportJobRequestPrivate(
    const ForecastServiceRequest::Action action, DescribeForecastExportJobRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeForecastExportJobRequest
 * class' copy constructor.
 */
DescribeForecastExportJobRequestPrivate::DescribeForecastExportJobRequestPrivate(
    const DescribeForecastExportJobRequestPrivate &other, DescribeForecastExportJobRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
