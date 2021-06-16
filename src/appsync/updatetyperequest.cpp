/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
