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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
