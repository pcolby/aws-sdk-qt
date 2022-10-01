// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgraphqlapisrequest.h"
#include "listgraphqlapisrequest_p.h"
#include "listgraphqlapisresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListGraphqlApisRequest
 * \brief The ListGraphqlApisRequest class provides an interface for AppSync ListGraphqlApis requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listGraphqlApis
 */

/*!
 * Constructs a copy of \a other.
 */
ListGraphqlApisRequest::ListGraphqlApisRequest(const ListGraphqlApisRequest &other)
    : AppSyncRequest(new ListGraphqlApisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGraphqlApisRequest object.
 */
ListGraphqlApisRequest::ListGraphqlApisRequest()
    : AppSyncRequest(new ListGraphqlApisRequestPrivate(AppSyncRequest::ListGraphqlApisAction, this))
{

}

/*!
 * \reimp
 */
bool ListGraphqlApisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGraphqlApisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGraphqlApisRequest::response(QNetworkReply * const reply) const
{
    return new ListGraphqlApisResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListGraphqlApisRequestPrivate
 * \brief The ListGraphqlApisRequestPrivate class provides private implementation for ListGraphqlApisRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListGraphqlApisRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListGraphqlApisRequestPrivate::ListGraphqlApisRequestPrivate(
    const AppSyncRequest::Action action, ListGraphqlApisRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGraphqlApisRequest
 * class' copy constructor.
 */
ListGraphqlApisRequestPrivate::ListGraphqlApisRequestPrivate(
    const ListGraphqlApisRequestPrivate &other, ListGraphqlApisRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
