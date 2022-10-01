// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
