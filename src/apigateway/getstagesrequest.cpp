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

#include "getstagesrequest.h"
#include "getstagesrequest_p.h"
#include "getstagesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetStagesRequest
 *
 * @brief  Implements APIGateway GetStages requests.
 *
 * @see    APIGatewayClient::getStages
 */

/**
 * @brief  Constructs a new GetStagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStagesRequest::GetStagesRequest(const GetStagesRequest &other)
    : APIGatewayRequest(new GetStagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStagesRequest object.
 */
GetStagesRequest::GetStagesRequest()
    : APIGatewayRequest(new GetStagesRequestPrivate(APIGatewayRequest::GetStagesAction, this))
{

}

bool GetStagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetStagesRequest::response(QNetworkReply * const reply) const
{
    return new GetStagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStagesRequestPrivate
 *
 * @brief  Private implementation for GetStagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStagesRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetStagesRequest instance.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const APIGatewayRequest::Action action, GetStagesRequest * const q)
    : GetStagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStagesRequest instance.
 */
GetStagesRequestPrivate::GetStagesRequestPrivate(
    const GetStagesRequestPrivate &other, GetStagesRequest * const q)
    : GetStagesPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
