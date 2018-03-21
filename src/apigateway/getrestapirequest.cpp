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

#include "getrestapirequest.h"
#include "getrestapirequest_p.h"
#include "getrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetRestApiRequest
 *
 * @brief  Implements APIGateway GetRestApi requests.
 *
 * @see    APIGatewayClient::getRestApi
 */

/**
 * @brief  Constructs a new GetRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRestApiResponse::GetRestApiResponse(

/**
 * @brief  Constructs a new GetRestApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRestApiRequest::GetRestApiRequest(const GetRestApiRequest &other)
    : APIGatewayRequest(new GetRestApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRestApiRequest object.
 */
GetRestApiRequest::GetRestApiRequest()
    : APIGatewayRequest(new GetRestApiRequestPrivate(APIGatewayRequest::GetRestApiAction, this))
{

}

bool GetRestApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRestApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRestApiResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetRestApiRequest::response(QNetworkReply * const reply) const
{
    return new GetRestApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRestApiRequestPrivate
 *
 * @brief  Private implementation for GetRestApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRestApiRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetRestApiRequest instance.
 */
GetRestApiRequestPrivate::GetRestApiRequestPrivate(
    const APIGatewayRequest::Action action, GetRestApiRequest * const q)
    : GetRestApiPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRestApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRestApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRestApiRequest instance.
 */
GetRestApiRequestPrivate::GetRestApiRequestPrivate(
    const GetRestApiRequestPrivate &other, GetRestApiRequest * const q)
    : GetRestApiPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
