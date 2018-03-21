/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createapikeyrequest.h"
#include "createapikeyrequest_p.h"
#include "createapikeyresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  CreateApiKeyRequest
 *
 * @brief  Implements AppSync CreateApiKey requests.
 *
 * @see    AppSyncClient::createApiKey
 */

/**
 * @brief  Constructs a new CreateApiKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateApiKeyResponse::CreateApiKeyResponse(

/**
 * @brief  Constructs a new CreateApiKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateApiKeyRequest::CreateApiKeyRequest(const CreateApiKeyRequest &other)
    : AppSyncRequest(new CreateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateApiKeyRequest object.
 */
CreateApiKeyRequest::CreateApiKeyRequest()
    : AppSyncRequest(new CreateApiKeyRequestPrivate(AppSyncRequest::CreateApiKeyAction, this))
{

}

bool CreateApiKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateApiKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateApiKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * CreateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateApiKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateApiKeyRequestPrivate
 *
 * @brief  Private implementation for CreateApiKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApiKeyRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public CreateApiKeyRequest instance.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const AppSyncRequest::Action action, CreateApiKeyRequest * const q)
    : CreateApiKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateApiKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateApiKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateApiKeyRequest instance.
 */
CreateApiKeyRequestPrivate::CreateApiKeyRequestPrivate(
    const CreateApiKeyRequestPrivate &other, CreateApiKeyRequest * const q)
    : CreateApiKeyPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS
