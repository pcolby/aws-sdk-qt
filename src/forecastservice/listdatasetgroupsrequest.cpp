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

#include "listdatasetgroupsrequest.h"
#include "listdatasetgroupsrequest_p.h"
#include "listdatasetgroupsresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ListDatasetGroupsRequest
 * \brief The ListDatasetGroupsRequest class provides an interface for ForecastService ListDatasetGroups requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::listDatasetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetGroupsRequest::ListDatasetGroupsRequest(const ListDatasetGroupsRequest &other)
    : ForecastServiceRequest(new ListDatasetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetGroupsRequest object.
 */
ListDatasetGroupsRequest::ListDatasetGroupsRequest()
    : ForecastServiceRequest(new ListDatasetGroupsRequestPrivate(ForecastServiceRequest::ListDatasetGroupsAction, this))
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
 * \class QtAws::ForecastService::ListDatasetGroupsRequestPrivate
 * \brief The ListDatasetGroupsRequestPrivate class provides private implementation for ListDatasetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ListDatasetGroupsRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
ListDatasetGroupsRequestPrivate::ListDatasetGroupsRequestPrivate(
    const ForecastServiceRequest::Action action, ListDatasetGroupsRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
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
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
