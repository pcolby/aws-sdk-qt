/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
 *
 * Constructs a UpdateApiKeyRequestPrivate object for AppSync \a action with,
 * public implementation \a q.
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
