// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
