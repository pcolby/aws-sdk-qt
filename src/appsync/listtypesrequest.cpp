// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtypesrequest.h"
#include "listtypesrequest_p.h"
#include "listtypesresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListTypesRequest
 * \brief The ListTypesRequest class provides an interface for AppSync ListTypes requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListTypesRequest::ListTypesRequest(const ListTypesRequest &other)
    : AppSyncRequest(new ListTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTypesRequest object.
 */
ListTypesRequest::ListTypesRequest()
    : AppSyncRequest(new ListTypesRequestPrivate(AppSyncRequest::ListTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListTypesRequestPrivate
 * \brief The ListTypesRequestPrivate class provides private implementation for ListTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListTypesRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListTypesRequestPrivate::ListTypesRequestPrivate(
    const AppSyncRequest::Action action, ListTypesRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTypesRequest
 * class' copy constructor.
 */
ListTypesRequestPrivate::ListTypesRequestPrivate(
    const ListTypesRequestPrivate &other, ListTypesRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
