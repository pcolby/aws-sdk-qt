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

#include "getusageplansrequest.h"
#include "getusageplansrequest_p.h"
#include "getusageplansresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsagePlansRequest
 *
 * @brief  Implements APIGateway GetUsagePlans requests.
 *
 * @see    APIGatewayClient::getUsagePlans
 */

/**
 * @brief  Constructs a new GetUsagePlansResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlansResponse::GetUsagePlansResponse(

/**
 * @brief  Constructs a new GetUsagePlansRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUsagePlansRequest::GetUsagePlansRequest(const GetUsagePlansRequest &other)
    : APIGatewayRequest(new GetUsagePlansRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUsagePlansRequest object.
 */
GetUsagePlansRequest::GetUsagePlansRequest()
    : APIGatewayRequest(new GetUsagePlansRequestPrivate(APIGatewayRequest::GetUsagePlansAction, this))
{

}

bool GetUsagePlansRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUsagePlansResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUsagePlansResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetUsagePlansRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlansResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUsagePlansRequestPrivate
 *
 * @brief  Private implementation for GetUsagePlansRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlansRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetUsagePlansRequest instance.
 */
GetUsagePlansRequestPrivate::GetUsagePlansRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlansRequest * const q)
    : GetUsagePlansPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlansRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlansRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUsagePlansRequest instance.
 */
GetUsagePlansRequestPrivate::GetUsagePlansRequestPrivate(
    const GetUsagePlansRequestPrivate &other, GetUsagePlansRequest * const q)
    : GetUsagePlansPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
