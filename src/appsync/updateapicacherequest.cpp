// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
