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
