// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapikeyrequest.h"
#include "updateapikeyrequest_p.h"
#include "updateapikeyresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateApiKeyRequest
 * \brief The UpdateApiKeyRequest class provides an interface for AppSync UpdateApiKey requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest(const UpdateApiKeyRequest &other)
    : AppSyncRequest(new UpdateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApiKeyRequest object.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest()
    : AppSyncRequest(new UpdateApiKeyRequestPrivate(AppSyncRequest::UpdateApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::UpdateApiKeyRequestPrivate
 * \brief The UpdateApiKeyRequestPrivate class provides private implementation for UpdateApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateApiKeyRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const AppSyncRequest::Action action, UpdateApiKeyRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiKeyRequest
 * class' copy constructor.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const UpdateApiKeyRequestPrivate &other, UpdateApiKeyRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
