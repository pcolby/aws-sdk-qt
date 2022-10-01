// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapikeyrequest.h"
#include "deleteapikeyrequest_p.h"
#include "deleteapikeyresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteApiKeyRequest
 * \brief The DeleteApiKeyRequest class provides an interface for AppSync DeleteApiKey requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest(const DeleteApiKeyRequest &other)
    : AppSyncRequest(new DeleteApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiKeyRequest object.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest()
    : AppSyncRequest(new DeleteApiKeyRequestPrivate(AppSyncRequest::DeleteApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::DeleteApiKeyRequestPrivate
 * \brief The DeleteApiKeyRequestPrivate class provides private implementation for DeleteApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteApiKeyRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const AppSyncRequest::Action action, DeleteApiKeyRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiKeyRequest
 * class' copy constructor.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const DeleteApiKeyRequestPrivate &other, DeleteApiKeyRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
