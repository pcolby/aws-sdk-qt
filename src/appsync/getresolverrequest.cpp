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

#include "getresolverrequest.h"
#include "getresolverrequest_p.h"
#include "getresolverresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetResolverRequest
 * \brief The GetResolverRequest class provides an interface for AppSync GetResolver requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getResolver
 */

/*!
 * Constructs a copy of \a other.
 */
GetResolverRequest::GetResolverRequest(const GetResolverRequest &other)
    : AppSyncRequest(new GetResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResolverRequest object.
 */
GetResolverRequest::GetResolverRequest()
    : AppSyncRequest(new GetResolverRequestPrivate(AppSyncRequest::GetResolverAction, this))
{

}

/*!
 * \reimp
 */
bool GetResolverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResolverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResolverRequest::response(QNetworkReply * const reply) const
{
    return new GetResolverResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetResolverRequestPrivate
 * \brief The GetResolverRequestPrivate class provides private implementation for GetResolverRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetResolverRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetResolverRequestPrivate::GetResolverRequestPrivate(
    const AppSyncRequest::Action action, GetResolverRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResolverRequest
 * class' copy constructor.
 */
GetResolverRequestPrivate::GetResolverRequestPrivate(
    const GetResolverRequestPrivate &other, GetResolverRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
