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

#include "getauthorizersrequest.h"
#include "getauthorizersrequest_p.h"
#include "getauthorizersresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetAuthorizersRequest
 *
 * @brief  Implements APIGateway GetAuthorizers requests.
 *
 * @see    APIGatewayClient::getAuthorizers
 */

/**
 * @brief  Constructs a new GetAuthorizersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAuthorizersRequest::GetAuthorizersRequest(const GetAuthorizersRequest &other)
    : APIGatewayRequest(new GetAuthorizersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAuthorizersRequest object.
 */
GetAuthorizersRequest::GetAuthorizersRequest()
    : APIGatewayRequest(new GetAuthorizersRequestPrivate(APIGatewayRequest::GetAuthorizersAction, this))
{

}

bool GetAuthorizersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAuthorizersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAuthorizersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetAuthorizersRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAuthorizersRequestPrivate
 *
 * @brief  Private implementation for GetAuthorizersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizersRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetAuthorizersRequest instance.
 */
GetAuthorizersRequestPrivate::GetAuthorizersRequestPrivate(
    const APIGatewayRequest::Action action, GetAuthorizersRequest * const q)
    : GetAuthorizersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAuthorizersRequest instance.
 */
GetAuthorizersRequestPrivate::GetAuthorizersRequestPrivate(
    const GetAuthorizersRequestPrivate &other, GetAuthorizersRequest * const q)
    : GetAuthorizersPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
