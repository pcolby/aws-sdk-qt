// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemacreationstatusrequest.h"
#include "getschemacreationstatusrequest_p.h"
#include "getschemacreationstatusresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusRequest
 * \brief The GetSchemaCreationStatusRequest class provides an interface for AppSync GetSchemaCreationStatus requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getSchemaCreationStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest(const GetSchemaCreationStatusRequest &other)
    : AppSyncRequest(new GetSchemaCreationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaCreationStatusRequest object.
 */
GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest()
    : AppSyncRequest(new GetSchemaCreationStatusRequestPrivate(AppSyncRequest::GetSchemaCreationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaCreationStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaCreationStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaCreationStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaCreationStatusResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusRequestPrivate
 * \brief The GetSchemaCreationStatusRequestPrivate class provides private implementation for GetSchemaCreationStatusRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetSchemaCreationStatusRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetSchemaCreationStatusRequestPrivate::GetSchemaCreationStatusRequestPrivate(
    const AppSyncRequest::Action action, GetSchemaCreationStatusRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaCreationStatusRequest
 * class' copy constructor.
 */
GetSchemaCreationStatusRequestPrivate::GetSchemaCreationStatusRequestPrivate(
    const GetSchemaCreationStatusRequestPrivate &other, GetSchemaCreationStatusRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
