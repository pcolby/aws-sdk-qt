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
