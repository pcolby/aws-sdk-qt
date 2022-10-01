// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasourcesrequest.h"
#include "listdatasourcesrequest_p.h"
#include "listdatasourcesresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListDataSourcesRequest
 * \brief The ListDataSourcesRequest class provides an interface for AppSync ListDataSources requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listDataSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourcesRequest::ListDataSourcesRequest(const ListDataSourcesRequest &other)
    : AppSyncRequest(new ListDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourcesRequest object.
 */
ListDataSourcesRequest::ListDataSourcesRequest()
    : AppSyncRequest(new ListDataSourcesRequestPrivate(AppSyncRequest::ListDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListDataSourcesRequestPrivate
 * \brief The ListDataSourcesRequestPrivate class provides private implementation for ListDataSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListDataSourcesRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const AppSyncRequest::Action action, ListDataSourcesRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourcesRequest
 * class' copy constructor.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const ListDataSourcesRequestPrivate &other, ListDataSourcesRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
