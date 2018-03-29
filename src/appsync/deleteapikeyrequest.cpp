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

#include "deleteapikeyrequest.h"
#include "deleteapikeyrequest_p.h"
#include "deleteapikeyresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/**
 * @class  DeleteApiKeyRequest
 *
 * @brief  Implements AppSync DeleteApiKey requests.
 *
 * @see    AppSyncClient::deleteApiKey
 */

/**
 * @brief  Constructs a new DeleteApiKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest(const DeleteApiKeyRequest &other)
    : AppSyncRequest(new DeleteApiKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApiKeyRequest object.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest()
    : AppSyncRequest(new DeleteApiKeyRequestPrivate(AppSyncRequest::DeleteApiKeyAction, this))
{

}

bool DeleteApiKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApiKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApiKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApiKeyRequestPrivate
 *
 * @brief  Private implementation for DeleteApiKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApiKeyRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public DeleteApiKeyRequest instance.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const AppSyncRequest::Action action, DeleteApiKeyRequest * const q)
    : DeleteApiKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApiKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApiKeyRequest instance.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const DeleteApiKeyRequestPrivate &other, DeleteApiKeyRequest * const q)
    : DeleteApiKeyPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
