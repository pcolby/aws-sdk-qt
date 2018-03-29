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

#include "importapikeysrequest.h"
#include "importapikeysrequest_p.h"
#include "importapikeysresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  ImportApiKeysRequest
 *
 * @brief  Implements APIGateway ImportApiKeys requests.
 *
 * @see    APIGatewayClient::importApiKeys
 */

/**
 * @brief  Constructs a new ImportApiKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportApiKeysRequest::ImportApiKeysRequest(const ImportApiKeysRequest &other)
    : APIGatewayRequest(new ImportApiKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportApiKeysRequest object.
 */
ImportApiKeysRequest::ImportApiKeysRequest()
    : APIGatewayRequest(new ImportApiKeysRequestPrivate(APIGatewayRequest::ImportApiKeysAction, this))
{

}

bool ImportApiKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportApiKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportApiKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * ImportApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new ImportApiKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportApiKeysRequestPrivate
 *
 * @brief  Private implementation for ImportApiKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportApiKeysRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public ImportApiKeysRequest instance.
 */
ImportApiKeysRequestPrivate::ImportApiKeysRequestPrivate(
    const APIGatewayRequest::Action action, ImportApiKeysRequest * const q)
    : ImportApiKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportApiKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportApiKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportApiKeysRequest instance.
 */
ImportApiKeysRequestPrivate::ImportApiKeysRequestPrivate(
    const ImportApiKeysRequestPrivate &other, ImportApiKeysRequest * const q)
    : ImportApiKeysPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
