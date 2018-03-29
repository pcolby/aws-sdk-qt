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

#include "updatevpclinkrequest.h"
#include "updatevpclinkrequest_p.h"
#include "updatevpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateVpcLinkRequest
 *
 * @brief  Implements APIGateway UpdateVpcLink requests.
 *
 * @see    APIGatewayClient::updateVpcLink
 */

/**
 * @brief  Constructs a new UpdateVpcLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateVpcLinkRequest::UpdateVpcLinkRequest(const UpdateVpcLinkRequest &other)
    : APIGatewayRequest(new UpdateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateVpcLinkRequest object.
 */
UpdateVpcLinkRequest::UpdateVpcLinkRequest()
    : APIGatewayRequest(new UpdateVpcLinkRequestPrivate(APIGatewayRequest::UpdateVpcLinkAction, this))
{

}

bool UpdateVpcLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateVpcLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateVpcLinkResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVpcLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateVpcLinkRequestPrivate
 *
 * @brief  Private implementation for UpdateVpcLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVpcLinkRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateVpcLinkRequest instance.
 */
UpdateVpcLinkRequestPrivate::UpdateVpcLinkRequestPrivate(
    const APIGatewayRequest::Action action, UpdateVpcLinkRequest * const q)
    : UpdateVpcLinkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVpcLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateVpcLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateVpcLinkRequest instance.
 */
UpdateVpcLinkRequestPrivate::UpdateVpcLinkRequestPrivate(
    const UpdateVpcLinkRequestPrivate &other, UpdateVpcLinkRequest * const q)
    : UpdateVpcLinkPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
