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

#include "getgatewayresponserequest.h"
#include "getgatewayresponserequest_p.h"
#include "getgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetGatewayResponseRequest
 *
 * @brief  Implements APIGateway GetGatewayResponse requests.
 *
 * @see    APIGatewayClient::getGatewayResponse
 */

/**
 * @brief  Constructs a new GetGatewayResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest(const GetGatewayResponseRequest &other)
    : APIGatewayRequest(new GetGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGatewayResponseRequest object.
 */
GetGatewayResponseRequest::GetGatewayResponseRequest()
    : APIGatewayRequest(new GetGatewayResponseRequestPrivate(APIGatewayRequest::GetGatewayResponseAction, this))
{

}

bool GetGatewayResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGatewayResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGatewayResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGatewayResponseRequestPrivate
 *
 * @brief  Private implementation for GetGatewayResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetGatewayResponseRequest instance.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const APIGatewayRequest::Action action, GetGatewayResponseRequest * const q)
    : GetGatewayResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGatewayResponseRequest instance.
 */
GetGatewayResponseRequestPrivate::GetGatewayResponseRequestPrivate(
    const GetGatewayResponseRequestPrivate &other, GetGatewayResponseRequest * const q)
    : GetGatewayResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
