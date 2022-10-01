// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
