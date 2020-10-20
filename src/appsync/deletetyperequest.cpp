/*
    Copyright 2013-2020 Paul Colby

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
