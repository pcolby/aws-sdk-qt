// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
