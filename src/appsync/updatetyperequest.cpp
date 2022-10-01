// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetyperequest.h"
#include "updatetyperequest_p.h"
#include "updatetyperesponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateTypeRequest
 * \brief The UpdateTypeRequest class provides an interface for AppSync UpdateType requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateType
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTypeRequest::UpdateTypeRequest(const UpdateTypeRequest &other)
    : AppSyncRequest(new UpdateTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTypeRequest object.
 */
UpdateTypeRequest::UpdateTypeRequest()
    : AppSyncRequest(new UpdateTypeRequestPrivate(AppSyncRequest::UpdateTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTypeResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateTypeRequestPrivate
 * \brief The UpdateTypeRequestPrivate class provides private implementation for UpdateTypeRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateTypeRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateTypeRequestPrivate::UpdateTypeRequestPrivate(
    const AppSyncRequest::Action action, UpdateTypeRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTypeRequest
 * class' copy constructor.
 */
UpdateTypeRequestPrivate::UpdateTypeRequestPrivate(
    const UpdateTypeRequestPrivate &other, UpdateTypeRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
