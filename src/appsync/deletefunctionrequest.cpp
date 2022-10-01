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
