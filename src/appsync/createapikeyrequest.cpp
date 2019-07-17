/*
    Copyright 2013-2019 Paul Colby

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
