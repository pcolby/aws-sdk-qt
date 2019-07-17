/*
    Copyright 2013-2019 Paul Colby

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
