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

#include "getresourcesrequest.h"
#include "getresourcesrequest_p.h"
#include "getresourcesresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetResourcesRequest
 *
 * @brief  Implements APIGateway GetResources requests.
 *
 * @see    APIGatewayClient::getResources
 */

/**
 * @brief  Constructs a new GetResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourcesResponse::GetResourcesResponse(

/**
 * @brief  Constructs a new GetResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResourcesRequest::GetResourcesRequest(const GetResourcesRequest &other)
    : APIGatewayRequest(new GetResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResourcesRequest object.
 */
GetResourcesRequest::GetResourcesRequest()
    : APIGatewayRequest(new GetResourcesRequestPrivate(APIGatewayRequest::GetResourcesAction, this))
{

}

bool GetResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResourcesRequestPrivate
 *
 * @brief  Private implementation for GetResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourcesRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetResourcesRequest instance.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const APIGatewayRequest::Action action, GetResourcesRequest * const q)
    : GetResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResourcesRequest instance.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const GetResourcesRequestPrivate &other, GetResourcesRequest * const q)
    : GetResourcesPrivate(other, q)
{

}
