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

#include "listjobrunsrequest.h"
#include "listjobrunsrequest_p.h"
#include "listjobrunsresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListJobRunsRequest
 * \brief The ListJobRunsRequest class provides an interface for DataBrew ListJobRuns requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listJobRuns
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobRunsRequest::ListJobRunsRequest(const ListJobRunsRequest &other)
    : DataBrewRequest(new ListJobRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobRunsRequest object.
 */
ListJobRunsRequest::ListJobRunsRequest()
    : DataBrewRequest(new ListJobRunsRequestPrivate(DataBrewRequest::ListJobRunsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobRunsResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListJobRunsRequestPrivate
 * \brief The ListJobRunsRequestPrivate class provides private implementation for ListJobRunsRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListJobRunsRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListJobRunsRequestPrivate::ListJobRunsRequestPrivate(
    const DataBrewRequest::Action action, ListJobRunsRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobRunsRequest
 * class' copy constructor.
 */
ListJobRunsRequestPrivate::ListJobRunsRequestPrivate(
    const ListJobRunsRequestPrivate &other, ListJobRunsRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
