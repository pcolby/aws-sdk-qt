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

#include "listdatasourcesyncjobsrequest.h"
#include "listdatasourcesyncjobsrequest_p.h"
#include "listdatasourcesyncjobsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::ListDataSourceSyncJobsRequest
 * \brief The ListDataSourceSyncJobsRequest class provides an interface for kendra ListDataSourceSyncJobs requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::listDataSourceSyncJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourceSyncJobsRequest::ListDataSourceSyncJobsRequest(const ListDataSourceSyncJobsRequest &other)
    : kendraRequest(new ListDataSourceSyncJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourceSyncJobsRequest object.
 */
ListDataSourceSyncJobsRequest::ListDataSourceSyncJobsRequest()
    : kendraRequest(new ListDataSourceSyncJobsRequestPrivate(kendraRequest::ListDataSourceSyncJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourceSyncJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSourceSyncJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourceSyncJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourceSyncJobsResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::ListDataSourceSyncJobsRequestPrivate
 * \brief The ListDataSourceSyncJobsRequestPrivate class provides private implementation for ListDataSourceSyncJobsRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a ListDataSourceSyncJobsRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
ListDataSourceSyncJobsRequestPrivate::ListDataSourceSyncJobsRequestPrivate(
    const kendraRequest::Action action, ListDataSourceSyncJobsRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourceSyncJobsRequest
 * class' copy constructor.
 */
ListDataSourceSyncJobsRequestPrivate::ListDataSourceSyncJobsRequestPrivate(
    const ListDataSourceSyncJobsRequestPrivate &other, ListDataSourceSyncJobsRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
