// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startschemacreationrequest.h"
#include "startschemacreationrequest_p.h"
#include "startschemacreationresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::StartSchemaCreationRequest
 * \brief The StartSchemaCreationRequest class provides an interface for AppSync StartSchemaCreation requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::startSchemaCreation
 */

/*!
 * Constructs a copy of \a other.
 */
StartSchemaCreationRequest::StartSchemaCreationRequest(const StartSchemaCreationRequest &other)
    : AppSyncRequest(new StartSchemaCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSchemaCreationRequest object.
 */
StartSchemaCreationRequest::StartSchemaCreationRequest()
    : AppSyncRequest(new StartSchemaCreationRequestPrivate(AppSyncRequest::StartSchemaCreationAction, this))
{

}

/*!
 * \reimp
 */
bool StartSchemaCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSchemaCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSchemaCreationRequest::response(QNetworkReply * const reply) const
{
    return new StartSchemaCreationResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::StartSchemaCreationRequestPrivate
 * \brief The StartSchemaCreationRequestPrivate class provides private implementation for StartSchemaCreationRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a StartSchemaCreationRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
StartSchemaCreationRequestPrivate::StartSchemaCreationRequestPrivate(
    const AppSyncRequest::Action action, StartSchemaCreationRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSchemaCreationRequest
 * class' copy constructor.
 */
StartSchemaCreationRequestPrivate::StartSchemaCreationRequestPrivate(
    const StartSchemaCreationRequestPrivate &other, StartSchemaCreationRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
