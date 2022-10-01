// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresolversbyfunctionrequest.h"
#include "listresolversbyfunctionrequest_p.h"
#include "listresolversbyfunctionresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListResolversByFunctionRequest
 * \brief The ListResolversByFunctionRequest class provides an interface for AppSync ListResolversByFunction requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listResolversByFunction
 */

/*!
 * Constructs a copy of \a other.
 */
ListResolversByFunctionRequest::ListResolversByFunctionRequest(const ListResolversByFunctionRequest &other)
    : AppSyncRequest(new ListResolversByFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResolversByFunctionRequest object.
 */
ListResolversByFunctionRequest::ListResolversByFunctionRequest()
    : AppSyncRequest(new ListResolversByFunctionRequestPrivate(AppSyncRequest::ListResolversByFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool ListResolversByFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResolversByFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResolversByFunctionRequest::response(QNetworkReply * const reply) const
{
    return new ListResolversByFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListResolversByFunctionRequestPrivate
 * \brief The ListResolversByFunctionRequestPrivate class provides private implementation for ListResolversByFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListResolversByFunctionRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListResolversByFunctionRequestPrivate::ListResolversByFunctionRequestPrivate(
    const AppSyncRequest::Action action, ListResolversByFunctionRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResolversByFunctionRequest
 * class' copy constructor.
 */
ListResolversByFunctionRequestPrivate::ListResolversByFunctionRequestPrivate(
    const ListResolversByFunctionRequestPrivate &other, ListResolversByFunctionRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
