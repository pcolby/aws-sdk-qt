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

#include "getresourcerequest.h"
#include "getresourcerequest_p.h"
#include "getresourceresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetResourceRequest
 *
 * @brief  Implements APIGateway GetResource requests.
 *
 * @see    APIGatewayClient::getResource
 */

/**
 * @brief  Constructs a new GetResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResourceRequest::GetResourceRequest(const GetResourceRequest &other)
    : APIGatewayRequest(new GetResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResourceRequest object.
 */
GetResourceRequest::GetResourceRequest()
    : APIGatewayRequest(new GetResourceRequestPrivate(APIGatewayRequest::GetResourceAction, this))
{

}

bool GetResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResourceRequestPrivate
 *
 * @brief  Private implementation for GetResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetResourceRequest instance.
 */
GetResourceRequestPrivate::GetResourceRequestPrivate(
    const APIGatewayRequest::Action action, GetResourceRequest * const q)
    : GetResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResourceRequest instance.
 */
GetResourceRequestPrivate::GetResourceRequestPrivate(
    const GetResourceRequestPrivate &other, GetResourceRequest * const q)
    : GetResourcePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
