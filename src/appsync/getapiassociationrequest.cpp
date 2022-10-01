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

#include "getapiassociationrequest.h"
#include "getapiassociationrequest_p.h"
#include "getapiassociationresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetApiAssociationRequest
 * \brief The GetApiAssociationRequest class provides an interface for AppSync GetApiAssociation requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getApiAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
GetApiAssociationRequest::GetApiAssociationRequest(const GetApiAssociationRequest &other)
    : AppSyncRequest(new GetApiAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApiAssociationRequest object.
 */
GetApiAssociationRequest::GetApiAssociationRequest()
    : AppSyncRequest(new GetApiAssociationRequestPrivate(AppSyncRequest::GetApiAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool GetApiAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApiAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiAssociationRequest::response(QNetworkReply * const reply) const
{
    return new GetApiAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::GetApiAssociationRequestPrivate
 * \brief The GetApiAssociationRequestPrivate class provides private implementation for GetApiAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetApiAssociationRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
GetApiAssociationRequestPrivate::GetApiAssociationRequestPrivate(
    const AppSyncRequest::Action action, GetApiAssociationRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApiAssociationRequest
 * class' copy constructor.
 */
GetApiAssociationRequestPrivate::GetApiAssociationRequestPrivate(
    const GetApiAssociationRequestPrivate &other, GetApiAssociationRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
