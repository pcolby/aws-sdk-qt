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
