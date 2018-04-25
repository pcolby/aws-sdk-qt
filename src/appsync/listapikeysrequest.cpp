/*
    Copyright 2013-2018 Paul Colby

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
