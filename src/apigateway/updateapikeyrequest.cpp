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

#include "updateapikeyrequest.h"
#include "updateapikeyrequest_p.h"
#include "updateapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateApiKeyRequest
 *
 * @brief  Implements APIGateway UpdateApiKey requests.
 *
 * @see    APIGatewayClient::updateApiKey
 */

/**
 * @brief  Constructs a new UpdateApiKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApiKeyResponse::UpdateApiKeyResponse(

/**
 * @brief  Constructs a new UpdateApiKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest(const UpdateApiKeyRequest &other)
    : APIGatewayRequest(new UpdateApiKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApiKeyRequest object.
 */
UpdateApiKeyRequest::UpdateApiKeyRequest()
    : APIGatewayRequest(new UpdateApiKeyRequestPrivate(APIGatewayRequest::UpdateApiKeyAction, this))
{

}

bool UpdateApiKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApiKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApiKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApiKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApiKeyRequestPrivate
 *
 * @brief  Private implementation for UpdateApiKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApiKeyRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateApiKeyRequest instance.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const APIGatewayRequest::Action action, UpdateApiKeyRequest * const q)
    : UpdateApiKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApiKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApiKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApiKeyRequest instance.
 */
UpdateApiKeyRequestPrivate::UpdateApiKeyRequestPrivate(
    const UpdateApiKeyRequestPrivate &other, UpdateApiKeyRequest * const q)
    : UpdateApiKeyPrivate(other, q)
{

}
