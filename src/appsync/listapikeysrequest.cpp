// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapikeysrequest.h"
#include "listapikeysrequest_p.h"
#include "listapikeysresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListApiKeysRequest
 * \brief The ListApiKeysRequest class provides an interface for AppSync ListApiKeys requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listApiKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ListApiKeysRequest::ListApiKeysRequest(const ListApiKeysRequest &other)
    : AppSyncRequest(new ListApiKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApiKeysRequest object.
 */
ListApiKeysRequest::ListApiKeysRequest()
    : AppSyncRequest(new ListApiKeysRequestPrivate(AppSyncRequest::ListApiKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListApiKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApiKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListApiKeysResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListApiKeysRequestPrivate
 * \brief The ListApiKeysRequestPrivate class provides private implementation for ListApiKeysRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListApiKeysRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListApiKeysRequestPrivate::ListApiKeysRequestPrivate(
    const AppSyncRequest::Action action, ListApiKeysRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApiKeysRequest
 * class' copy constructor.
 */
ListApiKeysRequestPrivate::ListApiKeysRequestPrivate(
    const ListApiKeysRequestPrivate &other, ListApiKeysRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
