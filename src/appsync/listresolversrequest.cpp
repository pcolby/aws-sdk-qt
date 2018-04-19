/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listresolversrequest.h"
#include "listresolversrequest_p.h"
#include "listresolversresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListResolversRequest
 * \brief The ListResolversRequest class provides an interface for AppSync ListResolvers requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listResolvers
 */

/*!
 * Constructs a copy of \a other.
 */
ListResolversRequest::ListResolversRequest(const ListResolversRequest &other)
    : AppSyncRequest(new ListResolversRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResolversRequest object.
 */
ListResolversRequest::ListResolversRequest()
    : AppSyncRequest(new ListResolversRequestPrivate(AppSyncRequest::ListResolversAction, this))
{

}

/*!
 * \reimp
 */
bool ListResolversRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResolversResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResolversRequest::response(QNetworkReply * const reply) const
{
    return new ListResolversResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::ListResolversRequestPrivate
 * \brief The ListResolversRequestPrivate class provides private implementation for ListResolversRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 *
 * Constructs a ListResolversRequestPrivate object for AppSync \a action with,
 * public implementation \a q.
 */
ListResolversRequestPrivate::ListResolversRequestPrivate(
    const AppSyncRequest::Action action, ListResolversRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResolversRequest
 * class' copy constructor.
 */
ListResolversRequestPrivate::ListResolversRequestPrivate(
    const ListResolversRequestPrivate &other, ListResolversRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
