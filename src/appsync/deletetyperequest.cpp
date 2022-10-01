// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetyperequest.h"
#include "deletetyperequest_p.h"
#include "deletetyperesponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteTypeRequest
 * \brief The DeleteTypeRequest class provides an interface for AppSync DeleteType requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTypeRequest::DeleteTypeRequest(const DeleteTypeRequest &other)
    : AppSyncRequest(new DeleteTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTypeRequest object.
 */
DeleteTypeRequest::DeleteTypeRequest()
    : AppSyncRequest(new DeleteTypeRequestPrivate(AppSyncRequest::DeleteTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTypeResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteTypeRequestPrivate
 * \brief The DeleteTypeRequestPrivate class provides private implementation for DeleteTypeRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteTypeRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteTypeRequestPrivate::DeleteTypeRequestPrivate(
    const AppSyncRequest::Action action, DeleteTypeRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTypeRequest
 * class' copy constructor.
 */
DeleteTypeRequestPrivate::DeleteTypeRequestPrivate(
    const DeleteTypeRequestPrivate &other, DeleteTypeRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
