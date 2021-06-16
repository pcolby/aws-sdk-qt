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

#include "deleteapicacherequest.h"
#include "deleteapicacherequest_p.h"
#include "deleteapicacheresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteApiCacheRequest
 * \brief The DeleteApiCacheRequest class provides an interface for AppSync DeleteApiCache requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteApiCache
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiCacheRequest::DeleteApiCacheRequest(const DeleteApiCacheRequest &other)
    : AppSyncRequest(new DeleteApiCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiCacheRequest object.
 */
DeleteApiCacheRequest::DeleteApiCacheRequest()
    : AppSyncRequest(new DeleteApiCacheRequestPrivate(AppSyncRequest::DeleteApiCacheAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiCacheRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiCacheResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteApiCacheRequestPrivate
 * \brief The DeleteApiCacheRequestPrivate class provides private implementation for DeleteApiCacheRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteApiCacheRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteApiCacheRequestPrivate::DeleteApiCacheRequestPrivate(
    const AppSyncRequest::Action action, DeleteApiCacheRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiCacheRequest
 * class' copy constructor.
 */
DeleteApiCacheRequestPrivate::DeleteApiCacheRequestPrivate(
    const DeleteApiCacheRequestPrivate &other, DeleteApiCacheRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
