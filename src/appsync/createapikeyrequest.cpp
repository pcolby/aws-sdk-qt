// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapikeyrequest.h"
#include "createapikeyrequest_p.h"
#include "createapikeyresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateApiKeyRequest
 * \brief The CreateApiKeyRequest class provides an interface for AppSync CreateApiKey requests.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApiKeyRequest::CreateApiKeyRequest(const CreateApiKeyRequest &other)
    : AppSyncRequest(new CreateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApiKeyRequest object.
 */
CreateApiKeyRequest::CreateApiKeyRequest()
    : AppSyncRequest(new CreateApiKeyRequestPrivate(AppSyncRequest::CreateApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::AppSync::CreateApiKeyRequestPrivate
 * \brief The CreateApiKeyRequestPrivate class provides private implementation for CreateApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateApiKeyRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const AppSyncRequest::Action action, CreateApiKeyRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApiKeyRequest
 * class' copy constructor.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const CreateApiKeyRequestPrivate &other, CreateApiKeyRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
