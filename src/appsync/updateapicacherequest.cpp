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

#include "updateapicacherequest.h"
#include "updateapicacherequest_p.h"
#include "updateapicacheresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateApiCacheRequest
 * \brief The UpdateApiCacheRequest class provides an interface for AppSync UpdateApiCache requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateApiCache
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiCacheRequest::UpdateApiCacheRequest(const UpdateApiCacheRequest &other)
    : AppSyncRequest(new UpdateApiCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiCacheRequest object.
 */
UpdateApiCacheRequest::UpdateApiCacheRequest()
    : AppSyncRequest(new UpdateApiCacheRequestPrivate(AppSyncRequest::UpdateApiCacheAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiCacheRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiCacheResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateApiCacheRequestPrivate
 * \brief The UpdateApiCacheRequestPrivate class provides private implementation for UpdateApiCacheRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateApiCacheRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateApiCacheRequestPrivate::UpdateApiCacheRequestPrivate(
    const AppSyncRequest::Action action, UpdateApiCacheRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiCacheRequest
 * class' copy constructor.
 */
UpdateApiCacheRequestPrivate::UpdateApiCacheRequestPrivate(
    const UpdateApiCacheRequestPrivate &other, UpdateApiCacheRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
