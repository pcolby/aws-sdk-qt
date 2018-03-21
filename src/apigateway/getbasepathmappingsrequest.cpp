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

#include "getbasepathmappingsrequest.h"
#include "getbasepathmappingsrequest_p.h"
#include "getbasepathmappingsresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetBasePathMappingsRequest
 *
 * @brief  Implements APIGateway GetBasePathMappings requests.
 *
 * @see    APIGatewayClient::getBasePathMappings
 */

/**
 * @brief  Constructs a new GetBasePathMappingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBasePathMappingsRequest::GetBasePathMappingsRequest(const GetBasePathMappingsRequest &other)
    : APIGatewayRequest(new GetBasePathMappingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBasePathMappingsRequest object.
 */
GetBasePathMappingsRequest::GetBasePathMappingsRequest()
    : APIGatewayRequest(new GetBasePathMappingsRequestPrivate(APIGatewayRequest::GetBasePathMappingsAction, this))
{

}

bool GetBasePathMappingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBasePathMappingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBasePathMappingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetBasePathMappingsRequest::response(QNetworkReply * const reply) const
{
    return new GetBasePathMappingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBasePathMappingsRequestPrivate
 *
 * @brief  Private implementation for GetBasePathMappingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBasePathMappingsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetBasePathMappingsRequest instance.
 */
GetBasePathMappingsRequestPrivate::GetBasePathMappingsRequestPrivate(
    const APIGatewayRequest::Action action, GetBasePathMappingsRequest * const q)
    : GetBasePathMappingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBasePathMappingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBasePathMappingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBasePathMappingsRequest instance.
 */
GetBasePathMappingsRequestPrivate::GetBasePathMappingsRequestPrivate(
    const GetBasePathMappingsRequestPrivate &other, GetBasePathMappingsRequest * const q)
    : GetBasePathMappingsPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
