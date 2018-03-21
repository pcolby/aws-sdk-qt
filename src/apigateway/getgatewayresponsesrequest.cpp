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

#include "getgatewayresponsesrequest.h"
#include "getgatewayresponsesrequest_p.h"
#include "getgatewayresponsesresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetGatewayResponsesRequest
 *
 * @brief  Implements APIGateway GetGatewayResponses requests.
 *
 * @see    APIGatewayClient::getGatewayResponses
 */

/**
 * @brief  Constructs a new GetGatewayResponsesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGatewayResponsesResponse::GetGatewayResponsesResponse(

/**
 * @brief  Constructs a new GetGatewayResponsesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGatewayResponsesRequest::GetGatewayResponsesRequest(const GetGatewayResponsesRequest &other)
    : APIGatewayRequest(new GetGatewayResponsesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGatewayResponsesRequest object.
 */
GetGatewayResponsesRequest::GetGatewayResponsesRequest()
    : APIGatewayRequest(new GetGatewayResponsesRequestPrivate(APIGatewayRequest::GetGatewayResponsesAction, this))
{

}

bool GetGatewayResponsesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGatewayResponsesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGatewayResponsesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetGatewayResponsesRequest::response(QNetworkReply * const reply) const
{
    return new GetGatewayResponsesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGatewayResponsesRequestPrivate
 *
 * @brief  Private implementation for GetGatewayResponsesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponsesRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetGatewayResponsesRequest instance.
 */
GetGatewayResponsesRequestPrivate::GetGatewayResponsesRequestPrivate(
    const APIGatewayRequest::Action action, GetGatewayResponsesRequest * const q)
    : GetGatewayResponsesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponsesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGatewayResponsesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGatewayResponsesRequest instance.
 */
GetGatewayResponsesRequestPrivate::GetGatewayResponsesRequestPrivate(
    const GetGatewayResponsesRequestPrivate &other, GetGatewayResponsesRequest * const q)
    : GetGatewayResponsesPrivate(other, q)
{

}
