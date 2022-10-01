// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategraphqlapirequest.h"
#include "updategraphqlapirequest_p.h"
#include "updategraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiRequest
 * \brief The UpdateGraphqlApiRequest class provides an interface for AppSync UpdateGraphqlApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateGraphqlApi
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGraphqlApiRequest::UpdateGraphqlApiRequest(const UpdateGraphqlApiRequest &other)
    : AppSyncRequest(new UpdateGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGraphqlApiRequest object.
 */
UpdateGraphqlApiRequest::UpdateGraphqlApiRequest()
    : AppSyncRequest(new UpdateGraphqlApiRequestPrivate(AppSyncRequest::UpdateGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGraphqlApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGraphqlApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiRequestPrivate
 * \brief The UpdateGraphqlApiRequestPrivate class provides private implementation for UpdateGraphqlApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateGraphqlApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateGraphqlApiRequestPrivate::UpdateGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, UpdateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGraphqlApiRequest
 * class' copy constructor.
 */
UpdateGraphqlApiRequestPrivate::UpdateGraphqlApiRequestPrivate(
    const UpdateGraphqlApiRequestPrivate &other, UpdateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
