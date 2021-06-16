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

#include "getintrospectionschemarequest.h"
#include "getintrospectionschemarequest_p.h"
#include "getintrospectionschemaresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetIntrospectionSchemaRequest
 * \brief The GetIntrospectionSchemaRequest class provides an interface for AppSync GetIntrospectionSchema requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getIntrospectionSchema
 */

/*!
 * Constructs a copy of \a other.
 */
GetIntrospectionSchemaRequest::GetIntrospectionSchemaRequest(const GetIntrospectionSchemaRequest &other)
    : AppSyncRequest(new GetIntrospectionSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIntrospectionSchemaRequest object.
 */
GetIntrospectionSchemaRequest::GetIntrospectionSchemaRequest()
    : AppSyncRequest(new GetIntrospectionSchemaRequestPrivate(AppSyncRequest::GetIntrospectionSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool GetIntrospectionSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIntrospectionSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntrospectionSchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetIntrospectionSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetIntrospectionSchemaRequestPrivate
 * \brief The GetIntrospectionSchemaRequestPrivate class provides private implementation for GetIntrospectionSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetIntrospectionSchemaRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetIntrospectionSchemaRequestPrivate::GetIntrospectionSchemaRequestPrivate(
    const AppSyncRequest::Action action, GetIntrospectionSchemaRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIntrospectionSchemaRequest
 * class' copy constructor.
 */
GetIntrospectionSchemaRequestPrivate::GetIntrospectionSchemaRequestPrivate(
    const GetIntrospectionSchemaRequestPrivate &other, GetIntrospectionSchemaRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
