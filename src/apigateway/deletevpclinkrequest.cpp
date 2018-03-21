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

#include "deletevpclinkrequest.h"
#include "deletevpclinkrequest_p.h"
#include "deletevpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteVpcLinkRequest
 *
 * @brief  Implements APIGateway DeleteVpcLink requests.
 *
 * @see    APIGatewayClient::deleteVpcLink
 */

/**
 * @brief  Constructs a new DeleteVpcLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcLinkResponse::DeleteVpcLinkResponse(

/**
 * @brief  Constructs a new DeleteVpcLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest(const DeleteVpcLinkRequest &other)
    : APIGatewayRequest(new DeleteVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpcLinkRequest object.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest()
    : APIGatewayRequest(new DeleteVpcLinkRequestPrivate(APIGatewayRequest::DeleteVpcLinkAction, this))
{

}

bool DeleteVpcLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpcLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpcLinkResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpcLinkRequestPrivate
 *
 * @brief  Private implementation for DeleteVpcLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcLinkRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteVpcLinkRequest instance.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const APIGatewayRequest::Action action, DeleteVpcLinkRequest * const q)
    : DeleteVpcLinkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpcLinkRequest instance.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const DeleteVpcLinkRequestPrivate &other, DeleteVpcLinkRequest * const q)
    : DeleteVpcLinkPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
