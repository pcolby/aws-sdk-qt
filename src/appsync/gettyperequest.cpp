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

#include "gettyperequest.h"
#include "gettyperequest_p.h"
#include "gettyperesponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetTypeRequest
 * \brief The GetTypeRequest class provides an interface for AppSync GetType requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getType
 */

/*!
 * Constructs a copy of \a other.
 */
GetTypeRequest::GetTypeRequest(const GetTypeRequest &other)
    : AppSyncRequest(new GetTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTypeRequest object.
 */
GetTypeRequest::GetTypeRequest()
    : AppSyncRequest(new GetTypeRequestPrivate(AppSyncRequest::GetTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetTypeResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetTypeRequestPrivate
 * \brief The GetTypeRequestPrivate class provides private implementation for GetTypeRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetTypeRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetTypeRequestPrivate::GetTypeRequestPrivate(
    const AppSyncRequest::Action action, GetTypeRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTypeRequest
 * class' copy constructor.
 */
GetTypeRequestPrivate::GetTypeRequestPrivate(
    const GetTypeRequestPrivate &other, GetTypeRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
