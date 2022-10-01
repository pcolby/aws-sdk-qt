// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainnamesrequest.h"
#include "listdomainnamesrequest_p.h"
#include "listdomainnamesresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListDomainNamesRequest
 * \brief The ListDomainNamesRequest class provides an interface for AppSync ListDomainNames requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listDomainNames
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainNamesRequest::ListDomainNamesRequest(const ListDomainNamesRequest &other)
    : AppSyncRequest(new ListDomainNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainNamesRequest object.
 */
ListDomainNamesRequest::ListDomainNamesRequest()
    : AppSyncRequest(new ListDomainNamesRequestPrivate(AppSyncRequest::ListDomainNamesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainNamesRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainNamesResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListDomainNamesRequestPrivate
 * \brief The ListDomainNamesRequestPrivate class provides private implementation for ListDomainNamesRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListDomainNamesRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
ListDomainNamesRequestPrivate::ListDomainNamesRequestPrivate(
    const AppSyncRequest::Action action, ListDomainNamesRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainNamesRequest
 * class' copy constructor.
 */
ListDomainNamesRequestPrivate::ListDomainNamesRequestPrivate(
    const ListDomainNamesRequestPrivate &other, ListDomainNamesRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
