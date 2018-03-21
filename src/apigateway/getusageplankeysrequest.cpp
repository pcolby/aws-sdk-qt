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

#include "getusageplankeysrequest.h"
#include "getusageplankeysrequest_p.h"
#include "getusageplankeysresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsagePlanKeysRequest
 *
 * @brief  Implements APIGateway GetUsagePlanKeys requests.
 *
 * @see    APIGatewayClient::getUsagePlanKeys
 */

/**
 * @brief  Constructs a new GetUsagePlanKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlanKeysResponse::GetUsagePlanKeysResponse(

/**
 * @brief  Constructs a new GetUsagePlanKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUsagePlanKeysRequest::GetUsagePlanKeysRequest(const GetUsagePlanKeysRequest &other)
    : APIGatewayRequest(new GetUsagePlanKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUsagePlanKeysRequest object.
 */
GetUsagePlanKeysRequest::GetUsagePlanKeysRequest()
    : APIGatewayRequest(new GetUsagePlanKeysRequestPrivate(APIGatewayRequest::GetUsagePlanKeysAction, this))
{

}

bool GetUsagePlanKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUsagePlanKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUsagePlanKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetUsagePlanKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUsagePlanKeysRequestPrivate
 *
 * @brief  Private implementation for GetUsagePlanKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanKeysRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetUsagePlanKeysRequest instance.
 */
GetUsagePlanKeysRequestPrivate::GetUsagePlanKeysRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlanKeysRequest * const q)
    : GetUsagePlanKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUsagePlanKeysRequest instance.
 */
GetUsagePlanKeysRequestPrivate::GetUsagePlanKeysRequestPrivate(
    const GetUsagePlanKeysRequestPrivate &other, GetUsagePlanKeysRequest * const q)
    : GetUsagePlanKeysPrivate(other, q)
{

}
