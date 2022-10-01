// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetgroupsrequest.h"
#include "listdatasetgroupsrequest_p.h"
#include "listdatasetgroupsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListDatasetGroupsRequest
 * \brief The ListDatasetGroupsRequest class provides an interface for Forecast ListDatasetGroups requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listDatasetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetGroupsRequest::ListDatasetGroupsRequest(const ListDatasetGroupsRequest &other)
    : ForecastRequest(new ListDatasetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetGroupsRequest object.
 */
ListDatasetGroupsRequest::ListDatasetGroupsRequest()
    : ForecastRequest(new ListDatasetGroupsRequestPrivate(ForecastRequest::ListDatasetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListDatasetGroupsRequestPrivate
 * \brief The ListDatasetGroupsRequestPrivate class provides private implementation for ListDatasetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListDatasetGroupsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListDatasetGroupsRequestPrivate::ListDatasetGroupsRequestPrivate(
    const ForecastRequest::Action action, ListDatasetGroupsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetGroupsRequest
 * class' copy constructor.
 */
ListDatasetGroupsRequestPrivate::ListDatasetGroupsRequestPrivate(
    const ListDatasetGroupsRequestPrivate &other, ListDatasetGroupsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
