// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefunctionrequest.h"
#include "deletefunctionrequest_p.h"
#include "deletefunctionresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteFunctionRequest
 * \brief The DeleteFunctionRequest class provides an interface for AppSync DeleteFunction requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteFunction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFunctionRequest::DeleteFunctionRequest(const DeleteFunctionRequest &other)
    : AppSyncRequest(new DeleteFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFunctionRequest object.
 */
DeleteFunctionRequest::DeleteFunctionRequest()
    : AppSyncRequest(new DeleteFunctionRequestPrivate(AppSyncRequest::DeleteFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFunctionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteFunctionRequestPrivate
 * \brief The DeleteFunctionRequestPrivate class provides private implementation for DeleteFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteFunctionRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteFunctionRequestPrivate::DeleteFunctionRequestPrivate(
    const AppSyncRequest::Action action, DeleteFunctionRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionRequest
 * class' copy constructor.
 */
DeleteFunctionRequestPrivate::DeleteFunctionRequestPrivate(
    const DeleteFunctionRequestPrivate &other, DeleteFunctionRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
