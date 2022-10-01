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

#include "listschedulesrequest.h"
#include "listschedulesrequest_p.h"
#include "listschedulesresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListSchedulesRequest
 * \brief The ListSchedulesRequest class provides an interface for DataBrew ListSchedules requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listSchedules
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchedulesRequest::ListSchedulesRequest(const ListSchedulesRequest &other)
    : DataBrewRequest(new ListSchedulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchedulesRequest object.
 */
ListSchedulesRequest::ListSchedulesRequest()
    : DataBrewRequest(new ListSchedulesRequestPrivate(DataBrewRequest::ListSchedulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchedulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchedulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchedulesRequest::response(QNetworkReply * const reply) const
{
    return new ListSchedulesResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListSchedulesRequestPrivate
 * \brief The ListSchedulesRequestPrivate class provides private implementation for ListSchedulesRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListSchedulesRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListSchedulesRequestPrivate::ListSchedulesRequestPrivate(
    const DataBrewRequest::Action action, ListSchedulesRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchedulesRequest
 * class' copy constructor.
 */
ListSchedulesRequestPrivate::ListSchedulesRequestPrivate(
    const ListSchedulesRequestPrivate &other, ListSchedulesRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
