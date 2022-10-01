// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefunctionrequest.h"
#include "updatefunctionrequest_p.h"
#include "updatefunctionresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateFunctionRequest
 * \brief The UpdateFunctionRequest class provides an interface for AppSync UpdateFunction requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateFunction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFunctionRequest::UpdateFunctionRequest(const UpdateFunctionRequest &other)
    : AppSyncRequest(new UpdateFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFunctionRequest object.
 */
UpdateFunctionRequest::UpdateFunctionRequest()
    : AppSyncRequest(new UpdateFunctionRequestPrivate(AppSyncRequest::UpdateFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFunctionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateFunctionRequestPrivate
 * \brief The UpdateFunctionRequestPrivate class provides private implementation for UpdateFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateFunctionRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateFunctionRequestPrivate::UpdateFunctionRequestPrivate(
    const AppSyncRequest::Action action, UpdateFunctionRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionRequest
 * class' copy constructor.
 */
UpdateFunctionRequestPrivate::UpdateFunctionRequestPrivate(
    const UpdateFunctionRequestPrivate &other, UpdateFunctionRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
