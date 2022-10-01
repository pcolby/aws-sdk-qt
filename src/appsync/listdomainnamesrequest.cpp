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
