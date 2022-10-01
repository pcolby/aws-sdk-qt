// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
