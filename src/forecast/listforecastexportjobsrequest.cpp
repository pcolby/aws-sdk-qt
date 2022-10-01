// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listforecastexportjobsrequest.h"
#include "listforecastexportjobsrequest_p.h"
#include "listforecastexportjobsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListForecastExportJobsRequest
 * \brief The ListForecastExportJobsRequest class provides an interface for Forecast ListForecastExportJobs requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listForecastExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListForecastExportJobsRequest::ListForecastExportJobsRequest(const ListForecastExportJobsRequest &other)
    : ForecastRequest(new ListForecastExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListForecastExportJobsRequest object.
 */
ListForecastExportJobsRequest::ListForecastExportJobsRequest()
    : ForecastRequest(new ListForecastExportJobsRequestPrivate(ForecastRequest::ListForecastExportJobsAction, this))
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
 * \class QtAws::Forecast::ListForecastExportJobsRequestPrivate
 * \brief The ListForecastExportJobsRequestPrivate class provides private implementation for ListForecastExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListForecastExportJobsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListForecastExportJobsRequestPrivate::ListForecastExportJobsRequestPrivate(
    const ForecastRequest::Action action, ListForecastExportJobsRequest * const q)
    : ForecastRequestPrivate(action, q)
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
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
