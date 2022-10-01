// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
