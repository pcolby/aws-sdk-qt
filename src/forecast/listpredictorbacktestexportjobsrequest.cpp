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

#include "listpredictorbacktestexportjobsrequest.h"
#include "listpredictorbacktestexportjobsrequest_p.h"
#include "listpredictorbacktestexportjobsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListPredictorBacktestExportJobsRequest
 * \brief The ListPredictorBacktestExportJobsRequest class provides an interface for Forecast ListPredictorBacktestExportJobs requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listPredictorBacktestExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListPredictorBacktestExportJobsRequest::ListPredictorBacktestExportJobsRequest(const ListPredictorBacktestExportJobsRequest &other)
    : ForecastRequest(new ListPredictorBacktestExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPredictorBacktestExportJobsRequest object.
 */
ListPredictorBacktestExportJobsRequest::ListPredictorBacktestExportJobsRequest()
    : ForecastRequest(new ListPredictorBacktestExportJobsRequestPrivate(ForecastRequest::ListPredictorBacktestExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPredictorBacktestExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPredictorBacktestExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPredictorBacktestExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListPredictorBacktestExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListPredictorBacktestExportJobsRequestPrivate
 * \brief The ListPredictorBacktestExportJobsRequestPrivate class provides private implementation for ListPredictorBacktestExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListPredictorBacktestExportJobsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListPredictorBacktestExportJobsRequestPrivate::ListPredictorBacktestExportJobsRequestPrivate(
    const ForecastRequest::Action action, ListPredictorBacktestExportJobsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPredictorBacktestExportJobsRequest
 * class' copy constructor.
 */
ListPredictorBacktestExportJobsRequestPrivate::ListPredictorBacktestExportJobsRequestPrivate(
    const ListPredictorBacktestExportJobsRequestPrivate &other, ListPredictorBacktestExportJobsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
