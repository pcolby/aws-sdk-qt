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

#include "deletebasepathmappingrequest.h"
#include "deletebasepathmappingrequest_p.h"
#include "deletebasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteBasePathMappingRequest
 *
 * @brief  Implements APIGateway DeleteBasePathMapping requests.
 *
 * @see    APIGatewayClient::deleteBasePathMapping
 */

/**
 * @brief  Constructs a new DeleteBasePathMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBasePathMappingRequest::DeleteBasePathMappingRequest(const DeleteBasePathMappingRequest &other)
    : APIGatewayRequest(new DeleteBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBasePathMappingRequest object.
 */
DeleteBasePathMappingRequest::DeleteBasePathMappingRequest()
    : APIGatewayRequest(new DeleteBasePathMappingRequestPrivate(APIGatewayRequest::DeleteBasePathMappingAction, this))
{

}

bool DeleteBasePathMappingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBasePathMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBasePathMappingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBasePathMappingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBasePathMappingRequestPrivate
 *
 * @brief  Private implementation for DeleteBasePathMappingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBasePathMappingRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteBasePathMappingRequest instance.
 */
DeleteBasePathMappingRequestPrivate::DeleteBasePathMappingRequestPrivate(
    const APIGatewayRequest::Action action, DeleteBasePathMappingRequest * const q)
    : DeleteBasePathMappingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBasePathMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBasePathMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBasePathMappingRequest instance.
 */
DeleteBasePathMappingRequestPrivate::DeleteBasePathMappingRequestPrivate(
    const DeleteBasePathMappingRequestPrivate &other, DeleteBasePathMappingRequest * const q)
    : DeleteBasePathMappingPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
