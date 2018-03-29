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

#include "getvpclinksrequest.h"
#include "getvpclinksrequest_p.h"
#include "getvpclinksresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetVpcLinksRequest
 *
 * @brief  Implements APIGateway GetVpcLinks requests.
 *
 * @see    APIGatewayClient::getVpcLinks
 */

/**
 * @brief  Constructs a new GetVpcLinksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetVpcLinksRequest::GetVpcLinksRequest(const GetVpcLinksRequest &other)
    : APIGatewayRequest(new GetVpcLinksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetVpcLinksRequest object.
 */
GetVpcLinksRequest::GetVpcLinksRequest()
    : APIGatewayRequest(new GetVpcLinksRequestPrivate(APIGatewayRequest::GetVpcLinksAction, this))
{

}

bool GetVpcLinksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetVpcLinksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetVpcLinksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetVpcLinksRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetVpcLinksRequestPrivate
 *
 * @brief  Private implementation for GetVpcLinksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVpcLinksRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetVpcLinksRequest instance.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const APIGatewayRequest::Action action, GetVpcLinksRequest * const q)
    : GetVpcLinksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetVpcLinksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetVpcLinksRequest instance.
 */
GetVpcLinksRequestPrivate::GetVpcLinksRequestPrivate(
    const GetVpcLinksRequestPrivate &other, GetVpcLinksRequest * const q)
    : GetVpcLinksPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
