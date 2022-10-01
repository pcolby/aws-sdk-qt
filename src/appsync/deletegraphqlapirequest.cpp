// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegraphqlapirequest.h"
#include "deletegraphqlapirequest_p.h"
#include "deletegraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiRequest
 * \brief The DeleteGraphqlApiRequest class provides an interface for AppSync DeleteGraphqlApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteGraphqlApi
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGraphqlApiRequest::DeleteGraphqlApiRequest(const DeleteGraphqlApiRequest &other)
    : AppSyncRequest(new DeleteGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGraphqlApiRequest object.
 */
DeleteGraphqlApiRequest::DeleteGraphqlApiRequest()
    : AppSyncRequest(new DeleteGraphqlApiRequestPrivate(AppSyncRequest::DeleteGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGraphqlApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGraphqlApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteGraphqlApiRequestPrivate
 * \brief The DeleteGraphqlApiRequestPrivate class provides private implementation for DeleteGraphqlApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteGraphqlApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteGraphqlApiRequestPrivate::DeleteGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, DeleteGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGraphqlApiRequest
 * class' copy constructor.
 */
DeleteGraphqlApiRequestPrivate::DeleteGraphqlApiRequestPrivate(
    const DeleteGraphqlApiRequestPrivate &other, DeleteGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
