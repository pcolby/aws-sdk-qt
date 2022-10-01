// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresolverrequest.h"
#include "getresolverrequest_p.h"
#include "getresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetResolverRequest
 * \brief The GetResolverRequest class provides an interface for AppSync GetResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getResolver
 */

/*!
 * Constructs a copy of \a other.
 */
GetResolverRequest::GetResolverRequest(const GetResolverRequest &other)
    : AppSyncRequest(new GetResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResolverRequest object.
 */
GetResolverRequest::GetResolverRequest()
    : AppSyncRequest(new GetResolverRequestPrivate(AppSyncRequest::GetResolverAction, this))
{

}

/*!
 * \reimp
 */
bool GetResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResolverRequest::response(QNetworkReply * const reply) const
{
    return new GetResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetResolverRequestPrivate
 * \brief The GetResolverRequestPrivate class provides private implementation for GetResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetResolverRequestPrivate::GetResolverRequestPrivate(
    const AppSyncRequest::Action action, GetResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResolverRequest
 * class' copy constructor.
 */
GetResolverRequestPrivate::GetResolverRequestPrivate(
    const GetResolverRequestPrivate &other, GetResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
