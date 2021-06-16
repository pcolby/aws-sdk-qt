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

#include "listforecastexportjobsrequest.h"
#include "listforecastexportjobsrequest_p.h"
#include "listforecastexportjobsresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ListForecastExportJobsRequest
 * \brief The ListForecastExportJobsRequest class provides an interface for ForecastService ListForecastExportJobs requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::listForecastExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListForecastExportJobsRequest::ListForecastExportJobsRequest(const ListForecastExportJobsRequest &other)
    : ForecastServiceRequest(new ListForecastExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListForecastExportJobsRequest object.
 */
ListForecastExportJobsRequest::ListForecastExportJobsRequest()
    : ForecastServiceRequest(new ListForecastExportJobsRequestPrivate(ForecastServiceRequest::ListForecastExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListForecastExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListForecastExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListForecastExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListForecastExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::ListForecastExportJobsRequestPrivate
 * \brief The ListForecastExportJobsRequestPrivate class provides private implementation for ListForecastExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ListForecastExportJobsRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
ListForecastExportJobsRequestPrivate::ListForecastExportJobsRequestPrivate(
    const ForecastServiceRequest::Action action, ListForecastExportJobsRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListForecastExportJobsRequest
 * class' copy constructor.
 */
ListForecastExportJobsRequestPrivate::ListForecastExportJobsRequestPrivate(
    const ListForecastExportJobsRequestPrivate &other, ListForecastExportJobsRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
