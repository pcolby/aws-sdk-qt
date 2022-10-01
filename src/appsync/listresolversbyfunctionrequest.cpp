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
