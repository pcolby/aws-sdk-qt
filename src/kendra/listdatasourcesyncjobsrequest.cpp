// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasourcesyncjobsrequest.h"
#include "listdatasourcesyncjobsrequest_p.h"
#include "listdatasourcesyncjobsresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListDataSourceSyncJobsRequest
 * \brief The ListDataSourceSyncJobsRequest class provides an interface for Kendra ListDataSourceSyncJobs requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listDataSourceSyncJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourceSyncJobsRequest::ListDataSourceSyncJobsRequest(const ListDataSourceSyncJobsRequest &other)
    : KendraRequest(new ListDataSourceSyncJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourceSyncJobsRequest object.
 */
ListDataSourceSyncJobsRequest::ListDataSourceSyncJobsRequest()
    : KendraRequest(new ListDataSourceSyncJobsRequestPrivate(KendraRequest::ListDataSourceSyncJobsAction, this))
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
 * \class QtAws::Kendra::ListDataSourceSyncJobsRequestPrivate
 * \brief The ListDataSourceSyncJobsRequestPrivate class provides private implementation for ListDataSourceSyncJobsRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListDataSourceSyncJobsRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListDataSourceSyncJobsRequestPrivate::ListDataSourceSyncJobsRequestPrivate(
    const KendraRequest::Action action, ListDataSourceSyncJobsRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
