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

#include "getmethodrequest.h"
#include "getmethodrequest_p.h"
#include "getmethodresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetMethodRequest
 *
 * @brief  Implements APIGateway GetMethod requests.
 *
 * @see    APIGatewayClient::getMethod
 */

/**
 * @brief  Constructs a new GetMethodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMethodRequest::GetMethodRequest(const GetMethodRequest &other)
    : APIGatewayRequest(new GetMethodRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMethodRequest object.
 */
GetMethodRequest::GetMethodRequest()
    : APIGatewayRequest(new GetMethodRequestPrivate(APIGatewayRequest::GetMethodAction, this))
{

}

bool GetMethodRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMethodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMethodResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetMethodRequest::response(QNetworkReply * const reply) const
{
    return new GetMethodResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMethodRequestPrivate
 *
 * @brief  Private implementation for GetMethodRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMethodRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetMethodRequest instance.
 */
GetMethodRequestPrivate::GetMethodRequestPrivate(
    const APIGatewayRequest::Action action, GetMethodRequest * const q)
    : GetMethodPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMethodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMethodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMethodRequest instance.
 */
GetMethodRequestPrivate::GetMethodRequestPrivate(
    const GetMethodRequestPrivate &other, GetMethodRequest * const q)
    : GetMethodPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
