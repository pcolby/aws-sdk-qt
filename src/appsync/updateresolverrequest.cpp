// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresolverrequest.h"
#include "updateresolverrequest_p.h"
#include "updateresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateResolverRequest
 * \brief The UpdateResolverRequest class provides an interface for AppSync UpdateResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateResolver
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateResolverRequest::UpdateResolverRequest(const UpdateResolverRequest &other)
    : AppSyncRequest(new UpdateResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateResolverRequest object.
 */
UpdateResolverRequest::UpdateResolverRequest()
    : AppSyncRequest(new UpdateResolverRequestPrivate(AppSyncRequest::UpdateResolverAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateResolverRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateResolverRequestPrivate
 * \brief The UpdateResolverRequestPrivate class provides private implementation for UpdateResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateResolverRequestPrivate::UpdateResolverRequestPrivate(
    const AppSyncRequest::Action action, UpdateResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateResolverRequest
 * class' copy constructor.
 */
UpdateResolverRequestPrivate::UpdateResolverRequestPrivate(
    const UpdateResolverRequestPrivate &other, UpdateResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
