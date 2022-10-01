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

#include "createapicacherequest.h"
#include "createapicacherequest_p.h"
#include "createapicacheresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateApiCacheRequest
 * \brief The CreateApiCacheRequest class provides an interface for AppSync CreateApiCache requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createApiCache
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApiCacheRequest::CreateApiCacheRequest(const CreateApiCacheRequest &other)
    : AppSyncRequest(new CreateApiCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApiCacheRequest object.
 */
CreateApiCacheRequest::CreateApiCacheRequest()
    : AppSyncRequest(new CreateApiCacheRequestPrivate(AppSyncRequest::CreateApiCacheAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApiCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApiCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApiCacheRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiCacheResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateApiCacheRequestPrivate
 * \brief The CreateApiCacheRequestPrivate class provides private implementation for CreateApiCacheRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateApiCacheRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateApiCacheRequestPrivate::CreateApiCacheRequestPrivate(
    const AppSyncRequest::Action action, CreateApiCacheRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApiCacheRequest
 * class' copy constructor.
 */
CreateApiCacheRequestPrivate::CreateApiCacheRequestPrivate(
    const CreateApiCacheRequestPrivate &other, CreateApiCacheRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
