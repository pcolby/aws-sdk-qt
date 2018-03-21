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

#include "getusageplankeyrequest.h"
#include "getusageplankeyrequest_p.h"
#include "getusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsagePlanKeyRequest
 *
 * @brief  Implements APIGateway GetUsagePlanKey requests.
 *
 * @see    APIGatewayClient::getUsagePlanKey
 */

/**
 * @brief  Constructs a new GetUsagePlanKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlanKeyResponse::GetUsagePlanKeyResponse(

/**
 * @brief  Constructs a new GetUsagePlanKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUsagePlanKeyRequest::GetUsagePlanKeyRequest(const GetUsagePlanKeyRequest &other)
    : APIGatewayRequest(new GetUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUsagePlanKeyRequest object.
 */
GetUsagePlanKeyRequest::GetUsagePlanKeyRequest()
    : APIGatewayRequest(new GetUsagePlanKeyRequestPrivate(APIGatewayRequest::GetUsagePlanKeyAction, this))
{

}

bool GetUsagePlanKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUsagePlanKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUsagePlanKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUsagePlanKeyRequestPrivate
 *
 * @brief  Private implementation for GetUsagePlanKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanKeyRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetUsagePlanKeyRequest instance.
 */
GetUsagePlanKeyRequestPrivate::GetUsagePlanKeyRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlanKeyRequest * const q)
    : GetUsagePlanKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUsagePlanKeyRequest instance.
 */
GetUsagePlanKeyRequestPrivate::GetUsagePlanKeyRequestPrivate(
    const GetUsagePlanKeyRequestPrivate &other, GetUsagePlanKeyRequest * const q)
    : GetUsagePlanKeyPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
