// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapicacherequest.h"
#include "getapicacherequest_p.h"
#include "getapicacheresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetApiCacheRequest
 * \brief The GetApiCacheRequest class provides an interface for AppSync GetApiCache requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getApiCache
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiCacheRequest::GetApiCacheRequest(const GetApiCacheRequest &other)
    : AppSyncRequest(new GetApiCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiCacheRequest object.
 */
GetApiCacheRequest::GetApiCacheRequest()
    : AppSyncRequest(new GetApiCacheRequestPrivate(AppSyncRequest::GetApiCacheAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiCacheRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiCacheResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiCacheRequest::response(QNetworkReply * const reply) const
{
    return new GetApiCacheResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetApiCacheRequestPrivate
 * \brief The GetApiCacheRequestPrivate class provides private implementation for GetApiCacheRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetApiCacheRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetApiCacheRequestPrivate::GetApiCacheRequestPrivate(
    const AppSyncRequest::Action action, GetApiCacheRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiCacheRequest
 * class' copy constructor.
 */
GetApiCacheRequestPrivate::GetApiCacheRequestPrivate(
    const GetApiCacheRequestPrivate &other, GetApiCacheRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
