/*
    Copyright 2013-2018 Paul Colby

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
