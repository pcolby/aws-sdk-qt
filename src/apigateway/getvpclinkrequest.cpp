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

#include "getvpclinkrequest.h"
#include "getvpclinkrequest_p.h"
#include "getvpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetVpcLinkRequest
 *
 * @brief  Implements APIGateway GetVpcLink requests.
 *
 * @see    APIGatewayClient::getVpcLink
 */

/**
 * @brief  Constructs a new GetVpcLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetVpcLinkRequest::GetVpcLinkRequest(const GetVpcLinkRequest &other)
    : APIGatewayRequest(new GetVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetVpcLinkRequest object.
 */
GetVpcLinkRequest::GetVpcLinkRequest()
    : APIGatewayRequest(new GetVpcLinkRequestPrivate(APIGatewayRequest::GetVpcLinkAction, this))
{

}

bool GetVpcLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetVpcLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetVpcLinkResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new GetVpcLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetVpcLinkRequestPrivate
 *
 * @brief  Private implementation for GetVpcLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVpcLinkRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetVpcLinkRequest instance.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const APIGatewayRequest::Action action, GetVpcLinkRequest * const q)
    : GetVpcLinkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetVpcLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetVpcLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetVpcLinkRequest instance.
 */
GetVpcLinkRequestPrivate::GetVpcLinkRequestPrivate(
    const GetVpcLinkRequestPrivate &other, GetVpcLinkRequest * const q)
    : GetVpcLinkPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
