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

#include "deleteresolverrequest.h"
#include "deleteresolverrequest_p.h"
#include "deleteresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteResolverRequest
 * \brief The DeleteResolverRequest class provides an interface for AppSync DeleteResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteResolver
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResolverRequest::DeleteResolverRequest(const DeleteResolverRequest &other)
    : AppSyncRequest(new DeleteResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResolverRequest object.
 */
DeleteResolverRequest::DeleteResolverRequest()
    : AppSyncRequest(new DeleteResolverRequestPrivate(AppSyncRequest::DeleteResolverAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResolverRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteResolverRequestPrivate
 * \brief The DeleteResolverRequestPrivate class provides private implementation for DeleteResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteResolverRequestPrivate::DeleteResolverRequestPrivate(
    const AppSyncRequest::Action action, DeleteResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResolverRequest
 * class' copy constructor.
 */
DeleteResolverRequestPrivate::DeleteResolverRequestPrivate(
    const DeleteResolverRequestPrivate &other, DeleteResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
