// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "flushapicacherequest.h"
#include "flushapicacherequest_p.h"
#include "flushapicacheresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::FlushApiCacheRequest
 * \brief The FlushApiCacheRequest class provides an interface for AppSync FlushApiCache requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::flushApiCache
 */

/*!
 * Constructs a copy of \a other.
 */
FlushApiCacheRequest::FlushApiCacheRequest(const FlushApiCacheRequest &other)
    : AppSyncRequest(new FlushApiCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FlushApiCacheRequest object.
 */
FlushApiCacheRequest::FlushApiCacheRequest()
    : AppSyncRequest(new FlushApiCacheRequestPrivate(AppSyncRequest::FlushApiCacheAction, this))
{

}

/*!
 * \reimp
 */
bool FlushApiCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FlushApiCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FlushApiCacheRequest::response(QNetworkReply * const reply) const
{
    return new FlushApiCacheResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::FlushApiCacheRequestPrivate
 * \brief The FlushApiCacheRequestPrivate class provides private implementation for FlushApiCacheRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a FlushApiCacheRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
FlushApiCacheRequestPrivate::FlushApiCacheRequestPrivate(
    const AppSyncRequest::Action action, FlushApiCacheRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FlushApiCacheRequest
 * class' copy constructor.
 */
FlushApiCacheRequestPrivate::FlushApiCacheRequestPrivate(
    const FlushApiCacheRequestPrivate &other, FlushApiCacheRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
