// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateapirequest.h"
#include "associateapirequest_p.h"
#include "associateapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::AssociateApiRequest
 * \brief The AssociateApiRequest class provides an interface for AppSync AssociateApi requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::associateApi
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateApiRequest::AssociateApiRequest(const AssociateApiRequest &other)
    : AppSyncRequest(new AssociateApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateApiRequest object.
 */
AssociateApiRequest::AssociateApiRequest()
    : AppSyncRequest(new AssociateApiRequestPrivate(AppSyncRequest::AssociateApiAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateApiRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateApiResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateApiRequest::response(QNetworkReply * const reply) const
{
    return new AssociateApiResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::AssociateApiRequestPrivate
 * \brief The AssociateApiRequestPrivate class provides private implementation for AssociateApiRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AssociateApiRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
AssociateApiRequestPrivate::AssociateApiRequestPrivate(
    const AppSyncRequest::Action action, AssociateApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateApiRequest
 * class' copy constructor.
 */
AssociateApiRequestPrivate::AssociateApiRequestPrivate(
    const AssociateApiRequestPrivate &other, AssociateApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
