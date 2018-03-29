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

#include "updatemethodrequest.h"
#include "updatemethodrequest_p.h"
#include "updatemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateMethodRequest
 *
 * @brief  Implements APIGateway UpdateMethod requests.
 *
 * @see    APIGatewayClient::updateMethod
 */

/**
 * @brief  Constructs a new UpdateMethodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMethodRequest::UpdateMethodRequest(const UpdateMethodRequest &other)
    : APIGatewayRequest(new UpdateMethodRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMethodRequest object.
 */
UpdateMethodRequest::UpdateMethodRequest()
    : APIGatewayRequest(new UpdateMethodRequestPrivate(APIGatewayRequest::UpdateMethodAction, this))
{

}

bool UpdateMethodRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMethodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMethodResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateMethodRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMethodResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMethodRequestPrivate
 *
 * @brief  Private implementation for UpdateMethodRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMethodRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateMethodRequest instance.
 */
UpdateMethodRequestPrivate::UpdateMethodRequestPrivate(
    const APIGatewayRequest::Action action, UpdateMethodRequest * const q)
    : UpdateMethodPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMethodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMethodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMethodRequest instance.
 */
UpdateMethodRequestPrivate::UpdateMethodRequestPrivate(
    const UpdateMethodRequestPrivate &other, UpdateMethodRequest * const q)
    : UpdateMethodPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
