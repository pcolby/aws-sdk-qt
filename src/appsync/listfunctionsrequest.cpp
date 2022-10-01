// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctionsrequest.h"
#include "listfunctionsrequest_p.h"
#include "listfunctionsresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListFunctionsRequest
 * \brief The ListFunctionsRequest class provides an interface for AppSync ListFunctions requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listFunctions
 */

/*!
 * Constructs a copy of \a other.
 */
ListFunctionsRequest::ListFunctionsRequest(const ListFunctionsRequest &other)
    : AppSyncRequest(new ListFunctionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFunctionsRequest object.
 */
ListFunctionsRequest::ListFunctionsRequest()
    : AppSyncRequest(new ListFunctionsRequestPrivate(AppSyncRequest::ListFunctionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFunctionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFunctionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionsResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListFunctionsRequestPrivate
 * \brief The ListFunctionsRequestPrivate class provides private implementation for ListFunctionsRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListFunctionsRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const AppSyncRequest::Action action, ListFunctionsRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionsRequest
 * class' copy constructor.
 */
ListFunctionsRequestPrivate::ListFunctionsRequestPrivate(
    const ListFunctionsRequestPrivate &other, ListFunctionsRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
