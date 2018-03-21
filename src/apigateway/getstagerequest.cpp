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

#include "getstagerequest.h"
#include "getstagerequest_p.h"
#include "getstageresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetStageRequest
 *
 * @brief  Implements APIGateway GetStage requests.
 *
 * @see    APIGatewayClient::getStage
 */

/**
 * @brief  Constructs a new GetStageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStageRequest::GetStageRequest(const GetStageRequest &other)
    : APIGatewayRequest(new GetStageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStageRequest object.
 */
GetStageRequest::GetStageRequest()
    : APIGatewayRequest(new GetStageRequestPrivate(APIGatewayRequest::GetStageAction, this))
{

}

bool GetStageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetStageRequest::response(QNetworkReply * const reply) const
{
    return new GetStageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStageRequestPrivate
 *
 * @brief  Private implementation for GetStageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetStageRequest instance.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const APIGatewayRequest::Action action, GetStageRequest * const q)
    : GetStagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStageRequest instance.
 */
GetStageRequestPrivate::GetStageRequestPrivate(
    const GetStageRequestPrivate &other, GetStageRequest * const q)
    : GetStagePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
