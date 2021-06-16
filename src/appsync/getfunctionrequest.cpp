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

#include "getfunctionrequest.h"
#include "getfunctionrequest_p.h"
#include "getfunctionresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetFunctionRequest
 * \brief The GetFunctionRequest class provides an interface for AppSync GetFunction requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getFunction
 */

/*!
 * Constructs a copy of \a other.
 */
GetFunctionRequest::GetFunctionRequest(const GetFunctionRequest &other)
    : AppSyncRequest(new GetFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFunctionRequest object.
 */
GetFunctionRequest::GetFunctionRequest()
    : AppSyncRequest(new GetFunctionRequestPrivate(AppSyncRequest::GetFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetFunctionRequestPrivate
 * \brief The GetFunctionRequestPrivate class provides private implementation for GetFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetFunctionRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetFunctionRequestPrivate::GetFunctionRequestPrivate(
    const AppSyncRequest::Action action, GetFunctionRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionRequest
 * class' copy constructor.
 */
GetFunctionRequestPrivate::GetFunctionRequestPrivate(
    const GetFunctionRequestPrivate &other, GetFunctionRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
