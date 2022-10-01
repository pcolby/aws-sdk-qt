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

#include "listdatasetimportjobsrequest.h"
#include "listdatasetimportjobsrequest_p.h"
#include "listdatasetimportjobsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListDatasetImportJobsRequest
 * \brief The ListDatasetImportJobsRequest class provides an interface for Forecast ListDatasetImportJobs requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listDatasetImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetImportJobsRequest::ListDatasetImportJobsRequest(const ListDatasetImportJobsRequest &other)
    : ForecastRequest(new ListDatasetImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetImportJobsRequest object.
 */
ListDatasetImportJobsRequest::ListDatasetImportJobsRequest()
    : ForecastRequest(new ListDatasetImportJobsRequestPrivate(ForecastRequest::ListDatasetImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListDatasetImportJobsRequestPrivate
 * \brief The ListDatasetImportJobsRequestPrivate class provides private implementation for ListDatasetImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListDatasetImportJobsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListDatasetImportJobsRequestPrivate::ListDatasetImportJobsRequestPrivate(
    const ForecastRequest::Action action, ListDatasetImportJobsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetImportJobsRequest
 * class' copy constructor.
 */
ListDatasetImportJobsRequestPrivate::ListDatasetImportJobsRequestPrivate(
    const ListDatasetImportJobsRequestPrivate &other, ListDatasetImportJobsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
