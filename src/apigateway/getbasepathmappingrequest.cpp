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

#include "getbasepathmappingrequest.h"
#include "getbasepathmappingrequest_p.h"
#include "getbasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetBasePathMappingRequest
 *
 * @brief  Implements APIGateway GetBasePathMapping requests.
 *
 * @see    APIGatewayClient::getBasePathMapping
 */

/**
 * @brief  Constructs a new GetBasePathMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBasePathMappingRequest::GetBasePathMappingRequest(const GetBasePathMappingRequest &other)
    : APIGatewayRequest(new GetBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBasePathMappingRequest object.
 */
GetBasePathMappingRequest::GetBasePathMappingRequest()
    : APIGatewayRequest(new GetBasePathMappingRequestPrivate(APIGatewayRequest::GetBasePathMappingAction, this))
{

}

bool GetBasePathMappingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBasePathMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBasePathMappingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetBasePathMappingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBasePathMappingRequestPrivate
 *
 * @brief  Private implementation for GetBasePathMappingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBasePathMappingRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetBasePathMappingRequest instance.
 */
GetBasePathMappingRequestPrivate::GetBasePathMappingRequestPrivate(
    const APIGatewayRequest::Action action, GetBasePathMappingRequest * const q)
    : GetBasePathMappingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBasePathMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBasePathMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBasePathMappingRequest instance.
 */
GetBasePathMappingRequestPrivate::GetBasePathMappingRequestPrivate(
    const GetBasePathMappingRequestPrivate &other, GetBasePathMappingRequest * const q)
    : GetBasePathMappingPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
